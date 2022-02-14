
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * led_off; int * led_on; int set_fw_drv_ver; int disable_rx; int restore_mdd_vf; int mdd_event; int enable_mdd; int disable_mdd; int get_rtrup2tc; int set_ethertype_anti_spoofing; int set_source_address_pruning; int * setup_eee; int dmac_update_tcs; int dmac_config_tcs; int dmac_config; } ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {int validate_checksum; int update_checksum; int write_buffer; int write; int read_buffer; int read; int calc_checksum; int init_params; } ;
struct ixgbe_eeprom_info {TYPE_1__ ops; } ;
struct ixgbe_hw {int device_id; struct ixgbe_mac_info mac; struct ixgbe_eeprom_info eeprom; } ;
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
 int FUNC_1 (struct ixgbe_hw*) ;
 int * VAR_9 ;
 int * VAR_10 ;
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

s32 FUNC_2(struct ixgbe_hw *VAR_22)
{
 struct ixgbe_mac_info *VAR_23 = &VAR_22->mac;
 struct ixgbe_eeprom_info *VAR_24 = &VAR_22->eeprom;
 s32 VAR_25;

 FUNC_0("ixgbe_init_ops_X550");

 VAR_25 = FUNC_1(VAR_22);
 VAR_23->ops.dmac_config = VAR_4;
 VAR_23->ops.dmac_config_tcs = VAR_5;
 VAR_23->ops.dmac_update_tcs = VAR_6;
 VAR_23->ops.setup_eee = ((void*)0);
 VAR_23->ops.set_source_address_pruning =
   VAR_17;
 VAR_23->ops.set_ethertype_anti_spoofing =
   VAR_15;

 VAR_23->ops.get_rtrup2tc = VAR_1;
 VAR_24->ops.init_params = VAR_8;
 VAR_24->ops.calc_checksum = VAR_0;
 VAR_24->ops.read = VAR_12;
 VAR_24->ops.read_buffer = VAR_13;
 VAR_24->ops.write = VAR_20;
 VAR_24->ops.write_buffer = VAR_21;
 VAR_24->ops.update_checksum = VAR_18;
 VAR_24->ops.validate_checksum = VAR_19;

 VAR_23->ops.disable_mdd = VAR_2;
 VAR_23->ops.enable_mdd = VAR_7;
 VAR_23->ops.mdd_event = VAR_11;
 VAR_23->ops.restore_mdd_vf = VAR_14;
 VAR_23->ops.disable_rx = VAR_3;

 VAR_23->ops.set_fw_drv_ver = VAR_16;
 switch (VAR_22->device_id) {
 case 128:
  VAR_22->mac.ops.led_on = ((void*)0);
  VAR_22->mac.ops.led_off = ((void*)0);
  break;
 case 129:
 case 130:
  VAR_22->mac.ops.led_on = VAR_10;
  VAR_22->mac.ops.led_off = VAR_9;
  break;
 default:
  break;
 }
 return VAR_25;
}
