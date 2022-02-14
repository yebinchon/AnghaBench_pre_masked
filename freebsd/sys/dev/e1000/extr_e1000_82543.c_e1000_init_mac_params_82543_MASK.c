
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clear_hw_cntrs; int led_off; int led_on; int read_mac_addr; int clear_vfta; int write_vfta; int update_mc_addr_list; int get_link_up_info; int check_for_link; int setup_physical_interface; int setup_link; int init_hw; int reset_hw; int set_lan_id; int get_bus_info; } ;
struct e1000_mac_info {int mta_reg_count; scalar_t__ type; TYPE_1__ ops; int rar_entry_count; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct e1000_hw {int device_id; TYPE_2__ phy; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_24)
{
 struct e1000_mac_info *VAR_25 = &VAR_24->mac;

 FUNC_0("e1000_init_mac_params_82543");


 switch (VAR_24->device_id) {
 case 129:
 case 128:
  VAR_24->phy.media_type = VAR_15;
  break;
 default:
  VAR_24->phy.media_type = VAR_14;
  break;
 }


 VAR_25->mta_reg_count = 128;

 VAR_25->rar_entry_count = VAR_0;




 VAR_25->ops.get_bus_info = VAR_8;

 VAR_25->ops.set_lan_id = VAR_18;

 VAR_25->ops.reset_hw = VAR_17;

 VAR_25->ops.init_hw = VAR_11;

 VAR_25->ops.setup_link = VAR_21;

 VAR_25->ops.setup_physical_interface =
  (VAR_24->phy.media_type == VAR_14)
   ? VAR_19 : VAR_20;

 VAR_25->ops.check_for_link =
  (VAR_24->phy.media_type == VAR_14)
   ? VAR_4
   : VAR_5;

 VAR_25->ops.get_link_up_info =
  (VAR_24->phy.media_type == VAR_14)
   ? VAR_9
   : VAR_10;

 VAR_25->ops.update_mc_addr_list = VAR_22;

 VAR_25->ops.write_vfta = VAR_23;

 VAR_25->ops.clear_vfta = VAR_7;

 VAR_25->ops.read_mac_addr = VAR_16;

 VAR_25->ops.led_on = VAR_13;
 VAR_25->ops.led_off = VAR_12;

 VAR_25->ops.clear_hw_cntrs = VAR_6;


 if ((VAR_24->mac.type != VAR_3) ||
     (VAR_24->phy.media_type == VAR_15))
  FUNC_1(VAR_24, VAR_2);

 return VAR_1;
}
