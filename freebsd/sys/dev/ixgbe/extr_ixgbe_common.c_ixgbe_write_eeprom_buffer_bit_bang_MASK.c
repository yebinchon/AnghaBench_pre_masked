
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int address_bits; int word_page_size; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_6, u16 VAR_7,
           u16 VAR_8, u16 *VAR_9)
{
 s32 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u8 VAR_14 = VAR_3;

 FUNC_0("ixgbe_write_eeprom_buffer_bit_bang");


 VAR_10 = FUNC_1(VAR_6);

 if (VAR_10 == VAR_5) {
  if (FUNC_2(VAR_6) != VAR_5) {
   FUNC_3(VAR_6);
   VAR_10 = VAR_4;
  }
 }

 if (VAR_10 == VAR_5) {
  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
   FUNC_5(VAR_6);


   FUNC_4(VAR_6,
         VAR_2,
         VAR_1);

   FUNC_5(VAR_6);





   if ((VAR_6->eeprom.address_bits == 8) &&
       ((VAR_7 + VAR_13) >= 128))
    VAR_14 |= VAR_0;


   FUNC_4(VAR_6, VAR_14,
          VAR_1);
   FUNC_4(VAR_6, (u16)((VAR_7 + VAR_13) * 2),
          VAR_6->eeprom.address_bits);

   VAR_12 = VAR_6->eeprom.word_page_size;


   do {
    VAR_11 = VAR_9[VAR_13];
    VAR_11 = (VAR_11 >> 8) | (VAR_11 << 8);
    FUNC_4(VAR_6, VAR_11, 16);

    if (VAR_12 == 0)
     break;


    if (((VAR_7 + VAR_13) & (VAR_12 - 1)) ==
        (VAR_12 - 1))
     break;
   } while (++VAR_13 < VAR_8);

   FUNC_5(VAR_6);
   FUNC_6(10);
  }

  FUNC_3(VAR_6);
 }

 return VAR_10;
}
