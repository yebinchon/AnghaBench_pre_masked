
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int buf ;
struct TYPE_3__ {int ip_addr; int ip_mask; struct TYPE_3__* ip_next; } ;
typedef TYPE_1__ addrlist ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;

int
FUNC_2(u_long VAR_4)
{
  addrlist *VAR_5;

  for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->ip_next)
    if (((VAR_4 ^ VAR_5->ip_addr) & VAR_5->ip_mask) == 0)
      return VAR_1;
  return VAR_0;
}
