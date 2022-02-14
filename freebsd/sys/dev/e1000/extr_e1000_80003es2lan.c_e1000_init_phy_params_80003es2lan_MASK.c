
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfg_on_link_up; int write_reg; int read_reg; int get_cable_length; int force_speed_duplex; int set_d3_lplu_state; int reset; int release; int get_info; int get_cfg_done; int commit; int check_reset_block; int check_polarity; int acquire; int power_down; int power_up; } ;
struct e1000_phy_info {scalar_t__ media_type; int addr; int reset_delay_us; scalar_t__ id; TYPE_1__ ops; int type; int autoneg_mask; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct e1000_hw*) ;
 int VAR_10 ;
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
 int VAR_22 ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_23)
{
 struct e1000_phy_info *VAR_24 = &VAR_23->phy;
 s32 VAR_25;

 FUNC_0("e1000_init_phy_params_80003es2lan");

 if (VAR_23->phy.media_type != VAR_11) {
  VAR_24->type = VAR_15;
  return VAR_2;
 } else {
  VAR_24->ops.power_up = VAR_18;
  VAR_24->ops.power_down = VAR_17;
 }

 VAR_24->addr = 1;
 VAR_24->autoneg_mask = VAR_0;
 VAR_24->reset_delay_us = 100;
 VAR_24->type = VAR_13;

 VAR_24->ops.acquire = VAR_4;
 VAR_24->ops.check_polarity = VAR_6;
 VAR_24->ops.check_reset_block = VAR_7;
 VAR_24->ops.commit = VAR_16;
 VAR_24->ops.get_cfg_done = VAR_9;
 VAR_24->ops.get_info = VAR_10;
 VAR_24->ops.release = VAR_20;
 VAR_24->ops.reset = VAR_14;
 VAR_24->ops.set_d3_lplu_state = VAR_21;

 VAR_24->ops.force_speed_duplex = VAR_12;
 VAR_24->ops.get_cable_length = VAR_8;
 VAR_24->ops.read_reg = VAR_19;
 VAR_24->ops.write_reg = VAR_22;

 VAR_24->ops.cfg_on_link_up = VAR_5;


 VAR_25 = FUNC_1(VAR_23);


 if (VAR_24->id != VAR_3)
  return -VAR_1;

 return VAR_25;
}
