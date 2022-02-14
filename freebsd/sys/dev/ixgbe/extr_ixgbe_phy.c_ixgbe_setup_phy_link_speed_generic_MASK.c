
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autoneg_advertised; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_7,
           ixgbe_link_speed VAR_8,
           bool VAR_9)
{
 FUNC_1(VAR_9);

 FUNC_0("ixgbe_setup_phy_link_speed_generic");





 VAR_7->phy.autoneg_advertised = 0;

 if (VAR_8 & VAR_1)
  VAR_7->phy.autoneg_advertised |= VAR_1;

 if (VAR_8 & VAR_5)
  VAR_7->phy.autoneg_advertised |= VAR_5;

 if (VAR_8 & VAR_4)
  VAR_7->phy.autoneg_advertised |= VAR_4;

 if (VAR_8 & VAR_3)
  VAR_7->phy.autoneg_advertised |= VAR_3;

 if (VAR_8 & VAR_0)
  VAR_7->phy.autoneg_advertised |= VAR_0;

 if (VAR_8 & VAR_2)
  VAR_7->phy.autoneg_advertised |= VAR_2;


 FUNC_2(VAR_7);

 return VAR_6;
}
