
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int forced_speed_duplex; int autoneg; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1)
{
 s32 VAR_2;

 FUNC_0("e1000_phy_force_speed_duplex_82543");

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto out;

 if (!VAR_1->mac.autoneg && (VAR_1->mac.forced_speed_duplex &
     VAR_0))
  VAR_2 = FUNC_2(VAR_1);

out:
 return VAR_2;
}
