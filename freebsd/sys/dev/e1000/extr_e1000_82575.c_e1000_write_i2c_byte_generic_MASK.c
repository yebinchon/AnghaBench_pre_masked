
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct e1000_hw*,int ) ;int (* release_swfw_sync ) (struct e1000_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ) ;
 int FUNC_8 (struct e1000_hw*,int ) ;

s32 FUNC_9(struct e1000_hw *VAR_3, u8 VAR_4,
     u8 VAR_5, u8 VAR_6)
{
 s32 VAR_7 = VAR_1;
 u32 VAR_8 = 1;
 u32 VAR_9 = 0;
 u16 VAR_10 = 0;

 FUNC_0("e1000_write_i2c_byte_generic");

 VAR_10 = VAR_2;

 if (VAR_3->mac.ops.acquire_swfw_sync(VAR_3, VAR_10) != VAR_1) {
  VAR_7 = VAR_0;
  goto write_byte_out;
 }

 do {
  FUNC_5(VAR_3);

  VAR_7 = FUNC_2(VAR_3, VAR_5);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_2(VAR_3, VAR_4);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_2(VAR_3, VAR_6);
  if (VAR_7 != VAR_1)
   goto fail;

  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7 != VAR_1)
   goto fail;

  FUNC_6(VAR_3);
  break;

fail:
  FUNC_4(VAR_3);
  VAR_9++;
  if (VAR_9 < VAR_8)
   FUNC_1("I2C byte write error - Retrying.\n");
  else
   FUNC_1("I2C byte write error.\n");
 } while (VAR_9 < VAR_8);

 VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_10);

write_byte_out:

 return VAR_7;
}
