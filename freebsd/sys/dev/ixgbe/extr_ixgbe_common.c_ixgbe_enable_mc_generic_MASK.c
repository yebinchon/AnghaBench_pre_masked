
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mc_filter_type; } ;
struct ixgbe_addr_filter_info {scalar_t__ mta_in_use; } ;
struct ixgbe_hw {TYPE_1__ mac; struct ixgbe_addr_filter_info addr_ctrl; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_2(struct ixgbe_hw *VAR_3)
{
 struct ixgbe_addr_filter_info *VAR_4 = &VAR_3->addr_ctrl;

 FUNC_0("ixgbe_enable_mc_generic");

 if (VAR_4->mta_in_use > 0)
  FUNC_1(VAR_3, VAR_0, VAR_1 |
    VAR_3->mac.mc_filter_type);

 return VAR_2;
}
