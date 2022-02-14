
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct init_qm_vport_params {int vport_wfq; int first_tx_pq_id; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int num_vports; struct init_qm_vport_params* qm_vport_params; } ;
struct ecore_hwfn {TYPE_1__ qm_info; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_0,
          struct ecore_ptt *VAR_1)
{
 struct init_qm_vport_params *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->qm_info.qm_vport_params;

 for (VAR_3 = 0; VAR_3 < VAR_0->qm_info.num_vports; VAR_3++) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_0, VAR_1,
         VAR_2[VAR_3].first_tx_pq_id,
         VAR_2[VAR_3].vport_wfq);
 }
}
