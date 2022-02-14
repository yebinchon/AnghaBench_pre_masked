
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int set_phy_power; int * reset; int (* init ) (struct ixgbe_hw*) ;} ;
struct ixgbe_phy_info {TYPE_2__ ops; } ;
struct TYPE_10__ {int get_rtrup2tc; int set_fw_drv_ver; int blink_led_stop; int blink_led_start; int bypass_rd_eep; int bypass_set; int bypass_valid_rd; int bypass_rw; int check_link; int setup_rxpba; int setup_link; int get_link_capabilities; int set_vlan_anti_spoofing; int set_mac_anti_spoofing; int init_uta_tables; int clear_vfta; int set_vlvf; int set_vfta; int insert_mac_addr; int clear_vmdq; int set_vmdq_san_mac; int set_vmdq; int enable_sec_rx_path; int disable_sec_rx_path; int init_swfw_sync; int release_swfw_sync; int acquire_swfw_sync; int get_fcoe_boot_status; int get_wwn_prefix; int get_device_caps; int set_san_mac_addr; int get_san_mac_addr; int start_hw; int * write_analog_reg8; int * read_analog_reg8; int get_supported_physical_layer; int get_media_type; int enable_relaxed_ordering; int reset_hw; } ;
struct ixgbe_mac_info {int rar_highwater; int arc_subsystem_valid; TYPE_5__ ops; int max_msix_vectors; int max_tx_queues; int max_rx_queues; int rx_pb_size; int num_rar_entries; int vft_size; int mcft_size; } ;
struct TYPE_8__ {int init_params; } ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int calc_checksum; int validate_checksum; int update_checksum; int write_buffer; int write; int read_buffer; int read; int init_params; } ;
struct ixgbe_eeprom_info {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mbx; struct ixgbe_eeprom_info eeprom; struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
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
 int FUNC_3 (struct ixgbe_hw*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
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

s32 FUNC_6(struct ixgbe_hw *VAR_54)
{
 struct ixgbe_mac_info *VAR_55 = &VAR_54->mac;
 struct ixgbe_phy_info *VAR_56 = &VAR_54->phy;
 struct ixgbe_eeprom_info *VAR_57 = &VAR_54->eeprom;
 s32 VAR_58;

 FUNC_0("ixgbe_init_ops_X540");

 VAR_58 = FUNC_5(VAR_54);
 VAR_58 = FUNC_4(VAR_54);



 VAR_57->ops.init_params = VAR_29;
 VAR_57->ops.read = VAR_34;
 VAR_57->ops.read_buffer = VAR_35;
 VAR_57->ops.write = VAR_52;
 VAR_57->ops.write_buffer = VAR_53;
 VAR_57->ops.update_checksum = VAR_50;
 VAR_57->ops.validate_checksum = VAR_51;
 VAR_57->ops.calc_checksum = VAR_14;


 VAR_56->ops.init = FUNC_5;
 VAR_56->ops.reset = ((void*)0);
 VAR_56->ops.set_phy_power = VAR_38;


 VAR_55->ops.reset_hw = VAR_37;
 VAR_55->ops.enable_relaxed_ordering = VAR_20;
 VAR_55->ops.get_media_type = VAR_25;
 VAR_55->ops.get_supported_physical_layer =
        VAR_27;
 VAR_55->ops.read_analog_reg8 = ((void*)0);
 VAR_55->ops.write_analog_reg8 = ((void*)0);
 VAR_55->ops.start_hw = VAR_49;
 VAR_55->ops.get_san_mac_addr = VAR_26;
 VAR_55->ops.set_san_mac_addr = VAR_42;
 VAR_55->ops.get_device_caps = VAR_23;
 VAR_55->ops.get_wwn_prefix = VAR_28;
 VAR_55->ops.get_fcoe_boot_status = VAR_24;
 VAR_55->ops.acquire_swfw_sync = VAR_7;
 VAR_55->ops.release_swfw_sync = VAR_36;
 VAR_55->ops.init_swfw_sync = VAR_31;
 VAR_55->ops.disable_sec_rx_path = VAR_19;
 VAR_55->ops.enable_sec_rx_path = VAR_21;


 VAR_55->ops.set_vmdq = VAR_46;
 VAR_55->ops.set_vmdq_san_mac = VAR_47;
 VAR_55->ops.clear_vmdq = VAR_17;
 VAR_55->ops.insert_mac_addr = VAR_33;
 VAR_55->rar_highwater = 1;
 VAR_55->ops.set_vfta = VAR_43;
 VAR_55->ops.set_vlvf = VAR_45;
 VAR_55->ops.clear_vfta = VAR_16;
 VAR_55->ops.init_uta_tables = VAR_32;
 VAR_55->ops.set_mac_anti_spoofing = VAR_40;
 VAR_55->ops.set_vlan_anti_spoofing = VAR_44;


 VAR_55->ops.get_link_capabilities =
    VAR_22;
 VAR_55->ops.setup_link = VAR_48;
 VAR_55->ops.setup_rxpba = VAR_41;
 VAR_55->ops.check_link = VAR_15;
 VAR_55->ops.bypass_rw = VAR_11;
 VAR_55->ops.bypass_valid_rd = VAR_13;
 VAR_55->ops.bypass_set = VAR_12;
 VAR_55->ops.bypass_rd_eep = VAR_10;


 VAR_55->mcft_size = VAR_3;
 VAR_55->vft_size = VAR_6;
 VAR_55->num_rar_entries = VAR_4;
 VAR_55->rx_pb_size = VAR_5;
 VAR_55->max_rx_queues = VAR_1;
 VAR_55->max_tx_queues = VAR_2;
 VAR_55->max_msix_vectors = FUNC_3(VAR_54);






 VAR_55->arc_subsystem_valid = !!(FUNC_2(VAR_54, FUNC_1(VAR_54))
         & VAR_0);

 VAR_54->mbx.ops.init_params = VAR_30;


 VAR_55->ops.blink_led_start = VAR_8;
 VAR_55->ops.blink_led_stop = VAR_9;


 VAR_55->ops.set_fw_drv_ver = VAR_39;

 VAR_55->ops.get_rtrup2tc = VAR_18;

 return VAR_58;
}
