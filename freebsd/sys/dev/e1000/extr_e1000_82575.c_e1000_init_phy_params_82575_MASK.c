
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {void* force_speed_duplex; void* set_d3_lplu_state; void* set_d0_lplu_state; void* get_cable_length; void* get_info; void* check_polarity; int (* read_reg ) (struct e1000_hw*,int ,int*) ;int (* write_reg ) (struct e1000_hw*,int ,int) ;int reset; int release; int get_cfg_done; int commit; int check_reset_block; int acquire; int power_down; int power_up; int write_i2c_byte; int read_i2c_byte; } ;
struct e1000_phy_info {scalar_t__ media_type; int reset_delay_us; int id; TYPE_3__ ops; int type; int autoneg_mask; } ;
struct TYPE_4__ {int check_for_link; } ;
struct TYPE_5__ {int type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_10 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct e1000_hw*) ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;




 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
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
 int FUNC_6 (struct e1000_hw*,int ,int*) ;
 int FUNC_7 (struct e1000_hw*,int ,int*) ;
 int FUNC_8 (struct e1000_hw*,int ,int*) ;
 int FUNC_9 (struct e1000_hw*,int ,int*) ;
 int VAR_40 ;
 int FUNC_10 (struct e1000_hw*) ;
 void* VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;
 int VAR_45 ;
 int FUNC_13 (struct e1000_hw*,int ,int) ;
 int FUNC_14 (struct e1000_hw*,int ,int) ;
 int FUNC_15 (struct e1000_hw*,int ,int) ;
 int FUNC_16 (struct e1000_hw*,int ,int) ;
 int FUNC_17 (struct e1000_hw*,int ,int) ;
 int FUNC_18 (struct e1000_hw*,int ,int*) ;

__attribute__((used)) static s32 FUNC_19(struct e1000_hw *VAR_46)
{
 struct e1000_phy_info *VAR_47 = &VAR_46->phy;
 s32 VAR_48 = VAR_10;
 u32 VAR_49;

 FUNC_0("e1000_init_phy_params_82575");

 VAR_47->ops.read_i2c_byte = VAR_39;
 VAR_47->ops.write_i2c_byte = VAR_45;

 if (VAR_46->phy.media_type != VAR_25) {
  VAR_47->type = VAR_35;
  goto out;
 }

 VAR_47->ops.power_up = VAR_38;
 VAR_47->ops.power_down = VAR_37;

 VAR_47->autoneg_mask = VAR_0;
 VAR_47->reset_delay_us = 100;

 VAR_47->ops.acquire = VAR_11;
 VAR_47->ops.check_reset_block = VAR_16;
 VAR_47->ops.commit = VAR_36;
 VAR_47->ops.get_cfg_done = VAR_21;
 VAR_47->ops.release = VAR_40;

 VAR_49 = FUNC_1(VAR_46, VAR_1);

 if (FUNC_11(VAR_46)) {
  VAR_47->ops.reset = VAR_31;
  VAR_49 |= VAR_2;
 } else {
  VAR_47->ops.reset = VAR_30;
  VAR_49 &= ~VAR_2;
 }

 FUNC_2(VAR_46, VAR_1, VAR_49);
 FUNC_10(VAR_46);

 if (FUNC_11(VAR_46) && !FUNC_12(VAR_46)) {
  VAR_47->ops.read_reg = FUNC_9;
  VAR_47->ops.write_reg = FUNC_16;
 } else {
  switch (VAR_46->mac.type) {
  case 132:
  case 129:
  case 128:
   VAR_47->ops.read_reg = FUNC_6;
   VAR_47->ops.write_reg = FUNC_13;
   break;
  case 131:
  case 130:
   VAR_47->ops.read_reg = FUNC_7;
   VAR_47->ops.write_reg = FUNC_14;
   break;
  default:
   VAR_47->ops.read_reg = FUNC_8;
   VAR_47->ops.write_reg = FUNC_15;
  }
 }


 VAR_48 = FUNC_3(VAR_46);


 switch (VAR_47->id) {
 case 133:
 case 134:
 case 142:
 case 136:
 case 135:
 case 137:
  VAR_47->type = VAR_34;
  VAR_47->ops.check_polarity = VAR_15;
  VAR_47->ops.get_info = VAR_24;
  if (VAR_47->id == 142 ||
      VAR_47->id == 136 ||
      VAR_47->id == 135)
   VAR_47->ops.get_cable_length =
      VAR_20;
  else if (VAR_47->id == 133 ||
    VAR_47->id == 134)
   VAR_47->ops.get_cable_length =
      VAR_20;
  else
   VAR_47->ops.get_cable_length = VAR_19;
  VAR_47->ops.force_speed_duplex = VAR_29;

  if (VAR_47->id == 136) {
   u16 VAR_50;

   VAR_48 = VAR_47->ops.write_reg(VAR_46,
           VAR_9,
           2);
   if (VAR_48)
    goto out;

   VAR_48 = VAR_47->ops.read_reg(VAR_46,
          VAR_6,
          &VAR_50);
   if (VAR_48)
    goto out;

   VAR_50 = (VAR_50 & VAR_7) >>
          VAR_8;
   if (VAR_50 == VAR_5 ||
       VAR_50 == VAR_4)
    VAR_46->mac.ops.check_for_link =
      VAR_12;
  }
  if (VAR_47->id == 134) {
   VAR_48 = FUNC_4(VAR_46);
   if (VAR_48)
    goto out;
  }
  if (VAR_47->id == 133) {
   VAR_48 = FUNC_5(VAR_46);
   if (VAR_48)
    goto out;
  }
  break;
 case 139:
 case 138:
  VAR_47->type = VAR_33;
  VAR_47->ops.check_polarity = VAR_14;
  VAR_47->ops.get_info = VAR_23;
  VAR_47->ops.get_cable_length = VAR_18;
  VAR_47->ops.force_speed_duplex = VAR_28;
  VAR_47->ops.set_d0_lplu_state = VAR_41;
  VAR_47->ops.set_d3_lplu_state = VAR_44;
  break;
 case 140:
 case 141:
  VAR_47->type = VAR_26;
  VAR_47->ops.check_polarity = VAR_13;
  VAR_47->ops.force_speed_duplex =
      VAR_27;
  VAR_47->ops.get_cable_length = VAR_17;
  VAR_47->ops.get_info = VAR_22;
  VAR_47->ops.set_d0_lplu_state = VAR_42;
  VAR_47->ops.set_d3_lplu_state = VAR_43;
  break;
 case 143:
  VAR_47->type = VAR_32;
  VAR_47->ops.check_polarity = VAR_15;
  VAR_47->ops.get_info = VAR_24;
  VAR_47->ops.get_cable_length = VAR_20;
  VAR_47->ops.set_d0_lplu_state = VAR_42;
  VAR_47->ops.set_d3_lplu_state = VAR_43;
  VAR_47->ops.force_speed_duplex = VAR_29;
  break;
 default:
  VAR_48 = -VAR_3;
  goto out;
 }

out:
 return VAR_48;
}
