
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct pmap_list {scalar_t__ prog; scalar_t__ vers; int port; TYPE_1__ addr; } ;
struct in_addr {scalar_t__ s_addr; } ;


 struct pmap_list* VAR_0 ;
 size_t VAR_1 ;

int
FUNC_0(struct in_addr VAR_2, u_int VAR_3, u_int VAR_4)
{
 struct pmap_list *VAR_5;

 for (VAR_5 = VAR_0; VAR_5 < &VAR_0[VAR_1]; VAR_5++) {
  if (VAR_5->addr.s_addr == VAR_2.s_addr &&
   VAR_5->prog == VAR_3 && VAR_5->vers == VAR_4 )
  {
   return (VAR_5->port);
  }
 }
 return (-1);
}
