
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct init_qm_vport_params {int * first_tx_pq_id; int vport_wfq; int vport_rl; } ;
struct init_qm_pq_params {int vport_id; int rl_valid; int wrr_group; int tc_id; } ;
struct init_qm_port_params {int reserved; int num_btb_blocks; int num_pbf_cmd_lines; int active_phys_tcs; int active; } ;
struct ecore_qm_info {int start_pq; int start_vport; int num_pqs; int num_vports; struct init_qm_pq_params* qm_pq_params; struct init_qm_vport_params* qm_vport_params; struct init_qm_port_params* qm_port_params; int num_pf_rls; int pf_rl; int pf_wfq; int vport_wfq_en; int vport_rl_en; int pf_wfq_en; int pf_rl_en; int max_phys_tcs_per_port; int num_vf_pqs; int first_vf_pq; int ooo_pq; int pure_ack_pq; int offload_pq; int pure_lb_pq; } ;
struct ecore_hwfn {TYPE_1__* p_dev; struct ecore_qm_info qm_info; } ;
struct TYPE_2__ {int num_ports_in_engine; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_2)
{
 struct ecore_qm_info *VAR_3 = &VAR_2->qm_info;
 struct init_qm_vport_params *VAR_4;
 struct init_qm_port_params *VAR_5;
 struct init_qm_pq_params *VAR_6;
 int VAR_7, VAR_8;


 FUNC_0(VAR_2, VAR_0, "qm init top level params: start_pq %d, start_vport %d, pure_lb_pq %d, offload_pq %d, pure_ack_pq %d\n",
     VAR_3->start_pq, VAR_3->start_vport, VAR_3->pure_lb_pq, VAR_3->offload_pq, VAR_3->pure_ack_pq);
 FUNC_0(VAR_2, VAR_0, "ooo_pq %d, first_vf_pq %d, num_pqs %d, num_vf_pqs %d, num_vports %d, max_phys_tcs_per_port %d\n",
     VAR_3->ooo_pq, VAR_3->first_vf_pq, VAR_3->num_pqs, VAR_3->num_vf_pqs, VAR_3->num_vports, VAR_3->max_phys_tcs_per_port);
 FUNC_0(VAR_2, VAR_0, "pf_rl_en %d, pf_wfq_en %d, vport_rl_en %d, vport_wfq_en %d, pf_wfq %d, pf_rl %d, num_pf_rls %d, pq_flags %x\n",
     VAR_3->pf_rl_en, VAR_3->pf_wfq_en, VAR_3->vport_rl_en, VAR_3->vport_wfq_en, VAR_3->pf_wfq, VAR_3->pf_rl, VAR_3->num_pf_rls, FUNC_1(VAR_2));


 for (VAR_7 = 0; VAR_7 < VAR_2->p_dev->num_ports_in_engine; VAR_7++) {
  VAR_5 = &(VAR_3->qm_port_params[VAR_7]);
  FUNC_0(VAR_2, VAR_0, "port idx %d, active %d, active_phys_tcs %d, num_pbf_cmd_lines %d, num_btb_blocks %d, reserved %d\n",
      VAR_7, VAR_5->active, VAR_5->active_phys_tcs, VAR_5->num_pbf_cmd_lines, VAR_5->num_btb_blocks, VAR_5->reserved);
 }


 for (VAR_7 = 0; VAR_7 < VAR_3->num_vports; VAR_7++) {
  VAR_4 = &(VAR_3->qm_vport_params[VAR_7]);
  FUNC_0(VAR_2, VAR_0, "vport idx %d, vport_rl %d, wfq %d, first_tx_pq_id [ ",
      VAR_3->start_vport + VAR_7, VAR_4->vport_rl, VAR_4->vport_wfq);
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
   FUNC_0(VAR_2, VAR_0, "%d ", VAR_4->first_tx_pq_id[VAR_8]);
  FUNC_0(VAR_2, VAR_0, "]\n");
 }


 for (VAR_7 = 0; VAR_7 < VAR_3->num_pqs; VAR_7++) {
  VAR_6 = &(VAR_3->qm_pq_params[VAR_7]);
  FUNC_0(VAR_2, VAR_0, "pq idx %d, vport_id %d, tc %d, wrr_grp %d, rl_valid %d\n",
      VAR_3->start_pq + VAR_7, VAR_6->vport_id, VAR_6->tc_id, VAR_6->wrr_group, VAR_6->rl_valid);
 }
}
