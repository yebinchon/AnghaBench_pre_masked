
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_qm_info {int qm_vport_params; int qm_pq_params; int pf_rl; int pf_wfq; int num_vports; int start_vport; scalar_t__ num_vf_pqs; scalar_t__ num_pqs; int start_pq; int max_phys_tcs_per_port; } ;
struct ecore_qm_iids {int tids; int vf_cids; int cids; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_link_state {int speed; } ;
struct ecore_hwfn {struct ecore_qm_info qm_info; int rel_pf_id; int port_id; int p_dev; } ;
typedef int iids ;
struct TYPE_4__ {TYPE_1__* mcp_info; } ;
struct TYPE_3__ {struct ecore_mcp_link_state link_output; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_qm_iids*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_qm_iids*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int ,int,int ,int ,int ,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_4(struct ecore_hwfn *VAR_0, struct ecore_ptt *VAR_1,
        bool VAR_2)
{
 struct ecore_qm_info *VAR_3 = &VAR_0->qm_info;
 struct ecore_mcp_link_state *VAR_4;
 struct ecore_qm_iids VAR_5;

 FUNC_1(&VAR_5, sizeof(VAR_5));
 FUNC_2(VAR_0, &VAR_5);

 VAR_4 = &FUNC_0(VAR_0->p_dev)->mcp_info->link_output;

 FUNC_3(VAR_0, VAR_1, VAR_0->port_id,
       VAR_0->rel_pf_id, VAR_3->max_phys_tcs_per_port,
       VAR_2,
       VAR_5.cids, VAR_5.vf_cids, VAR_5.tids,
       VAR_3->start_pq,
       VAR_3->num_pqs - VAR_3->num_vf_pqs,
       VAR_3->num_vf_pqs,
       VAR_3->start_vport,
       VAR_3->num_vports, VAR_3->pf_wfq,
       VAR_3->pf_rl, VAR_4->speed,
       VAR_0->qm_info.qm_pq_params,
       VAR_0->qm_info.qm_vport_params);
}
