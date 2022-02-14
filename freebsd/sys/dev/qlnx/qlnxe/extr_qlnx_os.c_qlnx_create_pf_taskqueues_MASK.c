
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tq_name ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_6__ {int num_hwfns; struct ecore_hwfn* hwfns; } ;
struct TYPE_8__ {TYPE_2__* sriov_task; TYPE_1__ cdev; } ;
typedef TYPE_3__ qlnx_host_t ;
struct TYPE_7__ {int * pf_taskqueue; int pf_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int *) ;
 int FUNC_1 (int *,int ,int ,struct ecore_hwfn*) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int,char*,int) ;
 int * FUNC_4 (int *,int ,int ,int **) ;
 int FUNC_5 (int **,int,int ,char*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_4)
{
 int VAR_5;
 uint8_t VAR_6[32];

 for (VAR_5 = 0; VAR_5 < VAR_4->cdev.num_hwfns; VAR_5++) {

                struct ecore_hwfn *VAR_7 = &VAR_4->cdev.hwfns[VAR_5];

  FUNC_2(VAR_6, sizeof (VAR_6));
  FUNC_3(VAR_6, sizeof (VAR_6), "ql_pf_tq_%d", VAR_5);

  FUNC_1(&VAR_4->sriov_task[VAR_5].pf_task, 0, VAR_2, VAR_7);

  VAR_4->sriov_task[VAR_5].pf_taskqueue = FUNC_4(VAR_6, VAR_0,
    VAR_3,
   &VAR_4->sriov_task[VAR_5].pf_taskqueue);

  if (VAR_4->sriov_task[VAR_5].pf_taskqueue == ((void*)0))
   return (-1);

  FUNC_5(&VAR_4->sriov_task[VAR_5].pf_taskqueue, 1,
   VAR_1, "%s", VAR_6);

  FUNC_0(VAR_4, "%p\n", VAR_4->sriov_task[VAR_5].pf_taskqueue);
 }

 return (0);
}
