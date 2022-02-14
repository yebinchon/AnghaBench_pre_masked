
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {scalar_t__ word_size; scalar_t__ word_page_size; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct ixgbe_hw*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5, u16 VAR_6,
            u16 VAR_7, u16 *VAR_8)
{
 s32 VAR_9 = VAR_4;
 u16 VAR_10, VAR_11;

 FUNC_0("ixgbe_write_eeprom_buffer_bit_bang_generic");

 VAR_5->eeprom.ops.init_params(VAR_5);

 if (VAR_7 == 0) {
  VAR_9 = VAR_3;
  goto out;
 }

 if (VAR_6 + VAR_7 > VAR_5->eeprom.word_size) {
  VAR_9 = VAR_2;
  goto out;
 }





 if ((VAR_5->eeprom.word_page_size == 0) &&
     (VAR_7 > VAR_0))
  FUNC_1(VAR_5, VAR_6);






 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += VAR_1) {
  VAR_11 = (VAR_7 - VAR_10) / VAR_1 > 0 ?
   VAR_1 : (VAR_7 - VAR_10);
  VAR_9 = FUNC_2(VAR_5, VAR_6 + VAR_10,
           VAR_11, &VAR_8[VAR_10]);

  if (VAR_9 != VAR_4)
   break;
 }

out:
 return VAR_9;
}
