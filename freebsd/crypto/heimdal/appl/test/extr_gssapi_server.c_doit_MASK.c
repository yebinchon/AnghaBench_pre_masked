
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int one ;
typedef int my_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,int *) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (int,char const*) ;
 scalar_t__ FUNC_6 (int,int ,int ,void*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9 (int VAR_5, const char *VAR_6)
{
    int VAR_7, VAR_8;
    struct sockaddr_in VAR_9;
    int VAR_10 = 1;
    int VAR_11;

    VAR_7 = FUNC_7 (VAR_0, VAR_2, 0);
    if (VAR_7 < 0)
 FUNC_2 (1, "socket");

    FUNC_4 (&VAR_9, 0, sizeof(VAR_9));
    VAR_9.sin_family = VAR_0;
    VAR_9.sin_port = VAR_5;
    VAR_9.sin_addr.s_addr = VAR_1;

    if (FUNC_6 (VAR_7, VAR_3, VAR_4,
      (void *)&VAR_10, sizeof(VAR_10)) < 0)
 FUNC_8 ("setsockopt SO_REUSEADDR");

    if (FUNC_1 (VAR_7, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0)
 FUNC_2 (1, "bind");

    while (1) {
        if (FUNC_3 (VAR_7, 1) < 0)
     FUNC_2 (1, "listen");

        VAR_8 = FUNC_0 (VAR_7, ((void*)0), ((void*)0));
        if (VAR_8 < 0)
     FUNC_2 (1, "accept");

        VAR_11 = FUNC_5 (VAR_8, VAR_6);
    }
    return VAR_11;
}
