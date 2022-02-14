
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_4__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int) ;
 int FUNC_12 (struct ixgbe_hw*,int) ;
 int FUNC_13 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_14(struct ixgbe_hw *VAR_4, u8 VAR_5,
        u8 VAR_6, u8 *VAR_7, bool VAR_8)
{
 s32 VAR_9;
 u32 VAR_10 = 10;
 u32 VAR_11 = 0;
 u32 VAR_12 = VAR_4->phy.phy_semaphore_mask;
 bool VAR_13 = 1;
 *VAR_7 = 0;

 FUNC_0("ixgbe_read_i2c_byte_generic");

 if (VAR_4->mac.type >= VAR_3)
  VAR_10 = 3;
 if (FUNC_9(VAR_4, VAR_5, VAR_6))
  VAR_10 = VAR_1;

 do {
  if (VAR_8 && VAR_4->mac.ops.acquire_swfw_sync(VAR_4, VAR_12))
   return VAR_0;

  FUNC_7(VAR_4);


  VAR_9 = FUNC_4(VAR_4, VAR_6);
  if (VAR_9 != VAR_2)
   goto fail;

  VAR_9 = FUNC_5(VAR_4);
  if (VAR_9 != VAR_2)
   goto fail;

  VAR_9 = FUNC_4(VAR_4, VAR_5);
  if (VAR_9 != VAR_2)
   goto fail;

  VAR_9 = FUNC_5(VAR_4);
  if (VAR_9 != VAR_2)
   goto fail;

  FUNC_7(VAR_4);


  VAR_9 = FUNC_4(VAR_4, (VAR_6 | 0x1));
  if (VAR_9 != VAR_2)
   goto fail;

  VAR_9 = FUNC_5(VAR_4);
  if (VAR_9 != VAR_2)
   goto fail;

  VAR_9 = FUNC_2(VAR_4, VAR_7);
  if (VAR_9 != VAR_2)
   goto fail;

  VAR_9 = FUNC_3(VAR_4, VAR_13);
  if (VAR_9 != VAR_2)
   goto fail;

  FUNC_8(VAR_4);
  if (VAR_8)
   VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_12);
  return VAR_2;

fail:
  FUNC_6(VAR_4);
  if (VAR_8) {
   VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_12);
   FUNC_10(100);
  }
  VAR_11++;
  if (VAR_11 < VAR_10)
   FUNC_1("I2C byte read error - Retrying.\n");
  else
   FUNC_1("I2C byte read error.\n");

 } while (VAR_11 < VAR_10);

 return VAR_9;
}
