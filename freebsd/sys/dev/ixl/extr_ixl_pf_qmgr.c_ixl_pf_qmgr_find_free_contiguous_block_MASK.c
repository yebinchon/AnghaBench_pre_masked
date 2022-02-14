
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixl_pf_qmgr {int num_queues; TYPE_1__* qinfo; } ;
struct TYPE_2__ {int allocated; } ;



__attribute__((used)) static int
FUNC_0(struct ixl_pf_qmgr *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 bool VAR_4 = 0;
 int VAR_5;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
  if (!VAR_0->qinfo[VAR_2].allocated) {
   if (!VAR_4) {
    VAR_4 = 1;
    VAR_5 = VAR_2;
   }
   VAR_3++;
   if (VAR_3 == VAR_1)
    return (VAR_5);
  } else {
   VAR_4 = 0;
   VAR_3 = 0;
  }
 }


 return (-1);
}
