
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0[32],const unsigned int VAR_1[32])
{
  unsigned int VAR_2;
  unsigned int VAR_3;

  VAR_3 = 0;
  for (VAR_2 = 0;VAR_2 < 31;++VAR_2) { VAR_3 += 121665 * VAR_1[VAR_2]; VAR_0[VAR_2] = VAR_3 & 255; VAR_3 >>= 8; }
  VAR_3 += 121665 * VAR_1[31]; VAR_0[31] = VAR_3 & 127;
  VAR_3 = 19 * (VAR_3 >> 7);
  for (VAR_2 = 0;VAR_2 < 31;++VAR_2) { VAR_3 += VAR_0[VAR_2]; VAR_0[VAR_2] = VAR_3 & 255; VAR_3 >>= 8; }
  VAR_3 += VAR_0[VAR_2]; VAR_0[VAR_2] = VAR_3;
}
