
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int validate_mdi_setting; int rar_set; int write_vfta; void* clear_vfta; int update_mc_addr_list; int check_mng_mode; int set_obff_timer; void* check_for_link; int get_link_up_info; void* setup_link; void* led_off; void* led_on; void* blink_led; void* setup_led; void* cleanup_led; void* clear_hw_cntrs; int config_collision_dist; int read_mac_addr; int set_lan_id; void* get_bus_info; void* setup_physical_interface; void* reset_hw; void* init_hw; void* init_params; } ;
struct e1000_mac_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_1(struct e1000_hw *VAR_12)
{
 struct e1000_mac_info *VAR_13 = &VAR_12->mac;
 FUNC_0("e1000_init_mac_ops_generic");


 VAR_13->ops.init_params = VAR_4;
 VAR_13->ops.init_hw = VAR_4;
 VAR_13->ops.reset_hw = VAR_4;
 VAR_13->ops.setup_physical_interface = VAR_4;
 VAR_13->ops.get_bus_info = VAR_4;
 VAR_13->ops.set_lan_id = VAR_10;
 VAR_13->ops.read_mac_addr = VAR_9;
 VAR_13->ops.config_collision_dist = VAR_0;
 VAR_13->ops.clear_hw_cntrs = VAR_2;

 VAR_13->ops.cleanup_led = VAR_4;
 VAR_13->ops.setup_led = VAR_4;
 VAR_13->ops.blink_led = VAR_4;
 VAR_13->ops.led_on = VAR_4;
 VAR_13->ops.led_off = VAR_4;

 VAR_13->ops.setup_link = VAR_4;
 VAR_13->ops.get_link_up_info = VAR_1;
 VAR_13->ops.check_for_link = VAR_4;
 VAR_13->ops.set_obff_timer = VAR_5;

 VAR_13->ops.check_mng_mode = VAR_3;

 VAR_13->ops.update_mc_addr_list = VAR_6;
 VAR_13->ops.clear_vfta = VAR_2;
 VAR_13->ops.write_vfta = VAR_7;
 VAR_13->ops.rar_set = VAR_8;
 VAR_13->ops.validate_mdi_setting = VAR_11;
}
