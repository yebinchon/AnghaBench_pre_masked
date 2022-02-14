
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autoneg_advertised; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int) ;

s32 FUNC_2(struct ixgbe_hw *VAR_2)
{

 if (VAR_2->phy.autoneg_advertised & VAR_0)
  return VAR_1;

 if (FUNC_0(VAR_2))
  return 0;

 return FUNC_1(VAR_2, VAR_2->phy.autoneg_advertised);
}
