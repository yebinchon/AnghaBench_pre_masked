
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int read_mac_addr; int rar_set; int update_mc_addr_list; int get_link_up_info; int check_for_link; int init_hw; int reset_hw; int get_bus_info; int setup_link; } ;
struct e1000_mac_info {int mta_reg_count; int rar_entry_count; TYPE_2__ ops; void* adaptive_ifs; void* arc_subsystem_valid; void* asf_firmware_present; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {TYPE_1__ phy; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* VAR_1 ;
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

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_12)
{
 struct e1000_mac_info *VAR_13 = &VAR_12->mac;

 FUNC_0("e1000_init_mac_params_vf");







 VAR_12->phy.media_type = VAR_6;


 VAR_13->asf_firmware_present = VAR_1;

 VAR_13->arc_subsystem_valid = VAR_1;

 VAR_13->adaptive_ifs = VAR_1;

 VAR_13->mta_reg_count = 128;

 VAR_13->rar_entry_count = 1;



 VAR_13->ops.setup_link = VAR_10;

 VAR_13->ops.get_bus_info = VAR_3;

 VAR_13->ops.reset_hw = VAR_9;

 VAR_13->ops.init_hw = VAR_5;

 VAR_13->ops.check_for_link = VAR_2;

 VAR_13->ops.get_link_up_info = VAR_4;

 VAR_13->ops.update_mc_addr_list = VAR_11;

 VAR_13->ops.rar_set = VAR_7;

 VAR_13->ops.read_mac_addr = VAR_8;


 return VAR_0;
}
