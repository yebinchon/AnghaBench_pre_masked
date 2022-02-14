
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int disable_rss; int read_mmc_stats; int rx_mmc_int; int tx_mmc_int; int config_pblx8; int get_tx_pbl_val; int config_tx_pbl_val; int get_rx_pbl_val; int config_rx_pbl_val; int config_osp_mode; int config_tsf_mode; int config_rsf_mode; int config_tx_threshold; int config_rx_threshold; int riwt_to_usec; int usec_to_riwt; int config_tx_coalesce; int config_rx_coalesce; int config_rx_flow_control; int config_tx_flow_control; int tx_start_xmit; int is_context_desc; int is_last_desc; int rx_desc_reset; int tx_desc_reset; int rx_desc_init; int tx_desc_init; int exit; int init; int disable_int; int enable_int; int dev_read; int dev_xmit; int powerdown_rx; int powerup_rx; int powerdown_tx; int powerup_tx; int disable_rx; int enable_rx; int disable_tx; int enable_tx; int set_xgmii_speed; int set_gmii_2500_speed; int set_gmii_speed; int write_mmd_regs; int read_mmd_regs; int update_vlan_hash_table; int disable_rx_vlan_filtering; int enable_rx_vlan_filtering; int disable_rx_vlan_stripping; int enable_rx_vlan_stripping; int disable_rx_csum; int enable_rx_csum; int config_rx_mode; int set_mac_address; int tx_complete; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;

void FUNC_1(struct xgbe_hw_if *VAR_56)
{
 FUNC_0("-->xgbe_init_function_ptrs\n");

 VAR_56->tx_complete = VAR_48;

 VAR_56->set_mac_address = VAR_46;
 VAR_56->config_rx_mode = VAR_5;

 VAR_56->enable_rx_csum = VAR_24;
 VAR_56->disable_rx_csum = VAR_18;

 VAR_56->enable_rx_vlan_stripping = VAR_26;
 VAR_56->disable_rx_vlan_stripping = VAR_20;
 VAR_56->enable_rx_vlan_filtering = VAR_25;
 VAR_56->disable_rx_vlan_filtering = VAR_19;
 VAR_56->update_vlan_hash_table = VAR_53;

 VAR_56->read_mmd_regs = VAR_39;
 VAR_56->write_mmd_regs = VAR_55;

 VAR_56->set_gmii_speed = VAR_45;
 VAR_56->set_gmii_2500_speed = VAR_44;
 VAR_56->set_xgmii_speed = VAR_47;

 VAR_56->enable_tx = VAR_27;
 VAR_56->disable_tx = VAR_21;
 VAR_56->enable_rx = VAR_23;
 VAR_56->disable_rx = VAR_17;

 VAR_56->powerup_tx = VAR_37;
 VAR_56->powerdown_tx = VAR_35;
 VAR_56->powerup_rx = VAR_36;
 VAR_56->powerdown_rx = VAR_34;

 VAR_56->dev_xmit = VAR_14;
 VAR_56->dev_read = VAR_13;
 VAR_56->enable_int = VAR_22;
 VAR_56->disable_int = VAR_15;
 VAR_56->init = VAR_31;
 VAR_56->exit = VAR_28;


 VAR_56->tx_desc_init = VAR_49;
 VAR_56->rx_desc_init = VAR_41;
 VAR_56->tx_desc_reset = VAR_50;
 VAR_56->rx_desc_reset = VAR_42;
 VAR_56->is_last_desc = VAR_33;
 VAR_56->is_context_desc = VAR_32;
 VAR_56->tx_start_xmit = VAR_52;


 VAR_56->config_tx_flow_control = VAR_10;
 VAR_56->config_rx_flow_control = VAR_4;


 VAR_56->config_rx_coalesce = VAR_3;
 VAR_56->config_tx_coalesce = VAR_9;
 VAR_56->usec_to_riwt = VAR_54;
 VAR_56->riwt_to_usec = VAR_40;


 VAR_56->config_rx_threshold = VAR_7;
 VAR_56->config_tx_threshold = VAR_12;


 VAR_56->config_rsf_mode = VAR_2;
 VAR_56->config_tsf_mode = VAR_8;


 VAR_56->config_osp_mode = VAR_0;


 VAR_56->config_rx_pbl_val = VAR_6;
 VAR_56->get_rx_pbl_val = VAR_29;
 VAR_56->config_tx_pbl_val = VAR_11;
 VAR_56->get_tx_pbl_val = VAR_30;
 VAR_56->config_pblx8 = VAR_1;


 VAR_56->tx_mmc_int = VAR_51;
 VAR_56->rx_mmc_int = VAR_43;
 VAR_56->read_mmc_stats = VAR_38;


 VAR_56->disable_rss = VAR_16;

 FUNC_0("<--xgbe_init_function_ptrs\n");
}
