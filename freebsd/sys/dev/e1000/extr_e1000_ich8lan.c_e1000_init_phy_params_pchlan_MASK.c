
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int get_info; int get_cable_length; int force_speed_duplex; int check_polarity; int commit; int power_down; int power_up; int write_reg_page; int write_reg_locked; int write_reg; void* set_d3_lplu_state; void* set_d0_lplu_state; int reset; int release; int read_reg_page; int read_reg_locked; int read_reg; int set_page; int get_cfg_done; int check_reset_block; int acquire; } ;
struct e1000_phy_info {int addr; int reset_delay_us; scalar_t__ id; int type; TYPE_2__ ops; int autoneg_mask; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;







 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_28)
{
 struct e1000_phy_info *VAR_29 = &VAR_28->phy;
 s32 VAR_30;

 FUNC_0("e1000_init_phy_params_pchlan");

 VAR_29->addr = 1;
 VAR_29->reset_delay_us = 100;

 VAR_29->ops.acquire = VAR_3;
 VAR_29->ops.check_reset_block = VAR_6;
 VAR_29->ops.get_cfg_done = VAR_9;
 VAR_29->ops.set_page = VAR_24;
 VAR_29->ops.read_reg = VAR_19;
 VAR_29->ops.read_reg_locked = VAR_20;
 VAR_29->ops.read_reg_page = VAR_21;
 VAR_29->ops.release = VAR_22;
 VAR_29->ops.reset = VAR_14;
 VAR_29->ops.set_d0_lplu_state = VAR_23;
 VAR_29->ops.set_d3_lplu_state = VAR_23;
 VAR_29->ops.write_reg = VAR_25;
 VAR_29->ops.write_reg_locked = VAR_26;
 VAR_29->ops.write_reg_page = VAR_27;
 VAR_29->ops.power_up = VAR_18;
 VAR_29->ops.power_down = VAR_17;
 VAR_29->autoneg_mask = VAR_0;

 VAR_29->id = VAR_16;

 VAR_30 = FUNC_3(VAR_28);
 if (VAR_30)
  return VAR_30;

 if (VAR_29->id == VAR_16)
  switch (VAR_28->mac.type) {
  default:
   VAR_30 = FUNC_1(VAR_28);
   if (VAR_30)
    return VAR_30;
   if ((VAR_29->id != 0) && (VAR_29->id != VAR_2))
    break;

  case 135:
  case 133:
  case 132:
  case 134:



   VAR_30 = FUNC_4(VAR_28);
   if (VAR_30)
    return VAR_30;
   VAR_30 = FUNC_1(VAR_28);
   if (VAR_30)
    return VAR_30;
   break;
  }
 VAR_29->type = FUNC_2(VAR_29->id);

 switch (VAR_29->type) {
 case 131:
 case 129:
 case 128:
  VAR_29->ops.check_polarity = VAR_4;
  VAR_29->ops.force_speed_duplex =
   VAR_12;
  VAR_29->ops.get_cable_length = VAR_7;
  VAR_29->ops.get_info = VAR_10;
  VAR_29->ops.commit = VAR_15;
  break;
 case 130:
  VAR_29->ops.check_polarity = VAR_5;
  VAR_29->ops.force_speed_duplex = VAR_13;
  VAR_29->ops.get_cable_length = VAR_8;
  VAR_29->ops.get_info = VAR_11;
  break;
 default:
  VAR_30 = -VAR_1;
  break;
 }

 return VAR_30;
}
