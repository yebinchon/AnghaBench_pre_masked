
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int get_link_up_info; int clear_hw_cntrs; int led_off; int led_on; int rar_set; int read_mac_addr; int clear_vfta; int write_vfta; int update_mc_addr_list; int check_for_link; int setup_physical_interface; int setup_link; int init_hw; int reset_hw; int set_lan_id; int get_bus_info; } ;
struct e1000_mac_info {int mta_reg_count; TYPE_2__ ops; int rar_entry_count; } ;
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

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_19)
{
 struct e1000_mac_info *VAR_20 = &VAR_19->mac;

 FUNC_0("e1000_init_mac_params_82542");


 VAR_19->phy.media_type = VAR_10;


 VAR_20->mta_reg_count = 128;

 VAR_20->rar_entry_count = VAR_0;




 VAR_20->ops.get_bus_info = VAR_5;

 VAR_20->ops.set_lan_id = VAR_14;

 VAR_20->ops.reset_hw = VAR_13;

 VAR_20->ops.init_hw = VAR_7;

 VAR_20->ops.setup_link = VAR_16;

 VAR_20->ops.setup_physical_interface =
     VAR_15;

 VAR_20->ops.check_for_link = VAR_2;

 VAR_20->ops.update_mc_addr_list = VAR_17;

 VAR_20->ops.write_vfta = VAR_18;

 VAR_20->ops.clear_vfta = VAR_4;

 VAR_20->ops.read_mac_addr = VAR_12;

 VAR_20->ops.rar_set = VAR_11;

 VAR_20->ops.led_on = VAR_9;
 VAR_20->ops.led_off = VAR_8;

 VAR_20->ops.clear_hw_cntrs = VAR_3;

 VAR_20->ops.get_link_up_info =
    VAR_6;

 return VAR_1;
}
