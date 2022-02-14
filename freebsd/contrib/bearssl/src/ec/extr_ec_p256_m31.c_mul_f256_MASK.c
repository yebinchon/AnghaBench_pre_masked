
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int const*,int const*) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2)
{
 uint32_t VAR_3[18];
 uint64_t VAR_4[18];
 uint64_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 FUNC_2(VAR_3, VAR_1, VAR_2);
 for (VAR_9 = 0; VAR_9 < 18; VAR_9 ++) {
  VAR_4[VAR_9] = VAR_3[VAR_9];
 }

 for (VAR_9 = 17; VAR_9 >= 9; VAR_9 --) {
  uint64_t VAR_10;

  VAR_10 = VAR_4[VAR_9];
  VAR_4[VAR_9 - 1] += FUNC_1(VAR_10, 2);
  VAR_4[VAR_9 - 2] += (VAR_10 << 28) & 0x3FFFFFFF;
  VAR_4[VAR_9 - 2] -= FUNC_1(VAR_10, 4);
  VAR_4[VAR_9 - 3] -= (VAR_10 << 26) & 0x3FFFFFFF;
  VAR_4[VAR_9 - 5] -= FUNC_1(VAR_10, 10);
  VAR_4[VAR_9 - 6] -= (VAR_10 << 20) & 0x3FFFFFFF;
  VAR_4[VAR_9 - 8] += FUNC_1(VAR_10, 16);
  VAR_4[VAR_9 - 9] += (VAR_10 << 14) & 0x3FFFFFFF;
 }
 VAR_5 = 0;
 for (VAR_9 = 0; VAR_9 < 9; VAR_9 ++) {
  VAR_6 = VAR_4[VAR_9] + VAR_5;
  VAR_0[VAR_9] = (uint32_t)VAR_6 & 0x3FFFFFFF;
  VAR_5 = FUNC_1(VAR_6, 30);
 }
 VAR_5 = FUNC_1(VAR_6, 16);
 VAR_0[8] &= 0xFFFF;
 VAR_7 = (uint32_t)VAR_5;
 VAR_0[3] -= VAR_7 << 6;
 VAR_0[6] -= (VAR_7 << 12) & 0x3FFFFFFF;
 VAR_0[7] -= FUNC_0(VAR_7, 18);
 VAR_0[7] += (VAR_7 << 14) & 0x3FFFFFFF;
 VAR_0[8] += FUNC_0(VAR_7, 16);
 VAR_8 = VAR_7 >> 31;
 VAR_0[0] -= VAR_8;
 VAR_0[3] += VAR_8 << 6;
 VAR_0[6] += VAR_8 << 12;
 VAR_0[7] -= VAR_8 << 14;
 VAR_0[8] += VAR_8 << 16;
 for (VAR_9 = 0; VAR_9 < 9; VAR_9 ++) {
  uint32_t VAR_11;

  VAR_11 = VAR_0[VAR_9] + VAR_7;
  VAR_0[VAR_9] = VAR_11 & 0x3FFFFFFF;
  VAR_7 = FUNC_0(VAR_11, 30);
 }
}
