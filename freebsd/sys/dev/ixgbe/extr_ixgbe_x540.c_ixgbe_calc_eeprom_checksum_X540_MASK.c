
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ word_size; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_7)
{
 u16 VAR_8, VAR_9;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = VAR_5;






 FUNC_0("ixgbe_calc_eeprom_checksum_X540");




 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (FUNC_2(VAR_7, VAR_8, &VAR_13)) {
   FUNC_1("EEPROM read failed\n");
   return VAR_2;
  }
  VAR_10 += VAR_13;
 }




 for (VAR_8 = VAR_14; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_8 == VAR_6 || VAR_8 == VAR_4)
   continue;

  if (FUNC_2(VAR_7, VAR_8, &VAR_12)) {
   FUNC_1("EEPROM read failed\n");
   return VAR_2;
  }


  if (VAR_12 == 0xFFFF || VAR_12 == 0 ||
      VAR_12 >= VAR_7->eeprom.word_size)
   continue;

  if (FUNC_2(VAR_7, VAR_12, &VAR_11)) {
   FUNC_1("EEPROM read failed\n");
   return VAR_2;
  }


  if (VAR_11 == 0xFFFF || VAR_11 == 0 ||
      (VAR_12 + VAR_11) >= VAR_7->eeprom.word_size)
   continue;

  for (VAR_9 = VAR_12 + 1; VAR_9 <= VAR_12 + VAR_11; VAR_9++) {
   if (FUNC_2(VAR_7, VAR_9, &VAR_13)) {
    FUNC_1("EEPROM read failed\n");
    return VAR_2;
   }
   VAR_10 += VAR_13;
  }
 }

 VAR_10 = (u16)VAR_1 - VAR_10;

 return (s32)VAR_10;
}
