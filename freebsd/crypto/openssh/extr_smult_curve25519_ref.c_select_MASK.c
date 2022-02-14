
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0[64],unsigned int VAR_1[64],const unsigned int VAR_2[64],const unsigned int VAR_3[64],unsigned int VAR_4)
{
  unsigned int VAR_5;
  unsigned int VAR_6;
  unsigned int VAR_7;

  VAR_7 = VAR_4 - 1;
  for (VAR_5 = 0;VAR_5 < 64;++VAR_5) {
    VAR_6 = VAR_7 & (VAR_2[VAR_5] ^ VAR_3[VAR_5]);
    VAR_0[VAR_5] = VAR_3[VAR_5] ^ VAR_6;
    VAR_1[VAR_5] = VAR_2[VAR_5] ^ VAR_6;
  }
}
