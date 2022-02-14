
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_pf_qmgr {int num_queues; TYPE_1__* qinfo; } ;
struct TYPE_2__ {int allocated; } ;



int
FUNC_0(struct ixl_pf_qmgr *VAR_0)
{
 int VAR_1 = 0;

 for (int VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
  if (!VAR_0->qinfo[VAR_2].allocated)
   VAR_1++;
 }

 return (VAR_1);
}
