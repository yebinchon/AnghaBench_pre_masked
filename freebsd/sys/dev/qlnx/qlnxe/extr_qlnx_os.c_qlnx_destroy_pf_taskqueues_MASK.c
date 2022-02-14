
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_hwfns; } ;
struct TYPE_7__ {TYPE_2__* sriov_task; TYPE_1__ cdev; } ;
typedef TYPE_3__ qlnx_host_t ;
struct TYPE_6__ {int * pf_taskqueue; int pf_task; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->cdev.num_hwfns; VAR_1++) {
  if (VAR_0->sriov_task[VAR_1].pf_taskqueue != ((void*)0)) {
   FUNC_0(VAR_0->sriov_task[VAR_1].pf_taskqueue,
    &VAR_0->sriov_task[VAR_1].pf_task);
   FUNC_1(VAR_0->sriov_task[VAR_1].pf_taskqueue);
   VAR_0->sriov_task[VAR_1].pf_taskqueue = ((void*)0);
  }
 }
 return;
}
