
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0[32],const unsigned int VAR_1[32],const unsigned int VAR_2[32])
{
  unsigned int VAR_3;
  unsigned int VAR_4;
  VAR_4 = 0;
  for (VAR_3 = 0;VAR_3 < 31;++VAR_3) { VAR_4 += VAR_1[VAR_3] + VAR_2[VAR_3]; VAR_0[VAR_3] = VAR_4 & 255; VAR_4 >>= 8; }
  VAR_4 += VAR_1[31] + VAR_2[31]; VAR_0[31] = VAR_4;
}
