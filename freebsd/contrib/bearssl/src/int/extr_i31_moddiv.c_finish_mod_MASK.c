
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(uint32_t *VAR_0, size_t VAR_1, const uint32_t *VAR_2, uint32_t VAR_3)
{
 size_t VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;







 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 ++) {
  uint32_t VAR_8, VAR_9;

  VAR_8 = VAR_0[VAR_4];
  VAR_9 = VAR_2[VAR_4];
  VAR_5 = (VAR_8 - VAR_9 - VAR_5) >> 31;
 }







 VAR_6 = -VAR_3 >> 1;
 VAR_7 = -(VAR_3 | (1 - VAR_5));
 VAR_5 = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 ++) {
  uint32_t VAR_10, VAR_11;

  VAR_10 = VAR_0[VAR_4];
  VAR_11 = (VAR_2[VAR_4] ^ VAR_6) & VAR_7;
  VAR_10 = VAR_10 - VAR_11 - VAR_5;
  VAR_0[VAR_4] = VAR_10 & 0x7FFFFFFF;
  VAR_5 = VAR_10 >> 31;
 }
}
