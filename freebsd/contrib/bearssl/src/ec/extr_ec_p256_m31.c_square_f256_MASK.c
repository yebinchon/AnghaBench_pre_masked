
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int const*) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_0, const uint32_t *VAR_1)
{
 uint32_t VAR_2[18];
 uint64_t VAR_3[18];
 uint64_t VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(VAR_2, VAR_1);
 for (VAR_8 = 0; VAR_8 < 18; VAR_8 ++) {
  VAR_3[VAR_8] = VAR_2[VAR_8];
 }

 for (VAR_8 = 17; VAR_8 >= 9; VAR_8 --) {
  uint64_t VAR_9;

  VAR_9 = VAR_3[VAR_8];
  VAR_3[VAR_8 - 1] += FUNC_1(VAR_9, 2);
  VAR_3[VAR_8 - 2] += (VAR_9 << 28) & 0x3FFFFFFF;
  VAR_3[VAR_8 - 2] -= FUNC_1(VAR_9, 4);
  VAR_3[VAR_8 - 3] -= (VAR_9 << 26) & 0x3FFFFFFF;
  VAR_3[VAR_8 - 5] -= FUNC_1(VAR_9, 10);
  VAR_3[VAR_8 - 6] -= (VAR_9 << 20) & 0x3FFFFFFF;
  VAR_3[VAR_8 - 8] += FUNC_1(VAR_9, 16);
  VAR_3[VAR_8 - 9] += (VAR_9 << 14) & 0x3FFFFFFF;
 }
 VAR_4 = 0;
 for (VAR_8 = 0; VAR_8 < 9; VAR_8 ++) {
  VAR_5 = VAR_3[VAR_8] + VAR_4;
  VAR_0[VAR_8] = (uint32_t)VAR_5 & 0x3FFFFFFF;
  VAR_4 = FUNC_1(VAR_5, 30);
 }
 VAR_4 = FUNC_1(VAR_5, 16);
 VAR_0[8] &= 0xFFFF;
 VAR_6 = (uint32_t)VAR_4;
 VAR_0[3] -= VAR_6 << 6;
 VAR_0[6] -= (VAR_6 << 12) & 0x3FFFFFFF;
 VAR_0[7] -= FUNC_0(VAR_6, 18);
 VAR_0[7] += (VAR_6 << 14) & 0x3FFFFFFF;
 VAR_0[8] += FUNC_0(VAR_6, 16);
 VAR_7 = VAR_6 >> 31;
 VAR_0[0] -= VAR_7;
 VAR_0[3] += VAR_7 << 6;
 VAR_0[6] += VAR_7 << 12;
 VAR_0[7] -= VAR_7 << 14;
 VAR_0[8] += VAR_7 << 16;
 for (VAR_8 = 0; VAR_8 < 9; VAR_8 ++) {
  uint32_t VAR_10;

  VAR_10 = VAR_0[VAR_8] + VAR_6;
  VAR_0[VAR_8] = VAR_10 & 0x3FFFFFFF;
  VAR_6 = FUNC_0(VAR_10, 30);
 }
}
