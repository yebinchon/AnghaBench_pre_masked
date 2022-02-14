
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int semaphore_delay; } ;
struct TYPE_6__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct TYPE_5__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_4__ eeprom; TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ) ;
 int FUNC_10 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static void FUNC_11(struct ixgbe_hw *VAR_8)
{
 s32 VAR_9 = VAR_7;
 u32 VAR_10 = VAR_8->phy.phy_semaphore_mask;
 u16 VAR_11 = 0;
 u8 VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_9 = VAR_8->mac.ops.acquire_swfw_sync(VAR_8, VAR_10);
  if (VAR_9 != VAR_7) {
   FUNC_0(VAR_5,
    "semaphore failed with %d", VAR_9);
   FUNC_4(VAR_0);
   continue;
  }


  VAR_9 = FUNC_1(VAR_8, VAR_4, &VAR_11);

  if (VAR_9 == VAR_7 &&
      VAR_11 == VAR_1)
   goto out;

  if (VAR_9 != VAR_7 ||
      VAR_11 != VAR_2)
   break;


  VAR_8->mac.ops.release_swfw_sync(VAR_8, VAR_10);
  FUNC_4(VAR_0);
 }


 if (VAR_12 == VAR_3) {
  VAR_9 = VAR_8->mac.ops.acquire_swfw_sync(VAR_8, VAR_10);
  if (VAR_9 != VAR_7) {
   FUNC_0(VAR_5,
          "semaphore failed with %d", VAR_9);
   return;
  }
 }


 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 != VAR_7) {
  FUNC_0(VAR_6,
   "CS4227 reset failed: %d", VAR_9);
  goto out;
 }




 FUNC_3(VAR_8, VAR_4,
      VAR_2);
 VAR_8->mac.ops.release_swfw_sync(VAR_8, VAR_10);
 FUNC_4(10);
 VAR_9 = VAR_8->mac.ops.acquire_swfw_sync(VAR_8, VAR_10);
 if (VAR_9 != VAR_7) {
  FUNC_0(VAR_5,
   "semaphore failed with %d", VAR_9);
  return;
 }


 VAR_9 = FUNC_3(VAR_8, VAR_4,
  VAR_1);

out:
 VAR_8->mac.ops.release_swfw_sync(VAR_8, VAR_10);
 FUNC_4(VAR_8->eeprom.semaphore_delay);
}
