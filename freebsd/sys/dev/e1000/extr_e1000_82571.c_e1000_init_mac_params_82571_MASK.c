
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {void* blink_led; void* led_on; void* check_mng_mode; void* set_lan_id; int clear_hw_cntrs; int led_off; int cleanup_led; int setup_led; int id_led_init; int read_mac_addr; int clear_vfta; int write_vfta; int update_mc_addr_list; int setup_link; int init_hw; int reset_hw; int get_bus_info; void* get_link_up_info; int check_for_link; void* setup_physical_interface; } ;
struct e1000_mac_info {int mta_reg_count; int type; int arc_subsystem_valid; void* has_fwsm; TYPE_2__ ops; void* adaptive_ifs; void* asf_firmware_present; int rar_entry_count; } ;
struct TYPE_7__ {scalar_t__ smb_counter; } ;
struct TYPE_8__ {TYPE_3__ _82571; } ;
struct TYPE_5__ {int media_type; } ;
struct e1000_hw {int device_id; TYPE_4__ dev_spec; struct e1000_mac_info mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int VAR_8 ;
 void* VAR_9 ;





 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_39)
{
 struct e1000_mac_info *VAR_40 = &VAR_39->mac;
 u32 VAR_41 = 0;
 u32 VAR_42 = 0;
 bool VAR_43 = VAR_8;

 FUNC_0("e1000_init_mac_params_82571");


 switch (VAR_39->device_id) {
 case 139:
 case 134:
 case 138:
  VAR_39->phy.media_type = VAR_28;
  VAR_40->ops.setup_physical_interface =
   VAR_34;
  VAR_40->ops.check_for_link = VAR_12;
  VAR_40->ops.get_link_up_info =
   VAR_21;
  break;
 case 137:
 case 136:
 case 135:
 case 133:
  VAR_39->phy.media_type = VAR_29;
  VAR_40->ops.setup_physical_interface =
   VAR_34;
  VAR_40->ops.check_for_link = VAR_13;
  VAR_40->ops.get_link_up_info =
   VAR_21;
  break;
 default:
  VAR_39->phy.media_type = VAR_27;
  VAR_40->ops.setup_physical_interface =
   VAR_33;
  VAR_40->ops.check_for_link = VAR_11;
  VAR_40->ops.get_link_up_info =
   VAR_20;
  break;
 }


 VAR_40->mta_reg_count = 128;

 VAR_40->rar_entry_count = VAR_2;

 VAR_40->asf_firmware_present = VAR_9;

 VAR_40->adaptive_ifs = VAR_9;




 VAR_40->ops.get_bus_info = VAR_19;

 VAR_40->ops.reset_hw = VAR_31;

 VAR_40->ops.init_hw = VAR_23;

 VAR_40->ops.setup_link = VAR_36;

 VAR_40->ops.update_mc_addr_list = VAR_37;

 VAR_40->ops.write_vfta = VAR_38;

 VAR_40->ops.clear_vfta = VAR_18;

 VAR_40->ops.read_mac_addr = VAR_30;

 VAR_40->ops.id_led_init = VAR_22;

 VAR_40->ops.setup_led = VAR_35;

 VAR_40->ops.cleanup_led = VAR_16;

 VAR_40->ops.led_off = VAR_24;

 VAR_40->ops.clear_hw_cntrs = VAR_17;


 switch (VAR_39->mac.type) {
 case 130:
  VAR_40->ops.set_lan_id = VAR_32;
  VAR_40->ops.check_mng_mode = VAR_15;
  VAR_40->ops.led_on = VAR_26;
  VAR_40->ops.blink_led = VAR_10;


  VAR_40->has_fwsm = VAR_9;



  VAR_40->arc_subsystem_valid = !!(FUNC_2(VAR_39, VAR_0) &
           VAR_1);
  break;
 case 129:
 case 128:
  VAR_40->ops.set_lan_id = VAR_32;
  VAR_40->ops.check_mng_mode = VAR_14;
  VAR_40->ops.led_on = VAR_25;
  break;
 default:
  VAR_40->ops.check_mng_mode = VAR_15;
  VAR_40->ops.led_on = VAR_26;
  VAR_40->ops.blink_led = VAR_10;


  VAR_40->has_fwsm = VAR_9;
  break;
 }







 switch (VAR_39->mac.type) {
 case 132:
 case 131:
  VAR_42 = FUNC_2(VAR_39, VAR_5);

  if (!(VAR_42 & VAR_6)) {

   FUNC_3(VAR_39, VAR_5, VAR_42 |
     VAR_6);
   VAR_43 = VAR_9;
  } else {
   VAR_43 = VAR_8;
  }
  break;
 default:
  VAR_43 = VAR_9;
  break;
 }

 if (VAR_43) {

  VAR_41 = FUNC_2(VAR_39, VAR_4);
  if (VAR_41 & VAR_7) {




   FUNC_1("Please update your 82571 Bootagent\n");
  }
  FUNC_3(VAR_39, VAR_4, VAR_41 & ~VAR_7);
 }


  VAR_39->dev_spec._82571.smb_counter = 0;

 return VAR_3;
}
