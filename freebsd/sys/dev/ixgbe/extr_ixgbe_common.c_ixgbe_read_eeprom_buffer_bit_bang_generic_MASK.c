
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_3__ {scalar_t__ word_size; TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct ixgbe_hw*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_4, u16 VAR_5,
           u16 VAR_6, u16 *VAR_7)
{
 s32 VAR_8 = VAR_3;
 u16 VAR_9, VAR_10;

 FUNC_0("ixgbe_read_eeprom_buffer_bit_bang_generic");

 VAR_4->eeprom.ops.init_params(VAR_4);

 if (VAR_6 == 0) {
  VAR_8 = VAR_2;
  goto out;
 }

 if (VAR_5 + VAR_6 > VAR_4->eeprom.word_size) {
  VAR_8 = VAR_1;
  goto out;
 }






 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += VAR_0) {
  VAR_10 = (VAR_6 - VAR_9) / VAR_0 > 0 ?
   VAR_0 : (VAR_6 - VAR_9);

  VAR_8 = FUNC_1(VAR_4, VAR_5 + VAR_9,
          VAR_10, &VAR_7[VAR_9]);

  if (VAR_8 != VAR_3)
   break;
 }

out:
 return VAR_8;
}
