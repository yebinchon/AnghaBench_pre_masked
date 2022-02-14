
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
 uint32_t VAR_3;
 size_t VAR_4;





 if (VAR_2 == 1) {
  VAR_3 = VAR_1[0] >> 5;
  VAR_0[0] = (VAR_1[0] << 3) | VAR_3;
  return;
 }

 VAR_3 = ((VAR_1[VAR_2 - 2] & 31) << 8) | VAR_1[VAR_2 - 1];
 for (VAR_4 = 2; VAR_4 < VAR_2; VAR_4++) {
  VAR_0[VAR_4] = ((VAR_1[VAR_4 - 2] & 31) << 3) | (VAR_1[VAR_4 - 1] >> 5);
 }
 VAR_0[1] = ((VAR_3 & 31) << 3) | (VAR_1[0] >> 5);
 VAR_0[0] = VAR_3 >> 5;
}
