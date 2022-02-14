
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;

s32 FUNC_6(struct ixgbe_hw *VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;

 FUNC_0("ixgbe_calc_eeprom_checksum_generic");


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5->eeprom.ops.read(VAR_5, VAR_6, &VAR_11)) {
   FUNC_1("EEPROM read failed\n");
   return VAR_2;
  }
  VAR_8 += VAR_11;
 }


 for (VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_5->eeprom.ops.read(VAR_5, VAR_6, &VAR_10)) {
   FUNC_1("EEPROM read failed\n");
   return VAR_2;
  }


  if (VAR_10 == 0xFFFF || VAR_10 == 0)
   continue;

  if (VAR_5->eeprom.ops.read(VAR_5, VAR_10, &VAR_9)) {
   FUNC_1("EEPROM read failed\n");
   return VAR_2;
  }

  if (VAR_9 == 0xFFFF || VAR_9 == 0)
   continue;

  for (VAR_7 = VAR_10 + 1; VAR_7 <= VAR_10 + VAR_9; VAR_7++) {
   if (VAR_5->eeprom.ops.read(VAR_5, VAR_7, &VAR_11)) {
    FUNC_1("EEPROM read failed\n");
    return VAR_2;
   }
   VAR_8 += VAR_11;
  }
 }

 VAR_8 = (u16)VAR_1 - VAR_8;

 return (s32)VAR_8;
}
