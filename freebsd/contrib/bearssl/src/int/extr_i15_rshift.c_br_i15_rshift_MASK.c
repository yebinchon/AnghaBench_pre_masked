
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



void
FUNC_0(uint16_t *VAR_0, int VAR_1)
{
 size_t VAR_2, VAR_3;
 unsigned VAR_4;

 VAR_3 = (VAR_0[0] + 15) >> 4;
 if (VAR_3 == 0) {
  return;
 }
 VAR_4 = VAR_0[1] >> VAR_1;
 for (VAR_2 = 2; VAR_2 <= VAR_3; VAR_2 ++) {
  unsigned VAR_5;

  VAR_5 = VAR_0[VAR_2];
  VAR_0[VAR_2 - 1] = ((VAR_5 << (15 - VAR_1)) | VAR_4) & 0x7FFF;
  VAR_4 = VAR_5 >> VAR_1;
 }
 VAR_0[VAR_3] = VAR_4;
}
