
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int * dmac_config_tcs; int * dmac_update_tcs; int * dmac_config; int * check_link; int * setup_link; int * get_link_capabilities; int fc_autoneg; int setup_fc; int fc_enable; int disable_rx; int enable_rx; int * init_uta_tables; int * set_vlvf; int * set_vfta; int * clear_vfta; int disable_mc; int enable_mc; int update_mc_addr_list; int update_uc_addr_list; int init_rx_addrs; int * clear_vmdq; int * set_vmdq; int * insert_mac_addr; int clear_rar; int set_rar; int init_led_link_act; int blink_led_stop; int blink_led_start; int led_off; int led_on; int prot_autoc_write; int prot_autoc_read; int release_swfw_sync; int acquire_swfw_sync; int set_lan_id; int get_bus_info; int stop_adapter; int get_mac_addr; int enable_rx_dma; int * get_supported_physical_layer; int * get_media_type; int clear_hw_cntrs; int start_hw; int * reset_hw; int init_hw; } ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {int calc_checksum; int update_checksum; int validate_checksum; int write_buffer; int write; int read_buffer; int read; int init_params; } ;
struct ixgbe_eeprom_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; struct ixgbe_eeprom_info eeprom; } ;
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

s32 FUNC_3(struct ixgbe_hw *VAR_41)
{
 struct ixgbe_eeprom_info *VAR_42 = &VAR_41->eeprom;
 struct ixgbe_mac_info *VAR_43 = &VAR_41->mac;
 u32 VAR_44 = FUNC_2(VAR_41, FUNC_1(VAR_41));

 FUNC_0("ixgbe_init_ops_generic");


 VAR_42->ops.init_params = VAR_17;

 if (VAR_44 & VAR_0) {
  VAR_42->ops.read = VAR_26;
  VAR_42->ops.read_buffer = VAR_25;
 } else {
  VAR_42->ops.read = VAR_23;
  VAR_42->ops.read_buffer =
     VAR_24;
 }
 VAR_42->ops.write = VAR_38;
 VAR_42->ops.write_buffer = VAR_37;
 VAR_42->ops.validate_checksum =
          VAR_36;
 VAR_42->ops.update_checksum = VAR_33;
 VAR_42->ops.calc_checksum = VAR_5;


 VAR_43->ops.init_hw = VAR_18;
 VAR_43->ops.reset_hw = ((void*)0);
 VAR_43->ops.start_hw = VAR_31;
 VAR_43->ops.clear_hw_cntrs = VAR_6;
 VAR_43->ops.get_media_type = ((void*)0);
 VAR_43->ops.get_supported_physical_layer = ((void*)0);
 VAR_43->ops.enable_rx_dma = VAR_11;
 VAR_43->ops.get_mac_addr = VAR_16;
 VAR_43->ops.stop_adapter = VAR_32;
 VAR_43->ops.get_bus_info = VAR_15;
 VAR_43->ops.set_lan_id = VAR_28;
 VAR_43->ops.acquire_swfw_sync = VAR_2;
 VAR_43->ops.release_swfw_sync = VAR_27;
 VAR_43->ops.prot_autoc_read = VAR_39;
 VAR_43->ops.prot_autoc_write = VAR_40;


 VAR_43->ops.led_on = VAR_22;
 VAR_43->ops.led_off = VAR_21;
 VAR_43->ops.blink_led_start = VAR_3;
 VAR_43->ops.blink_led_stop = VAR_4;
 VAR_43->ops.init_led_link_act = VAR_19;


 VAR_43->ops.set_rar = VAR_29;
 VAR_43->ops.clear_rar = VAR_7;
 VAR_43->ops.insert_mac_addr = ((void*)0);
 VAR_43->ops.set_vmdq = ((void*)0);
 VAR_43->ops.clear_vmdq = ((void*)0);
 VAR_43->ops.init_rx_addrs = VAR_20;
 VAR_43->ops.update_uc_addr_list = VAR_35;
 VAR_43->ops.update_mc_addr_list = VAR_34;
 VAR_43->ops.enable_mc = VAR_10;
 VAR_43->ops.disable_mc = VAR_8;
 VAR_43->ops.clear_vfta = ((void*)0);
 VAR_43->ops.set_vfta = ((void*)0);
 VAR_43->ops.set_vlvf = ((void*)0);
 VAR_43->ops.init_uta_tables = ((void*)0);
 VAR_43->ops.enable_rx = VAR_12;
 VAR_43->ops.disable_rx = VAR_9;


 VAR_43->ops.fc_enable = VAR_14;
 VAR_43->ops.setup_fc = VAR_30;
 VAR_43->ops.fc_autoneg = VAR_13;


 VAR_43->ops.get_link_capabilities = ((void*)0);
 VAR_43->ops.setup_link = ((void*)0);
 VAR_43->ops.check_link = ((void*)0);
 VAR_43->ops.dmac_config = ((void*)0);
 VAR_43->ops.dmac_update_tcs = ((void*)0);
 VAR_43->ops.dmac_config_tcs = ((void*)0);

 return VAR_1;
}
