
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,size_t,size_t) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;

s32 FUNC_5(struct ixgbe_hw *VAR_2,
          u16 VAR_3, u16 VAR_4, u16 *VAR_5)
{
 s32 VAR_6 = VAR_1;
 u32 VAR_7 = 0;

 FUNC_0("ixgbe_write_ee_hostif_buffer_X550");


 VAR_6 = VAR_2->mac.ops.acquire_swfw_sync(VAR_2, VAR_0);
 if (VAR_6 != VAR_1) {
  FUNC_1("EEPROM write buffer - semaphore failed\n");
  goto out;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_2(VAR_2, VAR_3 + VAR_7,
        VAR_5[VAR_7]);

  if (VAR_6 != VAR_1) {
   FUNC_1("Eeprom buffered write failed\n");
   break;
  }
 }

 VAR_2->mac.ops.release_swfw_sync(VAR_2, VAR_0);
out:

 return VAR_6;
}
