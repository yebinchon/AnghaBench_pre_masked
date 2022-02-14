
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clear_hw_cntrs; int led_off; int led_on; int cleanup_led; int setup_led; int id_led_init; int read_mac_addr; int clear_vfta; int write_vfta; int update_mc_addr_list; int get_link_up_info; int check_for_link; int setup_physical_interface; int setup_link; int init_hw; int reset_hw; int set_lan_id; int get_bus_info; } ;
struct e1000_mac_info {int mta_reg_count; TYPE_2__ ops; int rar_entry_count; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {int device_id; TYPE_1__ phy; struct e1000_mac_info mac; } ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_25)
{
 struct e1000_mac_info *VAR_26 = &VAR_25->mac;
 s32 VAR_27 = VAR_2;

 FUNC_0("e1000_init_mac_params_82540");


 switch (VAR_25->device_id) {
 case 136:
 case 135:
 case 133:
 case 132:
  VAR_25->phy.media_type = 129;
  break;
 case 134:
 case 131:
  VAR_25->phy.media_type = 128;
  break;
 default:
  VAR_25->phy.media_type = 130;
  break;
 }


 VAR_26->mta_reg_count = 128;

 VAR_26->rar_entry_count = VAR_1;




 VAR_26->ops.get_bus_info = VAR_9;

 VAR_26->ops.set_lan_id = VAR_18;

 VAR_26->ops.reset_hw = VAR_17;

 VAR_26->ops.init_hw = VAR_13;

 VAR_26->ops.setup_link = VAR_22;

 VAR_26->ops.setup_physical_interface =
  (VAR_25->phy.media_type == 130)
   ? VAR_19
   : VAR_20;

 switch (VAR_25->phy.media_type) {
 case 130:
  VAR_26->ops.check_for_link = VAR_3;
  break;
 case 129:
  VAR_26->ops.check_for_link = VAR_4;
  break;
 case 128:
  VAR_26->ops.check_for_link = VAR_5;
  break;
 default:
  VAR_27 = -VAR_0;
  goto out;
  break;
 }

 VAR_26->ops.get_link_up_info =
  (VAR_25->phy.media_type == 130)
   ? VAR_10
   : VAR_11;

 VAR_26->ops.update_mc_addr_list = VAR_23;

 VAR_26->ops.write_vfta = VAR_24;

 VAR_26->ops.clear_vfta = VAR_8;

 VAR_26->ops.read_mac_addr = VAR_16;

 VAR_26->ops.id_led_init = VAR_12;

 VAR_26->ops.setup_led = VAR_21;

 VAR_26->ops.cleanup_led = VAR_6;

 VAR_26->ops.led_on = VAR_15;
 VAR_26->ops.led_off = VAR_14;

 VAR_26->ops.clear_hw_cntrs = VAR_7;

out:
 return VAR_27;
}
