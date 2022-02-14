
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_8__ {int (* write_reg_mdi ) (struct ixgbe_hw*,int,int,int ) ;} ;
struct TYPE_7__ {int phy_semaphore_mask; TYPE_4__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; TYPE_3__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int) ;
 int FUNC_2 (struct ixgbe_hw*,int,int,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_3, u32 VAR_4,
    u32 VAR_5, u16 VAR_6)
{
 s32 VAR_7;
 u32 VAR_8 = VAR_3->phy.phy_semaphore_mask | VAR_1;

 FUNC_0("ixgbe_write_phy_reg_x550a");

 if (VAR_3->mac.ops.acquire_swfw_sync(VAR_3, VAR_8) == VAR_2) {
  VAR_7 = VAR_3->phy.ops.write_reg_mdi(VAR_3, VAR_4, VAR_5,
       VAR_6);
  VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_8);
 } else {
  VAR_7 = VAR_0;
 }

 return VAR_7;
}
