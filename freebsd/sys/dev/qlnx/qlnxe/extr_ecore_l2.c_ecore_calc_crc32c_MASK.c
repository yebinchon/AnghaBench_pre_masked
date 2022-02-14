
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u8 *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0, VAR_7 = VAR_4;
 u8 VAR_8 = 0, VAR_9 = 0;

 if ((VAR_2 == VAR_1) ||
     (VAR_3 == 0) ||
     ((VAR_3 % 8) != 0)) {
  return VAR_7;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_9 = VAR_2[VAR_5];
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   VAR_8 = (u8)(VAR_7 >> 31);
   VAR_7 = VAR_7 << 1;
   if (VAR_8 != (0x1 & (VAR_9 >> VAR_6))) {
    VAR_7 = VAR_7 ^ VAR_0;
    VAR_7 |= 1;
   }
  }
 }

 return VAR_7;
}
