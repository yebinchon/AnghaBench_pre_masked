
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,scalar_t__) ;int (* release_swfw_sync ) (struct ixgbe_hw*,scalar_t__) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_8 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_9 (struct ixgbe_hw*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_10(struct ixgbe_hw *VAR_2, u8 VAR_3,
         u8 VAR_4, u8 VAR_5, bool VAR_6)
{
 s32 VAR_7;
 u32 VAR_8 = 1;
 u32 VAR_9 = 0;
 u32 VAR_10 = VAR_2->phy.phy_semaphore_mask;

 FUNC_0("ixgbe_write_i2c_byte_generic");

 if (VAR_6 && VAR_2->mac.ops.acquire_swfw_sync(VAR_2, VAR_10) !=
     VAR_1)
  return VAR_0;

 do {
  FUNC_5(VAR_2);

  VAR_7 = FUNC_2(VAR_2, VAR_4);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_3(VAR_2);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_2(VAR_2, VAR_3);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_3(VAR_2);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_2(VAR_2, VAR_5);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_3(VAR_2);
  if (VAR_7 != VAR_1)
   goto fail;

  FUNC_6(VAR_2);
  if (VAR_6)
   VAR_2->mac.ops.release_swfw_sync(VAR_2, VAR_10);
  return VAR_1;

fail:
  FUNC_4(VAR_2);
  VAR_9++;
  if (VAR_9 < VAR_8)
   FUNC_1("I2C byte write error - Retrying.\n");
  else
   FUNC_1("I2C byte write error.\n");
 } while (VAR_9 < VAR_8);

 if (VAR_6)
  VAR_2->mac.ops.release_swfw_sync(VAR_2, VAR_10);

 return VAR_7;
}
