
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int init; int identify; } ;
struct ixgbe_phy_info {TYPE_1__ ops; } ;
struct TYPE_10__ {int get_rtrup2tc; int bypass_rd_eep; int bypass_set; int bypass_valid_rd; int bypass_rw; int set_fw_drv_ver; int setup_rxpba; int check_link; int get_link_capabilities; int set_vlan_anti_spoofing; int set_mac_anti_spoofing; int setup_sfp; int init_uta_tables; int clear_vfta; int set_vlvf; int set_vfta; int insert_mac_addr; int clear_vmdq; int set_vmdq_san_mac; int set_vmdq; int prot_autoc_write; int prot_autoc_read; int get_fcoe_boot_status; int get_wwn_prefix; int get_device_caps; int set_san_mac_addr; int get_san_mac_addr; int start_hw; int write_analog_reg8; int read_analog_reg8; int enable_rx_dma; int enable_sec_rx_path; int disable_sec_rx_path; int get_supported_physical_layer; int get_media_type; int enable_relaxed_ordering; int reset_hw; } ;
struct ixgbe_mac_info {int rar_highwater; int arc_subsystem_valid; TYPE_5__ ops; int max_msix_vectors; int max_tx_queues; int max_rx_queues; int rx_pb_size; int num_rar_entries; int vft_size; int mcft_size; } ;
struct TYPE_7__ {int init_params; } ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_9__ {int read_buffer; int read; } ;
struct ixgbe_eeprom_info {TYPE_4__ ops; } ;
struct ixgbe_hw {TYPE_3__ mbx; struct ixgbe_eeprom_info eeprom; struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
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
 int FUNC_3 (struct ixgbe_hw*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int VAR_27 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int VAR_28 ;
 int FUNC_6 (struct ixgbe_hw*) ;
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

s32 FUNC_7(struct ixgbe_hw *VAR_49)
{
 struct ixgbe_mac_info *VAR_50 = &VAR_49->mac;
 struct ixgbe_phy_info *VAR_51 = &VAR_49->phy;
 struct ixgbe_eeprom_info *VAR_52 = &VAR_49->eeprom;
 s32 VAR_53;

 FUNC_0("ixgbe_init_ops_82599");

 FUNC_6(VAR_49);
 VAR_53 = FUNC_5(VAR_49);


 VAR_51->ops.identify = VAR_26;
 VAR_51->ops.init = VAR_28;


 VAR_50->ops.reset_hw = VAR_34;
 VAR_50->ops.enable_relaxed_ordering = VAR_16;
 VAR_50->ops.get_media_type = VAR_22;
 VAR_50->ops.get_supported_physical_layer =
        VAR_24;
 VAR_50->ops.disable_sec_rx_path = VAR_15;
 VAR_50->ops.enable_sec_rx_path = VAR_18;
 VAR_50->ops.enable_rx_dma = VAR_17;
 VAR_50->ops.read_analog_reg8 = VAR_31;
 VAR_50->ops.write_analog_reg8 = VAR_46;
 VAR_50->ops.start_hw = VAR_45;
 VAR_50->ops.get_san_mac_addr = VAR_23;
 VAR_50->ops.set_san_mac_addr = VAR_38;
 VAR_50->ops.get_device_caps = VAR_19;
 VAR_50->ops.get_wwn_prefix = VAR_25;
 VAR_50->ops.get_fcoe_boot_status = VAR_20;
 VAR_50->ops.prot_autoc_read = VAR_47;
 VAR_50->ops.prot_autoc_write = VAR_48;


 VAR_50->ops.set_vmdq = VAR_42;
 VAR_50->ops.set_vmdq_san_mac = VAR_43;
 VAR_50->ops.clear_vmdq = VAR_13;
 VAR_50->ops.insert_mac_addr = VAR_30;
 VAR_50->rar_highwater = 1;
 VAR_50->ops.set_vfta = VAR_39;
 VAR_50->ops.set_vlvf = VAR_41;
 VAR_50->ops.clear_vfta = VAR_12;
 VAR_50->ops.init_uta_tables = VAR_29;
 VAR_50->ops.setup_sfp = VAR_44;
 VAR_50->ops.set_mac_anti_spoofing = VAR_36;
 VAR_50->ops.set_vlan_anti_spoofing = VAR_40;


 VAR_50->ops.get_link_capabilities = VAR_21;
 VAR_50->ops.check_link = VAR_11;
 VAR_50->ops.setup_rxpba = VAR_37;
 FUNC_4(VAR_49);

 VAR_50->mcft_size = VAR_2;
 VAR_50->vft_size = VAR_5;
 VAR_50->num_rar_entries = VAR_3;
 VAR_50->rx_pb_size = VAR_4;
 VAR_50->max_rx_queues = VAR_0;
 VAR_50->max_tx_queues = VAR_1;
 VAR_50->max_msix_vectors = FUNC_3(VAR_49);

 VAR_50->arc_subsystem_valid = !!(FUNC_2(VAR_49, FUNC_1(VAR_49))
          & VAR_6);

 VAR_49->mbx.ops.init_params = VAR_27;


 VAR_52->ops.read = VAR_32;
 VAR_52->ops.read_buffer = VAR_33;


 VAR_50->ops.set_fw_drv_ver = VAR_35;

 VAR_50->ops.bypass_rw = VAR_8;
 VAR_50->ops.bypass_valid_rd = VAR_10;
 VAR_50->ops.bypass_set = VAR_9;
 VAR_50->ops.bypass_rd_eep = VAR_7;

 VAR_50->ops.get_rtrup2tc = VAR_14;

 return VAR_53;
}
