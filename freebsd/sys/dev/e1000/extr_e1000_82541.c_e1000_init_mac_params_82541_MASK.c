
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clear_hw_cntrs; int led_off; int led_on; int cleanup_led; int setup_led; int id_led_init; int read_mac_addr; int clear_vfta; int write_vfta; int update_mc_addr_list; int get_link_up_info; int check_for_link; int setup_physical_interface; int setup_link; int init_hw; int reset_hw; int set_lan_id; int get_bus_info; } ;
struct e1000_mac_info {int mta_reg_count; TYPE_2__ ops; int asf_firmware_present; int rar_entry_count; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {TYPE_1__ phy; struct e1000_mac_info mac; } ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_22)
{
 struct e1000_mac_info *VAR_23 = &VAR_22->mac;

 FUNC_0("e1000_init_mac_params_82541");


 VAR_22->phy.media_type = VAR_13;

 VAR_23->mta_reg_count = 128;

 VAR_23->rar_entry_count = VAR_0;

 VAR_23->asf_firmware_present = VAR_2;




 VAR_23->ops.get_bus_info = VAR_7;

 VAR_23->ops.set_lan_id = VAR_16;

 VAR_23->ops.reset_hw = VAR_15;

 VAR_23->ops.init_hw = VAR_10;

 VAR_23->ops.setup_link = VAR_19;

 VAR_23->ops.setup_physical_interface = VAR_17;

 VAR_23->ops.check_for_link = VAR_3;

 VAR_23->ops.get_link_up_info = VAR_8;

 VAR_23->ops.update_mc_addr_list = VAR_20;

 VAR_23->ops.write_vfta = VAR_21;

 VAR_23->ops.clear_vfta = VAR_6;

 VAR_23->ops.read_mac_addr = VAR_14;

 VAR_23->ops.id_led_init = VAR_9;

 VAR_23->ops.setup_led = VAR_18;

 VAR_23->ops.cleanup_led = VAR_4;

 VAR_23->ops.led_on = VAR_12;
 VAR_23->ops.led_off = VAR_11;

 VAR_23->ops.clear_hw_cntrs = VAR_5;

 return VAR_1;
}
