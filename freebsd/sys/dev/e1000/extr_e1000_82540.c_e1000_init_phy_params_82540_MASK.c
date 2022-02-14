
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int power_down; int power_up; int get_info; int write_reg; int reset; int read_reg; int get_cfg_done; int get_cable_length; int force_speed_duplex; int commit; int check_polarity; } ;
struct e1000_phy_info {int addr; int reset_delay_us; int id; TYPE_1__ ops; int type; int autoneg_mask; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_15)
{
 struct e1000_phy_info *VAR_16 = &VAR_15->phy;
 s32 VAR_17;

 VAR_16->addr = 1;
 VAR_16->autoneg_mask = VAR_0;
 VAR_16->reset_delay_us = 10000;
 VAR_16->type = VAR_9;


 VAR_16->ops.check_polarity = VAR_3;
 VAR_16->ops.commit = VAR_10;
 VAR_16->ops.force_speed_duplex = VAR_7;
 VAR_16->ops.get_cable_length = VAR_4;
 VAR_16->ops.get_cfg_done = VAR_5;
 VAR_16->ops.read_reg = VAR_13;
 VAR_16->ops.reset = VAR_8;
 VAR_16->ops.write_reg = VAR_14;
 VAR_16->ops.get_info = VAR_6;
 VAR_16->ops.power_up = VAR_12;
 VAR_16->ops.power_down = VAR_11;

 VAR_17 = FUNC_0(VAR_15);
 if (VAR_17)
  goto out;


 switch (VAR_15->mac.type) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  if (VAR_16->id == VAR_2)
   break;

 default:
  VAR_17 = -VAR_1;
  goto out;
  break;
 }

out:
 return VAR_17;
}
