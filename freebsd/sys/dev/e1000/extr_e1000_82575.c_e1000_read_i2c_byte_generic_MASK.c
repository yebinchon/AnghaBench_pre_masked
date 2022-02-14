
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
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ) ;
 int FUNC_11 (struct e1000_hw*,int ) ;
 int FUNC_12 (struct e1000_hw*,int ) ;

s32 FUNC_13(struct e1000_hw *VAR_4, u8 VAR_5,
    u8 VAR_6, u8 *VAR_7)
{
 s32 VAR_8 = VAR_1;
 u32 VAR_9 = 10;
 u32 VAR_10 = 1;
 u16 VAR_11 = 0;

 bool VAR_12 = VAR_3;

 FUNC_0("e1000_read_i2c_byte_generic");

 VAR_11 = VAR_2;

 do {
  if (VAR_4->mac.ops.acquire_swfw_sync(VAR_4, VAR_11)
      != VAR_1) {
   VAR_8 = VAR_0;
   goto read_byte_out;
  }

  FUNC_7(VAR_4);


  VAR_8 = FUNC_4(VAR_4, VAR_6);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_5(VAR_4);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_4(VAR_4, VAR_5);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_5(VAR_4);
  if (VAR_8 != VAR_1)
   goto fail;

  FUNC_7(VAR_4);


  VAR_8 = FUNC_4(VAR_4, (VAR_6 | 0x1));
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_5(VAR_4);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_2(VAR_4, VAR_7);
  if (VAR_8 != VAR_1)
   goto fail;

  VAR_8 = FUNC_3(VAR_4, VAR_12);
  if (VAR_8 != VAR_1)
   goto fail;

  FUNC_8(VAR_4);
  break;

fail:
  VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_11);
  FUNC_9(100);
  FUNC_6(VAR_4);
  VAR_10++;
  if (VAR_10 < VAR_9)
   FUNC_1("I2C byte read error - Retrying.\n");
  else
   FUNC_1("I2C byte read error.\n");

 } while (VAR_10 < VAR_9);

 VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_11);

read_byte_out:

 return VAR_8;
}
