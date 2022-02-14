
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct client {int salen; int moniker; TYPE_1__* sa; } ;
typedef int socklen_t ;
typedef int sast ;
typedef int int32_t ;
struct TYPE_2__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (struct sockaddr_storage*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct client*,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct sockaddr*) ;

__attribute__((used)) static int
FUNC_12(struct client *VAR_3)
{
    int32_t VAR_4;
    struct sockaddr_storage VAR_5;
    socklen_t VAR_6 = sizeof(VAR_5);
    int VAR_7, VAR_8, VAR_9;

    FUNC_7(&VAR_5, 0, sizeof(VAR_5));

    FUNC_1(sizeof(VAR_5) >= VAR_3->salen);

    VAR_7 = FUNC_10(VAR_3->sa->sa_family, VAR_0, 0);
    if (VAR_7 < 0)
 FUNC_4(1, "failed to build socket for %s's logging port", VAR_3->moniker);

    ((struct sockaddr *)&VAR_5)->sa_family = VAR_3->sa->sa_family;
    VAR_9 = FUNC_2(VAR_7, (struct sockaddr *)&VAR_5, VAR_3->salen);
    if (VAR_9 < 0)
 FUNC_4(1, "failed to bind %s's logging port", VAR_3->moniker);

    if (FUNC_6(VAR_7, VAR_1) < 0)
 FUNC_4(1, "failed to listen %s's logging port", VAR_3->moniker);

    VAR_6 = sizeof(VAR_5);
    VAR_9 = FUNC_5(VAR_7, (struct sockaddr *)&VAR_5, &VAR_6);
    if (VAR_9 < 0)
 FUNC_4(1, "failed to get address of local socket for %s", VAR_3->moniker);

    VAR_4 = FUNC_11((struct sockaddr *)&VAR_5);

    FUNC_9(VAR_3, VAR_2);
    FUNC_9(VAR_3, FUNC_8(VAR_4));

    VAR_6 = sizeof(VAR_5);
    VAR_8 = FUNC_0(VAR_7, (struct sockaddr *)&VAR_5, &VAR_6);
    if (VAR_8 < 0)
 FUNC_4(1, "failed to accept local socket for %s", VAR_3->moniker);
    FUNC_3(VAR_7);

    return VAR_8;
}
