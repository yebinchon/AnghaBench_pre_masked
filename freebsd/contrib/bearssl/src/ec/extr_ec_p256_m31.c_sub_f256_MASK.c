
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int const FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2)
{
 uint32_t VAR_3, VAR_4;
 int VAR_5;





 VAR_3 = VAR_1[0] - VAR_2[0] - 0x00002;
 VAR_0[0] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[1] - VAR_2[1] + FUNC_0(VAR_3, 30);
 VAR_0[1] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[2] - VAR_2[2] + FUNC_0(VAR_3, 30);
 VAR_0[2] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[3] - VAR_2[3] + FUNC_0(VAR_3, 30) + 0x00080;
 VAR_0[3] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[4] - VAR_2[4] + FUNC_0(VAR_3, 30);
 VAR_0[4] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[5] - VAR_2[5] + FUNC_0(VAR_3, 30);
 VAR_0[5] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[6] - VAR_2[6] + FUNC_0(VAR_3, 30) + 0x02000;
 VAR_0[6] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[7] - VAR_2[7] + FUNC_0(VAR_3, 30) - 0x08000;
 VAR_0[7] = VAR_3 & 0x3FFFFFFF;
 VAR_3 = VAR_1[8] - VAR_2[8] + FUNC_0(VAR_3, 30) + 0x20000;
 VAR_0[8] = VAR_3 & 0xFFFF;
 VAR_3 >>= 16;
 VAR_0[8] &= 0xFFFF;
 VAR_0[3] -= VAR_3 << 6;
 VAR_0[6] -= VAR_3 << 12;
 VAR_0[7] += VAR_3 << 14;
 VAR_4 = VAR_3;
 for (VAR_5 = 0; VAR_5 < 9; VAR_5 ++) {
  VAR_3 = VAR_0[VAR_5] + VAR_4;
  VAR_0[VAR_5] = VAR_3 & 0x3FFFFFFF;
  VAR_4 = FUNC_0(VAR_3, 30);
 }
}
