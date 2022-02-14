
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int krb5_socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr_in*,int ) ;
 int FUNC_1 (struct sockaddr_in*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3 (struct sockaddr *VAR_2, krb5_socklen_t *VAR_3, int VAR_4)
{
    struct sockaddr_in VAR_5;

    FUNC_1 (&VAR_5, 0, sizeof(VAR_5));
    VAR_5.sin_family = VAR_0;
    VAR_5.sin_port = VAR_4;
    VAR_5.sin_addr.s_addr = VAR_1;
    FUNC_0(VAR_2, &VAR_5, FUNC_2(sizeof(VAR_5), *VAR_3));
    *VAR_3 = sizeof(VAR_5);
}
