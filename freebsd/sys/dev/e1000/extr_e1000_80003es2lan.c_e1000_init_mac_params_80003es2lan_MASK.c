
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* set_lan_id ) (struct e1000_hw*) ;int get_link_up_info; int clear_hw_cntrs; int led_off; int led_on; int cleanup_led; int setup_led; int blink_led; int id_led_init; int read_mac_addr; int clear_vfta; int write_vfta; int update_mc_addr_list; int check_mng_mode; int setup_link; int init_hw; int reset_hw; int get_bus_info; int setup_physical_interface; int check_for_link; } ;
struct e1000_mac_info {int mta_reg_count; int arc_subsystem_valid; TYPE_2__ ops; int adaptive_ifs; void* has_fwsm; void* asf_firmware_present; int rar_entry_count; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {int device_id; struct e1000_mac_info mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_29)
{
 struct e1000_mac_info *VAR_30 = &VAR_29->mac;

 FUNC_0("e1000_init_mac_params_80003es2lan");


 switch (VAR_29->device_id) {
 case 128:
  VAR_29->phy.media_type = VAR_20;
  VAR_30->ops.check_for_link = VAR_8;
  VAR_30->ops.setup_physical_interface =
     VAR_24;
  break;
 default:
  VAR_29->phy.media_type = VAR_19;
  VAR_30->ops.check_for_link = VAR_7;
  VAR_30->ops.setup_physical_interface =
     VAR_23;
  break;
 }


 VAR_30->mta_reg_count = 128;

 VAR_30->rar_entry_count = VAR_2;

 VAR_30->asf_firmware_present = VAR_5;

 VAR_30->has_fwsm = VAR_5;

 VAR_30->arc_subsystem_valid = !!(FUNC_1(VAR_29, VAR_0) &
          VAR_1);

 VAR_30->adaptive_ifs = VAR_4;




 VAR_30->ops.get_bus_info = VAR_13;

 VAR_30->ops.reset_hw = VAR_22;

 VAR_30->ops.init_hw = VAR_16;

 VAR_30->ops.setup_link = VAR_26;

 VAR_30->ops.check_mng_mode = VAR_9;

 VAR_30->ops.update_mc_addr_list = VAR_27;

 VAR_30->ops.write_vfta = VAR_28;

 VAR_30->ops.clear_vfta = VAR_12;

 VAR_30->ops.read_mac_addr = VAR_21;

 VAR_30->ops.id_led_init = VAR_15;

 VAR_30->ops.blink_led = VAR_6;

 VAR_30->ops.setup_led = VAR_25;

 VAR_30->ops.cleanup_led = VAR_10;

 VAR_30->ops.led_on = VAR_18;
 VAR_30->ops.led_off = VAR_17;

 VAR_30->ops.clear_hw_cntrs = VAR_11;

 VAR_30->ops.get_link_up_info = VAR_14;


 VAR_29->mac.ops.set_lan_id(VAR_29);

 return VAR_3;
}
