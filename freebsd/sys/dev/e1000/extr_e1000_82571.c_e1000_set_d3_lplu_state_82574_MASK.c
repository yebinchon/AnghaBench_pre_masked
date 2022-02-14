
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ autoneg_advertised; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6, bool VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_6, VAR_4);

 FUNC_0("e1000_set_d3_lplu_state_82574");

 if (!VAR_7) {
  VAR_8 &= ~VAR_3;
 } else if ((VAR_6->phy.autoneg_advertised == VAR_2) ||
     (VAR_6->phy.autoneg_advertised == VAR_1) ||
     (VAR_6->phy.autoneg_advertised == VAR_0)) {
  VAR_8 |= VAR_3;
 }

 FUNC_2(VAR_6, VAR_4, VAR_8);
 return VAR_5;
}
