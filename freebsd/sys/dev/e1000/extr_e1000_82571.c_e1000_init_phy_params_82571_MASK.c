
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int set_d3_lplu_state; int set_d0_lplu_state; void* release; void* acquire; int write_reg; int read_reg; void* get_cable_length; void* force_speed_duplex; void* commit; void* check_polarity; void* get_info; void* get_cfg_done; int power_down; int power_up; int reset; int check_reset_block; } ;
struct e1000_phy_info {scalar_t__ media_type; int addr; int reset_delay_us; int id; TYPE_1__ ops; int type; int autoneg_mask; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 void* VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_40)
{
 struct e1000_phy_info *VAR_41 = &VAR_40->phy;
 s32 VAR_42;

 FUNC_0("e1000_init_phy_params_82571");

 if (VAR_40->phy.media_type != VAR_17) {
  VAR_41->type = VAR_24;
  return VAR_3;
 }

 VAR_41->addr = 1;
 VAR_41->autoneg_mask = VAR_0;
 VAR_41->reset_delay_us = 100;

 VAR_41->ops.check_reset_block = VAR_8;
 VAR_41->ops.reset = VAR_21;
 VAR_41->ops.set_d0_lplu_state = VAR_33;
 VAR_41->ops.set_d3_lplu_state = VAR_36;
 VAR_41->ops.power_up = VAR_27;
 VAR_41->ops.power_down = VAR_26;

 switch (VAR_40->mac.type) {
 case 132:
 case 131:
  VAR_41->type = VAR_22;
  VAR_41->ops.get_cfg_done = VAR_11;
  VAR_41->ops.get_info = VAR_15;
  VAR_41->ops.check_polarity = VAR_6;
  VAR_41->ops.force_speed_duplex = VAR_19;
  VAR_41->ops.get_cable_length = VAR_9;
  VAR_41->ops.read_reg = VAR_31;
  VAR_41->ops.write_reg = VAR_38;
  VAR_41->ops.acquire = VAR_13;
  VAR_41->ops.release = VAR_28;
  break;
 case 130:
  VAR_41->type = VAR_23;
  VAR_41->ops.get_cfg_done = VAR_12;
  VAR_41->ops.get_info = VAR_16;
  VAR_41->ops.check_polarity = VAR_7;
  VAR_41->ops.commit = VAR_25;
  VAR_41->ops.force_speed_duplex = VAR_20;
  VAR_41->ops.get_cable_length = VAR_10;
  VAR_41->ops.read_reg = VAR_32;
  VAR_41->ops.write_reg = VAR_39;
  VAR_41->ops.acquire = VAR_13;
  VAR_41->ops.release = VAR_28;
  break;
 case 129:
 case 128:

  VAR_41->type = VAR_18;
  VAR_41->ops.get_cfg_done = VAR_12;
  VAR_41->ops.get_info = VAR_16;
  VAR_41->ops.check_polarity = VAR_7;
  VAR_41->ops.commit = VAR_25;
  VAR_41->ops.force_speed_duplex = VAR_20;
  VAR_41->ops.get_cable_length = VAR_10;
  VAR_41->ops.read_reg = VAR_30;
  VAR_41->ops.write_reg = VAR_37;
  VAR_41->ops.acquire = VAR_14;
  VAR_41->ops.release = VAR_29;
  VAR_41->ops.set_d0_lplu_state = VAR_34;
  VAR_41->ops.set_d3_lplu_state = VAR_35;
  break;
 default:
  return -VAR_2;
  break;
 }


 VAR_42 = FUNC_3(VAR_40);
 if (VAR_42) {
  FUNC_1("Error getting PHY ID\n");
  return VAR_42;
 }


 switch (VAR_40->mac.type) {
 case 132:
 case 131:
  if (VAR_41->id != VAR_4)
   VAR_42 = -VAR_2;
  break;
 case 130:
  if (VAR_41->id != VAR_5)
   VAR_42 = -VAR_2;
  break;
 case 129:
 case 128:
  if (VAR_41->id != VAR_1)
   VAR_42 = -VAR_2;
  break;
 default:
  VAR_42 = -VAR_2;
  break;
 }

 if (VAR_42)
  FUNC_2("PHY ID unknown: type = 0x%08x\n", VAR_41->id);

 return VAR_42;
}
