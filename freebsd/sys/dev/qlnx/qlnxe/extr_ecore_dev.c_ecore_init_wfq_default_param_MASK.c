
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_vports; TYPE_1__* qm_vport_params; } ;
struct ecore_hwfn {TYPE_2__ qm_info; } ;
struct TYPE_3__ {int vport_wfq; } ;



__attribute__((used)) static void FUNC_0(struct ecore_hwfn *VAR_0)

{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->qm_info.num_vports; VAR_1++)
  VAR_0->qm_info.qm_vport_params[VAR_1].vport_wfq = 1;
}
