
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int address_bits; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;
 int FUNC_5 (struct ixgbe_hw*,int,int) ;
 int FUNC_6 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_5, u16 VAR_6,
          u16 VAR_7, u16 *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;
 u8 VAR_11 = VAR_2;
 u16 VAR_12;

 FUNC_0("ixgbe_read_eeprom_buffer_bit_bang");


 VAR_9 = FUNC_1(VAR_5);

 if (VAR_9 == VAR_4) {
  if (FUNC_2(VAR_5) != VAR_4) {
   FUNC_3(VAR_5);
   VAR_9 = VAR_3;
  }
 }

 if (VAR_9 == VAR_4) {
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   FUNC_6(VAR_5);




   if ((VAR_5->eeprom.address_bits == 8) &&
       ((VAR_6 + VAR_12) >= 128))
    VAR_11 |= VAR_0;


   FUNC_5(VAR_5, VAR_11,
          VAR_1);
   FUNC_5(VAR_5, (u16)((VAR_6 + VAR_12) * 2),
          VAR_5->eeprom.address_bits);


   VAR_10 = FUNC_4(VAR_5, 16);
   VAR_8[VAR_12] = (VAR_10 >> 8) | (VAR_10 << 8);
  }


  FUNC_3(VAR_5);
 }

 return VAR_9;
}
