
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ecore_hwfn {scalar_t__ p_dev; } ;
struct TYPE_6__ {TYPE_1__* sriov_task; int sriov_initialized; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_5__ {int pf_task; int * pf_taskqueue; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,TYPE_2__*,scalar_t__,struct ecore_hwfn*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_1)
{
 qlnx_host_t *VAR_2 = (qlnx_host_t *)VAR_1->p_dev;
 int VAR_3;

 if (!VAR_2->sriov_initialized)
  return;

 FUNC_0(VAR_2, "ha = %p cdev = %p p_hwfn = %p \n",
  VAR_2, VAR_1->p_dev, VAR_1);

 if ((VAR_3 = FUNC_2(VAR_1)) == -1)
  return;


 if (VAR_2->sriov_task[VAR_3].pf_taskqueue != ((void*)0)) {

  FUNC_1(&VAR_2->sriov_task[VAR_3].flags,
   VAR_0);

  FUNC_3(VAR_2->sriov_task[VAR_3].pf_taskqueue,
   &VAR_2->sriov_task[VAR_3].pf_task);
 }

 return;
}
