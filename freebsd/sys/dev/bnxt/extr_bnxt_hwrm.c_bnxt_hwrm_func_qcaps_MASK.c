
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_func_qcaps_output {int flags; int max_rx_wm_flows; int max_rx_em_flows; int max_tx_wm_flows; int max_tx_em_flows; int max_decap_records; int max_encap_records; int max_vfs; int first_vf_id; int port_id; int max_stat_ctx; int max_vnics; int max_l2_ctxs; int max_hw_ring_grps; int max_rx_rings; int max_tx_rings; int max_cmpl_rings; int max_rsscos_ctx; int mac_address; int fid; } ;
struct hwrm_func_qcaps_input {int fid; int member_0; } ;
struct bnxt_pf_info {void* max_rx_wm_flows; void* max_rx_em_flows; void* max_tx_wm_flows; void* max_tx_em_flows; void* max_decap_records; void* max_encap_records; void* max_vfs; void* first_vf_id; void* port_id; } ;
struct bnxt_func_info {int mac_addr; void* max_stat_ctxs; void* max_vnics; void* max_l2_ctxs; void* max_tx_rings; void* max_hw_ring_grps; void* max_rx_rings; void* max_cp_rings; void* max_rsscos_ctxs; void* fw_fid; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int dev; struct bnxt_pf_info pf; int flags; struct bnxt_func_info func; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 scalar_t__ FUNC_2 (struct bnxt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_func_qcaps_input*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bnxt_softc*,struct hwrm_func_qcaps_input*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;

int
FUNC_13(struct bnxt_softc *VAR_4)
{
 int VAR_5 = 0;
 struct hwrm_func_qcaps_input VAR_6 = {0};
 struct hwrm_func_qcaps_output *VAR_7 =
     (void *)VAR_4->hwrm_cmd_resp.idi_vaddr;
 struct bnxt_func_info *VAR_8 = &VAR_4->func;

 FUNC_5(VAR_4, &VAR_6, VAR_2);
 VAR_6.fid = FUNC_8(0xffff);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_3(VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_5)
  goto fail;

 if (VAR_7->flags &
     FUNC_9(VAR_3))
  VAR_4->flags |= VAR_0;

 VAR_8->fw_fid = FUNC_10(VAR_7->fid);
 FUNC_12(VAR_8->mac_addr, VAR_7->mac_address, VAR_1);
 VAR_8->max_rsscos_ctxs = FUNC_10(VAR_7->max_rsscos_ctx);
 VAR_8->max_cp_rings = FUNC_10(VAR_7->max_cmpl_rings);
 VAR_8->max_tx_rings = FUNC_10(VAR_7->max_tx_rings);
 VAR_8->max_rx_rings = FUNC_10(VAR_7->max_rx_rings);
 VAR_8->max_hw_ring_grps = FUNC_11(VAR_7->max_hw_ring_grps);
 if (!VAR_8->max_hw_ring_grps)
  VAR_8->max_hw_ring_grps = VAR_8->max_tx_rings;
 VAR_8->max_l2_ctxs = FUNC_10(VAR_7->max_l2_ctxs);
 VAR_8->max_vnics = FUNC_10(VAR_7->max_vnics);
 VAR_8->max_stat_ctxs = FUNC_10(VAR_7->max_stat_ctx);
 if (FUNC_2(VAR_4)) {
  struct bnxt_pf_info *VAR_9 = &VAR_4->pf;

  VAR_9->port_id = FUNC_10(VAR_7->port_id);
  VAR_9->first_vf_id = FUNC_10(VAR_7->first_vf_id);
  VAR_9->max_vfs = FUNC_10(VAR_7->max_vfs);
  VAR_9->max_encap_records = FUNC_11(VAR_7->max_encap_records);
  VAR_9->max_decap_records = FUNC_11(VAR_7->max_decap_records);
  VAR_9->max_tx_em_flows = FUNC_11(VAR_7->max_tx_em_flows);
  VAR_9->max_tx_wm_flows = FUNC_11(VAR_7->max_tx_wm_flows);
  VAR_9->max_rx_em_flows = FUNC_11(VAR_7->max_rx_em_flows);
  VAR_9->max_rx_wm_flows = FUNC_11(VAR_7->max_rx_wm_flows);
 }
 if (!FUNC_4(VAR_8->mac_addr)) {
  FUNC_6(VAR_4->dev, "Invalid ethernet address, generating random locally administered address\n");
  FUNC_7(VAR_8->mac_addr);
 }

fail:
 FUNC_1(VAR_4);
 return VAR_5;
}
