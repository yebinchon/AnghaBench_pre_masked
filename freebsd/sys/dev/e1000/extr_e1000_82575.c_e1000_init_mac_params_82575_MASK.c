
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* set_lan_id ) (struct e1000_hw*) ;int release_swfw_sync; int acquire_swfw_sync; int get_link_up_info; int clear_hw_cntrs; int led_off; int led_on; int cleanup_led; int setup_led; int blink_led; int id_led_init; int validate_mdi_setting; int clear_vfta; int write_vfta; int update_mc_addr_list; int config_collision_dist; int read_mac_addr; int check_for_link; int power_up_serdes; int shutdown_serdes; int setup_physical_interface; int setup_link; int init_hw; int reset_hw; int get_bus_info; } ;
struct e1000_mac_info {int mta_reg_count; int uta_reg_count; scalar_t__ type; int arc_subsystem_valid; TYPE_3__ ops; void* has_fwsm; void* asf_firmware_present; int rar_entry_count; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct e1000_dev_spec_82575 {void* clear_semaphore_once; int eee_disable; } ;
struct TYPE_4__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {struct e1000_mac_info mac; TYPE_2__ phy; TYPE_1__ dev_spec; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
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
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
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
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_46)
{
 struct e1000_mac_info *VAR_47 = &VAR_46->mac;
 struct e1000_dev_spec_82575 *VAR_48 = &VAR_46->dev_spec._82575;

 FUNC_0("e1000_init_mac_params_82575");


 FUNC_2(VAR_46);

 VAR_47->mta_reg_count = 128;

 VAR_47->uta_reg_count = (VAR_46->mac.type == VAR_9) ? 0 : 128;

 VAR_47->rar_entry_count = VAR_2;
 if (VAR_47->type == VAR_10)
  VAR_47->rar_entry_count = VAR_3;
 if (VAR_47->type == VAR_11)
  VAR_47->rar_entry_count = VAR_4;
 if (VAR_47->type == VAR_24 || VAR_47->type == VAR_25)
  VAR_47->rar_entry_count = VAR_5;


 if (VAR_47->type >= VAR_24)
  VAR_48->eee_disable = VAR_7;


 if (VAR_47->type >= VAR_22)
  VAR_48->clear_semaphore_once = VAR_8;


 VAR_47->asf_firmware_present = VAR_8;

 VAR_47->has_fwsm = VAR_8;

 VAR_47->arc_subsystem_valid =
  !!(FUNC_1(VAR_46, VAR_0) & VAR_1);




 VAR_47->ops.get_bus_info = VAR_20;

 if (VAR_47->type >= VAR_11)
  VAR_47->ops.reset_hw = VAR_36;
 else
 VAR_47->ops.reset_hw = VAR_35;

 if ((VAR_47->type == VAR_22) || (VAR_47->type == VAR_23))
  VAR_47->ops.init_hw = VAR_28;
 else
 VAR_47->ops.init_hw = VAR_27;

 VAR_47->ops.setup_link = VAR_39;

 VAR_47->ops.setup_physical_interface =
  (VAR_46->phy.media_type == VAR_31)
  ? VAR_37 : VAR_40;

 VAR_47->ops.shutdown_serdes = VAR_41;

 VAR_47->ops.power_up_serdes = VAR_32;

 VAR_47->ops.check_for_link = VAR_14;

 VAR_47->ops.read_mac_addr = VAR_33;

 VAR_47->ops.config_collision_dist = VAR_19;

 VAR_47->ops.update_mc_addr_list = VAR_42;
 if (VAR_46->mac.type == VAR_24 || VAR_47->type == VAR_25) {

  VAR_47->ops.write_vfta = VAR_45;

  VAR_47->ops.clear_vfta = VAR_18;
 } else {

  VAR_47->ops.write_vfta = VAR_44;

  VAR_47->ops.clear_vfta = VAR_17;
 }
 if (VAR_46->mac.type >= VAR_11)
  VAR_47->ops.validate_mdi_setting =
    VAR_43;

 VAR_47->ops.id_led_init = VAR_26;

 VAR_47->ops.blink_led = VAR_13;

 VAR_47->ops.setup_led = VAR_38;

 VAR_47->ops.cleanup_led = VAR_15;

 VAR_47->ops.led_on = VAR_30;
 VAR_47->ops.led_off = VAR_29;

 VAR_47->ops.clear_hw_cntrs = VAR_16;

 VAR_47->ops.get_link_up_info = VAR_21;

 VAR_47->ops.acquire_swfw_sync = VAR_12;
 VAR_47->ops.release_swfw_sync = VAR_34;


 VAR_46->mac.ops.set_lan_id(VAR_46);

 return VAR_6;
}
