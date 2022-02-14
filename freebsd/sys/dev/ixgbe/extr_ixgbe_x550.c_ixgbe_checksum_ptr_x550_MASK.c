
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ word_size; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;
typedef int buf ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_2, u16 VAR_3,
       u16 VAR_4, u16 *VAR_5, u16 *VAR_6,
       u32 VAR_7)
{
 u16 VAR_8[256];
 s32 VAR_9;
 u16 VAR_10, VAR_11, VAR_12, VAR_13;
 u16 *VAR_14;

 VAR_11 = sizeof(VAR_8) / sizeof(VAR_8[0]);


 if (!VAR_6) {
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_11, VAR_8);
  if (VAR_9) {
   FUNC_0("Failed to read EEPROM image\n");
   return VAR_9;
  }
  VAR_14 = VAR_8;
 } else {
  if (VAR_7 < VAR_3)
   return VAR_0;
  VAR_14 = &VAR_6[VAR_3];
 }

 if (VAR_4) {
  VAR_13 = 0;
  VAR_10 = VAR_4;
 } else {
  VAR_13 = 1;
  VAR_10 = VAR_14[0];


  if (VAR_10 == 0xFFFF || VAR_10 == 0 ||
      (VAR_3 + VAR_10) >= VAR_2->eeprom.word_size)
   return VAR_1;
 }

 if (VAR_6 && ((u32)VAR_13 + (u32)VAR_10 > VAR_7))
  return VAR_0;

 for (VAR_12 = VAR_13; VAR_10; VAR_12++, VAR_10--) {
  if (VAR_12 == VAR_11 && !VAR_6) {
   VAR_3 += VAR_11;
   VAR_12 = 0;
   if (VAR_10 < VAR_11)
    VAR_11 = VAR_10;


   VAR_9 = FUNC_1(VAR_2, VAR_3,
          VAR_11, VAR_8);
   if (VAR_9) {
    FUNC_0("Failed to read EEPROM image\n");
    return VAR_9;
   }
  }
  *VAR_5 += VAR_14[VAR_12];
 }
 return VAR_1;
}
