
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int set_obff_timer; int setup_physical_interface; int rar_set; int led_off; int led_on; int cleanup_led; int setup_led; int id_led_init; int check_mng_mode; int update_mc_addr_list; int blink_led; int clear_hw_cntrs; int get_link_up_info; int check_for_link; int setup_link; int init_hw; int reset_hw; int set_lan_id; int get_bus_info; } ;
struct e1000_mac_info {int mta_reg_count; int type; TYPE_2__ ops; scalar_t__ rar_entry_count; void* adaptive_ifs; int arc_subsystem_valid; void* has_fwsm; void* asf_firmware_present; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {TYPE_1__ phy; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
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
 int FUNC_1 (struct e1000_hw*,void*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_35)
{
 struct e1000_mac_info *VAR_36 = &VAR_35->mac;

 FUNC_0("e1000_init_mac_params_ich8lan");


 VAR_35->phy.media_type = VAR_22;


 VAR_36->mta_reg_count = 32;

 VAR_36->rar_entry_count = VAR_0;
 if (VAR_36->type == 134)
  VAR_36->rar_entry_count--;

 VAR_36->asf_firmware_present = VAR_5;

 VAR_36->has_fwsm = VAR_5;

 VAR_36->arc_subsystem_valid = VAR_4;

 VAR_36->adaptive_ifs = VAR_5;




 VAR_36->ops.get_bus_info = VAR_13;

 VAR_36->ops.set_lan_id = VAR_26;

 VAR_36->ops.reset_hw = VAR_25;

 VAR_36->ops.init_hw = VAR_17;

 VAR_36->ops.setup_link = VAR_32;

 VAR_36->ops.setup_physical_interface = VAR_28;

 VAR_36->ops.check_for_link = VAR_7;

 VAR_36->ops.get_link_up_info = VAR_14;

 VAR_36->ops.update_mc_addr_list = VAR_33;

 VAR_36->ops.clear_hw_cntrs = VAR_12;


 switch (VAR_36->type) {
 case 134:
 case 133:
 case 135:

  VAR_36->ops.check_mng_mode = VAR_8;

  VAR_36->ops.id_led_init = VAR_15;

  VAR_36->ops.blink_led = VAR_6;

  VAR_36->ops.setup_led = VAR_30;

  VAR_36->ops.cleanup_led = VAR_10;

  VAR_36->ops.led_on = VAR_20;
  VAR_36->ops.led_off = VAR_18;
  break;
 case 132:
  VAR_36->rar_entry_count = VAR_1;
  VAR_36->ops.rar_set = VAR_23;

 case 130:
 case 129:
 case 131:

  VAR_36->ops.update_mc_addr_list =
   VAR_34;

 case 128:

  VAR_36->ops.check_mng_mode = VAR_9;

  VAR_36->ops.id_led_init = VAR_16;

  VAR_36->ops.setup_led = VAR_31;

  VAR_36->ops.cleanup_led = VAR_11;

  VAR_36->ops.led_on = VAR_21;
  VAR_36->ops.led_off = VAR_19;
  break;
 default:
  break;
 }

 if (VAR_36->type >= 130) {
  VAR_36->rar_entry_count = VAR_2;
  VAR_36->ops.rar_set = VAR_24;
  VAR_36->ops.setup_physical_interface = VAR_29;
  VAR_36->ops.set_obff_timer = VAR_27;
 }


 if (VAR_36->type == 134)
  FUNC_1(VAR_35, VAR_5);

 return VAR_3;
}
