
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_ec_stats {void* eee_in; void* rfw_in_prot_i_drop; void* rfw_in_ctrl_drop; void* rfw_in_mac_ndet_drop; void* rfw_in_mac_drop; void* rfw_in_vlan_nexist; void* rfw_in_vlan_exist; void* rfw_in_bc; void* rfw_in_mc; void* rfw_in_parse_drop; void* rfw_in_vlan_drop; void* rfw_in_rx_pkt; void* tfw_out_tx_pkt; void* tfw_in_tx_pkt; void* tpm_tx_pkt; void* tpe_out_tx_pkt; void* tpe_in_tx_pkt; void* rpe_3_out_rx_pkt; void* rpe_3_in_rx_pkt; void* rpe_2_out_rx_pkt; void* rpe_2_in_rx_pkt; void* rpe_1_out_rx_pkt; void* rpe_1_in_rx_pkt; void* rxf_out_drop_2_pkt; void* rxf_out_drop_1_pkt; void* rxf_out_rx_2_pkt; void* rxf_out_rx_1_pkt; void* lbf_in_fifo_err; void* lbf_in_rx_pkt; void* rxf_in_fifo_err; void* rxf_in_rx_pkt; void* faf_out_drop; void* faf_out_rx_long; void* faf_out_rx_short; void* faf_out_rx_pkt; void* faf_in_rx_long; void* faf_in_rx_short; void* faf_in_rx_pkt; } ;
struct TYPE_3__ {int eee_in; int rfw_in_prot_i_drop; int rfw_in_ctrl_drop; int rfw_in_mac_ndet_drop; int rfw_in_mac_drop; int rfw_in_vlan_nexist; int rfw_in_vlan_exist; int rfw_in_bc; int rfw_in_mc; int rfw_in_parse_drop; int rfw_in_vlan_drop; int rfw_in_rx_pkt; int tfw_out_tx_pkt; int tfw_in_tx_pkt; int tpm_tx_pkt; int tpe_out_tx_pkt; int tpe_in_tx_pkt; int rpe_3_out_rx_pkt; int rpe_3_in_rx_pkt; int rpe_2_out_rx_pkt; int rpe_2_in_rx_pkt; int rpe_1_out_rx_pkt; int rpe_1_in_rx_pkt; int rxf_out_drop_2_pkt; int rxf_out_drop_1_pkt; int rxf_out_rx_2_pkt; int rxf_out_rx_1_pkt; int lbf_in_fifo_err; int lbf_in_rx_pkt; int rxf_in_fifo_err; int rxf_in_rx_pkt; int faf_out_drop; int faf_out_rx_long; int faf_out_rx_short; int faf_out_rx_pkt; int faf_in_rx_long; int faf_in_rx_short; int faf_in_rx_pkt; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 int FUNC_0 (struct al_eth_ec_stats*) ;
 void* FUNC_1 (int *) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_0, struct al_eth_ec_stats *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->faf_in_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.faf_in_rx_pkt);
 VAR_1->faf_in_rx_short = FUNC_1(&VAR_0->ec_regs_base->stat.faf_in_rx_short);
 VAR_1->faf_in_rx_long = FUNC_1(&VAR_0->ec_regs_base->stat.faf_in_rx_long);
 VAR_1->faf_out_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.faf_out_rx_pkt);
 VAR_1->faf_out_rx_short = FUNC_1(&VAR_0->ec_regs_base->stat.faf_out_rx_short);
 VAR_1->faf_out_rx_long = FUNC_1(&VAR_0->ec_regs_base->stat.faf_out_rx_long);
 VAR_1->faf_out_drop = FUNC_1(&VAR_0->ec_regs_base->stat.faf_out_drop);
 VAR_1->rxf_in_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rxf_in_rx_pkt);
 VAR_1->rxf_in_fifo_err = FUNC_1(&VAR_0->ec_regs_base->stat.rxf_in_fifo_err);
 VAR_1->lbf_in_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.lbf_in_rx_pkt);
 VAR_1->lbf_in_fifo_err = FUNC_1(&VAR_0->ec_regs_base->stat.lbf_in_fifo_err);
 VAR_1->rxf_out_rx_1_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rxf_out_rx_1_pkt);
 VAR_1->rxf_out_rx_2_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rxf_out_rx_2_pkt);
 VAR_1->rxf_out_drop_1_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rxf_out_drop_1_pkt);
 VAR_1->rxf_out_drop_2_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rxf_out_drop_2_pkt);
 VAR_1->rpe_1_in_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rpe_1_in_rx_pkt);
 VAR_1->rpe_1_out_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rpe_1_out_rx_pkt);
 VAR_1->rpe_2_in_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rpe_2_in_rx_pkt);
 VAR_1->rpe_2_out_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rpe_2_out_rx_pkt);
 VAR_1->rpe_3_in_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rpe_3_in_rx_pkt);
 VAR_1->rpe_3_out_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rpe_3_out_rx_pkt);
 VAR_1->tpe_in_tx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.tpe_in_tx_pkt);
 VAR_1->tpe_out_tx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.tpe_out_tx_pkt);
 VAR_1->tpm_tx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.tpm_tx_pkt);
 VAR_1->tfw_in_tx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.tfw_in_tx_pkt);
 VAR_1->tfw_out_tx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.tfw_out_tx_pkt);
 VAR_1->rfw_in_rx_pkt = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_rx_pkt);
 VAR_1->rfw_in_vlan_drop = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_vlan_drop);
 VAR_1->rfw_in_parse_drop = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_parse_drop);
 VAR_1->rfw_in_mc = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_mc);
 VAR_1->rfw_in_bc = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_bc);
 VAR_1->rfw_in_vlan_exist = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_vlan_exist);
 VAR_1->rfw_in_vlan_nexist = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_vlan_nexist);
 VAR_1->rfw_in_mac_drop = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_mac_drop);
 VAR_1->rfw_in_mac_ndet_drop = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_mac_ndet_drop);
 VAR_1->rfw_in_ctrl_drop = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_ctrl_drop);
 VAR_1->rfw_in_prot_i_drop = FUNC_1(&VAR_0->ec_regs_base->stat.rfw_in_prot_i_drop);
 VAR_1->eee_in = FUNC_1(&VAR_0->ec_regs_base->stat.eee_in);
 return 0;
}
