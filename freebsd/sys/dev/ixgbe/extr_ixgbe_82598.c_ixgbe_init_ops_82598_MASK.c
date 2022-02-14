
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int read_i2c_sff8472; int read_i2c_eeprom; int init; } ;
struct ixgbe_phy_info {TYPE_1__ ops; } ;
struct TYPE_4__ {int * get_rtrup2tc; int * set_fw_drv_ver; int setup_rxpba; int get_link_capabilities; int * flap_tx_laser; int setup_link; int check_link; int fc_enable; int clear_vfta; int * set_vlvf; int set_vfta; int clear_vmdq; int set_vmdq; int enable_rx_dma; int set_lan_id; int write_analog_reg8; int read_analog_reg8; int get_supported_physical_layer; int get_media_type; int reset_hw; int enable_relaxed_ordering; int start_hw; } ;
struct ixgbe_mac_info {TYPE_2__ ops; int max_msix_vectors; int max_tx_queues; int max_rx_queues; int rx_pb_size; int num_rar_entries; int vft_size; int mcft_size; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


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
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_14 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_15 ;
 int FUNC_3 (struct ixgbe_hw*) ;
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

s32 FUNC_4(struct ixgbe_hw *VAR_27)
{
 struct ixgbe_mac_info *VAR_28 = &VAR_27->mac;
 struct ixgbe_phy_info *VAR_29 = &VAR_27->phy;
 s32 VAR_30;

 FUNC_0("ixgbe_init_ops_82598");

 VAR_30 = FUNC_3(VAR_27);
 VAR_30 = FUNC_2(VAR_27);


 VAR_29->ops.init = VAR_15;


 VAR_28->ops.start_hw = VAR_25;
 VAR_28->ops.enable_relaxed_ordering = VAR_9;
 VAR_28->ops.reset_hw = VAR_19;
 VAR_28->ops.get_media_type = VAR_13;
 VAR_28->ops.get_supported_physical_layer =
    VAR_14;
 VAR_28->ops.read_analog_reg8 = VAR_16;
 VAR_28->ops.write_analog_reg8 = VAR_26;
 VAR_28->ops.set_lan_id = VAR_20;
 VAR_28->ops.enable_rx_dma = VAR_10;


 VAR_28->ops.set_vmdq = VAR_23;
 VAR_28->ops.clear_vmdq = VAR_8;
 VAR_28->ops.set_vfta = VAR_22;
 VAR_28->ops.set_vlvf = ((void*)0);
 VAR_28->ops.clear_vfta = VAR_7;


 VAR_28->ops.fc_enable = VAR_11;

 VAR_28->mcft_size = VAR_2;
 VAR_28->vft_size = VAR_5;
 VAR_28->num_rar_entries = VAR_3;
 VAR_28->rx_pb_size = VAR_4;
 VAR_28->max_rx_queues = VAR_0;
 VAR_28->max_tx_queues = VAR_1;
 VAR_28->max_msix_vectors = FUNC_1(VAR_27);


 VAR_29->ops.read_i2c_eeprom = VAR_17;
 VAR_29->ops.read_i2c_sff8472 = VAR_18;


 VAR_28->ops.check_link = VAR_6;
 VAR_28->ops.setup_link = VAR_24;
 VAR_28->ops.flap_tx_laser = ((void*)0);
 VAR_28->ops.get_link_capabilities = VAR_12;
 VAR_28->ops.setup_rxpba = VAR_21;


 VAR_28->ops.set_fw_drv_ver = ((void*)0);

 VAR_28->ops.get_rtrup2tc = ((void*)0);

 return VAR_30;
}
