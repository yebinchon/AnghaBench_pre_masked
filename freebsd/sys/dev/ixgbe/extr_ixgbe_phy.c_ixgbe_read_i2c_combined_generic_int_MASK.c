
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int*) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ) ;
 int FUNC_10 (struct ixgbe_hw*,int ) ;
 int FUNC_11 (struct ixgbe_hw*,int ) ;

s32 FUNC_12(struct ixgbe_hw *VAR_3, u8 VAR_4, u16 VAR_5,
     u16 *VAR_6, bool VAR_7)
{
 u32 VAR_8 = VAR_3->phy.phy_semaphore_mask;
 int VAR_9 = 3;
 int VAR_10 = 0;
 u8 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 u8 VAR_15;

 VAR_14 = ((VAR_5 >> 7) & 0xFE) | 1;
 VAR_15 = FUNC_7(VAR_14, VAR_5 & 0xFF);
 VAR_15 = ~VAR_15;
 do {
  if (VAR_7 && VAR_3->mac.ops.acquire_swfw_sync(VAR_3, VAR_8))
   return VAR_2;
  FUNC_4(VAR_3);

  if (FUNC_8(VAR_3, VAR_4))
   goto fail;

  if (FUNC_8(VAR_3, VAR_14))
   goto fail;

  if (FUNC_8(VAR_3, VAR_5 & 0xFF))
   goto fail;

  if (FUNC_8(VAR_3, VAR_15))
   goto fail;

  FUNC_4(VAR_3);

  if (FUNC_8(VAR_3, VAR_4 | 1))
   goto fail;

  if (FUNC_6(VAR_3, &VAR_12))
   goto fail;

  if (FUNC_6(VAR_3, &VAR_13))
   goto fail;

  if (FUNC_1(VAR_3, &VAR_11))
   goto fail;

  if (FUNC_2(VAR_3, VAR_0))
   goto fail;
  FUNC_5(VAR_3);
  if (VAR_7)
   VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_8);
  *VAR_6 = (VAR_12 << 8) | VAR_13;
  return 0;

fail:
  FUNC_3(VAR_3);
  if (VAR_7)
   VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_8);
  VAR_10++;
  if (VAR_10 < VAR_9)
   FUNC_0("I2C byte read combined error - Retrying.\n");
  else
   FUNC_0("I2C byte read combined error.\n");
 } while (VAR_10 < VAR_9);

 return VAR_1;
}
