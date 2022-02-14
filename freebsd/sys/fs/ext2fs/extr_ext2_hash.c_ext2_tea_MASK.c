
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(uint32_t VAR_0[4], uint32_t VAR_1[8])
{
 uint32_t VAR_2 = 0x9E3779B9;
 uint32_t VAR_3;
 uint32_t VAR_4 = VAR_0[0], VAR_5 = VAR_0[1];
 int VAR_6 = 16;
 int VAR_7 = 1;

 while (VAR_6-- > 0) {
  VAR_3 = VAR_7 * VAR_2;
  VAR_4 += ((VAR_5 << 4) + VAR_1[0]) ^ (VAR_5 + VAR_3) ^ ((VAR_5 >> 5) + VAR_1[1]);
  VAR_5 += ((VAR_4 << 4) + VAR_1[2]) ^ (VAR_4 + VAR_3) ^ ((VAR_4 >> 5) + VAR_1[3]);
  VAR_7++;
 }

 VAR_0[0] += VAR_4;
 VAR_0[1] += VAR_5;
}
