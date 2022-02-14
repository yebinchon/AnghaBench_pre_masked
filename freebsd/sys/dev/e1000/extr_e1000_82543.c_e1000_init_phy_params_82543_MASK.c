
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* reset ) (struct e1000_hw*) ;int get_info; int write_reg; int read_reg; int get_cfg_done; int get_cable_length; int force_speed_duplex; int commit; int check_polarity; int power_down; int power_up; } ;
struct e1000_phy_info {scalar_t__ media_type; int addr; int reset_delay_us; int id; TYPE_1__ ops; int type; int autoneg_mask; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int VAR_8 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_20)
{
 struct e1000_phy_info *VAR_21 = &VAR_20->phy;
 s32 VAR_22 = VAR_2;

 FUNC_0("e1000_init_phy_params_82543");

 if (VAR_20->phy.media_type != VAR_9) {
  VAR_21->type = VAR_12;
  goto out;
 } else {
  VAR_21->ops.power_up = VAR_15;
  VAR_21->ops.power_down = VAR_14;
 }

 VAR_21->addr = 1;
 VAR_21->autoneg_mask = VAR_0;
 VAR_21->reset_delay_us = 10000;
 VAR_21->type = VAR_11;


 VAR_21->ops.check_polarity = VAR_5;
 VAR_21->ops.commit = VAR_13;
 VAR_21->ops.force_speed_duplex = VAR_10;
 VAR_21->ops.get_cable_length = VAR_6;
 VAR_21->ops.get_cfg_done = VAR_7;
 VAR_21->ops.read_reg = (VAR_20->mac.type == 129)
      ? VAR_16
      : VAR_17;
 VAR_21->ops.reset = (VAR_20->mac.type == 129)
      ? FUNC_4
      : FUNC_5;
 VAR_21->ops.write_reg = (VAR_20->mac.type == 129)
      ? VAR_18
      : VAR_19;
 VAR_21->ops.get_info = VAR_8;






 if (!FUNC_3(VAR_20)) {
  VAR_22 = VAR_21->ops.reset(VAR_20);
  if (VAR_22) {
   FUNC_1("Resetting PHY during init failed.\n");
   goto out;
  }
  FUNC_6(20);
 }

 VAR_22 = FUNC_2(VAR_20);
 if (VAR_22)
  goto out;


 switch (VAR_20->mac.type) {
 case 129:
  if (VAR_21->id != VAR_3) {
   VAR_22 = -VAR_1;
   goto out;
  }
  break;
 case 128:
  if (VAR_21->id != VAR_4) {
   VAR_22 = -VAR_1;
   goto out;
  }
  break;
 default:
  VAR_22 = -VAR_1;
  goto out;
  break;
 }

out:
 return VAR_22;
}
