
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int force_speed_duplex; int check_polarity; int get_info; int commit; void* write_reg; void* read_reg; int write_reg_locked; int read_reg_locked; int power_down; int power_up; int set_d3_lplu_state; int set_d0_lplu_state; int reset; int release; int get_cfg_done; int get_cable_length; int check_reset_block; int acquire; } ;
struct e1000_phy_info {int addr; int reset_delay_us; int id; TYPE_1__ ops; void* autoneg_mask; int type; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 void* VAR_0 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 int VAR_33 ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_34)
{
 struct e1000_phy_info *VAR_35 = &VAR_34->phy;
 s32 VAR_36;
 u16 VAR_37 = 0;

 FUNC_0("e1000_init_phy_params_ich8lan");

 VAR_35->addr = 1;
 VAR_35->reset_delay_us = 100;

 VAR_35->ops.acquire = VAR_4;
 VAR_35->ops.check_reset_block = VAR_8;
 VAR_35->ops.get_cable_length = VAR_9;
 VAR_35->ops.get_cfg_done = VAR_10;
 VAR_35->ops.read_reg = VAR_26;
 VAR_35->ops.release = VAR_28;
 VAR_35->ops.reset = VAR_18;
 VAR_35->ops.set_d0_lplu_state = VAR_29;
 VAR_35->ops.set_d3_lplu_state = VAR_30;
 VAR_35->ops.write_reg = VAR_32;
 VAR_35->ops.power_up = VAR_24;
 VAR_35->ops.power_down = VAR_23;




 VAR_36 = FUNC_2(VAR_34);
 if (VAR_36) {
  VAR_35->ops.write_reg = VAR_31;
  VAR_35->ops.read_reg = VAR_25;
  VAR_36 = FUNC_2(VAR_34);
  if (VAR_36) {
   FUNC_1("Cannot determine PHY addr. Erroring out\n");
   return VAR_36;
  }
 }

 VAR_35->id = 0;
 while ((VAR_22 == FUNC_4(VAR_35->id)) &&
        (VAR_37++ < 100)) {
  FUNC_5(1);
  VAR_36 = FUNC_3(VAR_34);
  if (VAR_36)
   return VAR_36;
 }


 switch (VAR_35->id) {
 case 128:
  VAR_35->type = VAR_20;
  VAR_35->autoneg_mask = VAR_0;
  VAR_35->ops.read_reg_locked = VAR_27;
  VAR_35->ops.write_reg_locked = VAR_33;
  VAR_35->ops.get_info = VAR_12;
  VAR_35->ops.check_polarity = VAR_6;
  VAR_35->ops.force_speed_duplex = VAR_16;
  break;
 case 130:
 case 129:
 case 131:
  VAR_35->type = VAR_19;
  VAR_35->autoneg_mask = VAR_1;
  VAR_35->ops.get_info = VAR_11;
  VAR_35->ops.check_polarity = VAR_5;
  VAR_35->ops.force_speed_duplex = VAR_15;
  break;
 case 132:
  VAR_35->type = VAR_14;
  VAR_35->autoneg_mask = VAR_0;
  VAR_35->ops.read_reg = VAR_25;
  VAR_35->ops.write_reg = VAR_31;
  VAR_35->ops.commit = VAR_21;
  VAR_35->ops.get_info = VAR_13;
  VAR_35->ops.check_polarity = VAR_7;
  VAR_35->ops.force_speed_duplex = VAR_17;
  break;
 default:
  return -VAR_2;
  break;
 }

 return VAR_3;
}
