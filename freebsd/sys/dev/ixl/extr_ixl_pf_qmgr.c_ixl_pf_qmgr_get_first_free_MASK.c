
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ixl_pf_qmgr {int num_queues; TYPE_1__* qinfo; } ;
struct TYPE_2__ {scalar_t__ allocated; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct ixl_pf_qmgr *VAR_2, u16 VAR_3)
{
 int VAR_4;

 if (VAR_3 > VAR_2->num_queues - 1)
  return (-VAR_0);

 for (VAR_4 = VAR_3; VAR_4 < VAR_2->num_queues; VAR_4++) {
  if (VAR_2->qinfo[VAR_4].allocated)
   continue;
  else
   return (VAR_4);
 }


 return (-VAR_1);
}
