
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t **VAR_0, int *VAR_1, uint32_t VAR_2, int VAR_3)
{
 uint8_t *VAR_4 = *VAR_0;
 int VAR_5 = *VAR_1;

 FUNC_0(VAR_3 > 0);
 FUNC_0(VAR_3 <= 32);
 FUNC_0(*VAR_1 >= 0);
 FUNC_0(*VAR_1 < 8);
 FUNC_0((VAR_2 >> VAR_3) == 0 || VAR_3 == 32);
 if (VAR_5) {
  *VAR_4 |= ((uint8_t)VAR_2) << VAR_5;
  VAR_3 += VAR_5;
  if (VAR_3 > 8) {
   *++VAR_4 = (uint8_t)(VAR_2 >>= (8 - VAR_5));
   if (VAR_3 > 16) {
    *++VAR_4 = (uint8_t)(VAR_2 >>= 8);
    if (VAR_3 > 24) {
     *++VAR_4 = (uint8_t)(VAR_2 >>= 8);
     if (VAR_3 > 32)
      *++VAR_4 = (uint8_t)(VAR_2 >>= 8);
    }
   }
  }
 } else {
  *VAR_4 = (uint8_t)VAR_2;
  if (VAR_3 > 8) {
   *++VAR_4 = (uint8_t)(VAR_2 >>= 8);
   if (VAR_3 > 16) {
    *++VAR_4 = (uint8_t)(VAR_2 >>= 8);
    if (VAR_3 > 24)
     *++VAR_4 = (uint8_t)(VAR_2 >>= 8);
   }
  }
 }
 VAR_5 = VAR_3 & 7;
 if (VAR_5 == 0)
  VAR_4++;
 *VAR_0 = VAR_4;
 *VAR_1 = VAR_5;
}
