
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ speeds_supported; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;
typedef scalar_t__ ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*) ;

s32 FUNC_2(struct ixgbe_hw *VAR_2,
            ixgbe_link_speed *VAR_3,
            bool *VAR_4)
{
 s32 VAR_5 = VAR_0;

 FUNC_0("ixgbe_get_copper_link_capabilities_generic");

 *VAR_4 = VAR_1;
 if (!VAR_2->phy.speeds_supported)
  VAR_5 = FUNC_1(VAR_2);

 *VAR_3 = VAR_2->phy.speeds_supported;
 return VAR_5;
}
