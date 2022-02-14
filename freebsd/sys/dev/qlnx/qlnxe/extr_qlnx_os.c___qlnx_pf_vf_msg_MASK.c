
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct ecore_hwfn {scalar_t__ p_dev; } ;
struct TYPE_6__ {TYPE_1__* sriov_task; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_5__ {int pf_task; int * pf_taskqueue; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,TYPE_2__*,scalar_t__,struct ecore_hwfn*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct ecore_hwfn *VAR_2, uint16_t VAR_3)
{
 qlnx_host_t *VAR_4 = (qlnx_host_t *)VAR_2->p_dev;
 int VAR_5;

 FUNC_0(VAR_4, "ha = %p cdev = %p p_hwfn = %p rel_vf_id = %d\n",
  VAR_4, VAR_2->p_dev, VAR_2, VAR_3);

 if ((VAR_5 = FUNC_2(VAR_2)) == -1)
  return (-1);

 if (VAR_4->sriov_task[VAR_5].pf_taskqueue != ((void*)0)) {

  FUNC_1(&VAR_4->sriov_task[VAR_5].flags,
   VAR_1);

  FUNC_3(VAR_4->sriov_task[VAR_5].pf_taskqueue,
   &VAR_4->sriov_task[VAR_5].pf_task);

 }

 return (VAR_0);
}
