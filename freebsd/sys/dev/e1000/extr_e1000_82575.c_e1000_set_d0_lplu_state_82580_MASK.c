
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_phy_info {scalar_t__ smart_speed; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6, bool VAR_7)
{
 struct e1000_phy_info *VAR_8 = &VAR_6->phy;
 u32 VAR_9;

 FUNC_0("e1000_set_d0_lplu_state_82580");

 VAR_9 = FUNC_1(VAR_6, VAR_0);

 if (VAR_7) {
  VAR_9 |= VAR_1;


  VAR_9 &= ~VAR_2;
 } else {
  VAR_9 &= ~VAR_1;







  if (VAR_8->smart_speed == VAR_5)
   VAR_9 |= VAR_2;
  else if (VAR_8->smart_speed == VAR_4)
   VAR_9 &= ~VAR_2;
 }

 FUNC_2(VAR_6, VAR_0, VAR_9);
 return VAR_3;
}
