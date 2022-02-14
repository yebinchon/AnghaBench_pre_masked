
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_3__ {scalar_t__ ip_addr; struct TYPE_3__* ip_next; } ;
typedef TYPE_1__ addrlist ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(u_long VAR_3)
{
  addrlist *VAR_4;

  for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->ip_next) {
    if (VAR_4->ip_addr == VAR_3)
      return VAR_1;
  }
  return VAR_0;
}
