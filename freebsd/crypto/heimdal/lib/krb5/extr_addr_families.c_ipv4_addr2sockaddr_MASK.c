
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct sockaddr {int dummy; } ;
struct sockaddr_in {int sin_port; struct sockaddr sin_addr; int sin_family; } ;
typedef int krb5_socklen_t ;
struct TYPE_4__ {struct sockaddr_in* data; } ;
struct TYPE_5__ {TYPE_1__ address; } ;
typedef TYPE_2__ krb5_address ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr_in*,int) ;
 int FUNC_1 (struct sockaddr_in*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3 (const krb5_address *VAR_1,
      struct sockaddr *VAR_2,
      krb5_socklen_t *VAR_3,
      int VAR_4)
{
    struct sockaddr_in VAR_5;

    FUNC_1 (&VAR_5, 0, sizeof(VAR_5));
    VAR_5.sin_family = VAR_0;
    FUNC_0 (&VAR_5.sin_addr, VAR_1->address.data, 4);
    VAR_5.sin_port = VAR_4;
    FUNC_0(VAR_2, &VAR_5, FUNC_2(sizeof(VAR_5), *VAR_3));
    *VAR_3 = sizeof(VAR_5);
}
