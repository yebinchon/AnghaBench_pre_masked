
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_phy_info {scalar_t__ smart_speed; scalar_t__ autoneg_advertised; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

s32 FUNC_3(struct e1000_hw *VAR_9, bool VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_9->phy;
 u32 VAR_12;

 FUNC_0("e1000_set_d3_lplu_state_82580");

 VAR_12 = FUNC_1(VAR_9, VAR_0);

 if (!VAR_10) {
  VAR_12 &= ~VAR_1;






  if (VAR_11->smart_speed == VAR_8)
   VAR_12 |= VAR_2;
  else if (VAR_11->smart_speed == VAR_7)
   VAR_12 &= ~VAR_2;
 } else if ((VAR_11->autoneg_advertised == VAR_5) ||
     (VAR_11->autoneg_advertised == VAR_4) ||
     (VAR_11->autoneg_advertised == VAR_3)) {
  VAR_12 |= VAR_1;

  VAR_12 &= ~VAR_2;
 }

 FUNC_2(VAR_9, VAR_0, VAR_12);
 return VAR_6;
}
