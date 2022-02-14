
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned int*,unsigned int*) ;
 int FUNC_3 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_4 (unsigned int*,unsigned int*) ;
 int FUNC_5 (unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_0[64],const unsigned char VAR_1[32])
{
  unsigned int VAR_2[64];
  unsigned int VAR_3[64];
  unsigned int VAR_4[64];
  unsigned int VAR_5[64];
  unsigned int VAR_6[64];
  unsigned int VAR_7[64];
  unsigned int VAR_8[64];
  unsigned int VAR_9[64];
  unsigned int VAR_10[64];
  unsigned int VAR_11[64];
  unsigned int VAR_12[64];
  unsigned int VAR_13[32];
  unsigned int VAR_14[32];
  unsigned int VAR_15[32];
  unsigned int VAR_16[32];
  unsigned int VAR_17;
  unsigned int VAR_18;
  int VAR_19;

  for (VAR_17 = 0;VAR_17 < 32;++VAR_17) VAR_2[VAR_17] = VAR_0[VAR_17];
  VAR_2[32] = 1;
  for (VAR_17 = 33;VAR_17 < 64;++VAR_17) VAR_2[VAR_17] = 0;

  VAR_3[0] = 1;
  for (VAR_17 = 1;VAR_17 < 64;++VAR_17) VAR_3[VAR_17] = 0;

  for (VAR_19 = 254;VAR_19 >= 0;--VAR_19) {
    VAR_18 = VAR_1[VAR_19 / 8] >> (VAR_19 & 7);
    VAR_18 &= 1;
    FUNC_3(VAR_4,VAR_5,VAR_3,VAR_2,VAR_18);
    FUNC_0(VAR_8,VAR_4,VAR_4 + 32);
    FUNC_5(VAR_8 + 32,VAR_4,VAR_4 + 32);
    FUNC_0(VAR_9,VAR_5,VAR_5 + 32);
    FUNC_5(VAR_9 + 32,VAR_5,VAR_5 + 32);
    FUNC_4(VAR_10,VAR_8);
    FUNC_4(VAR_10 + 32,VAR_8 + 32);
    FUNC_1(VAR_11,VAR_9,VAR_8 + 32);
    FUNC_1(VAR_11 + 32,VAR_9 + 32,VAR_8);
    FUNC_0(VAR_12,VAR_11,VAR_11 + 32);
    FUNC_5(VAR_12 + 32,VAR_11,VAR_11 + 32);
    FUNC_4(VAR_13,VAR_12 + 32);
    FUNC_5(VAR_14,VAR_10,VAR_10 + 32);
    FUNC_2(VAR_15,VAR_14);
    FUNC_0(VAR_16,VAR_15,VAR_10);
    FUNC_1(VAR_6,VAR_10,VAR_10 + 32);
    FUNC_1(VAR_6 + 32,VAR_14,VAR_16);
    FUNC_4(VAR_7,VAR_12);
    FUNC_1(VAR_7 + 32,VAR_13,VAR_0);
    FUNC_3(VAR_3,VAR_2,VAR_6,VAR_7,VAR_18);
  }

  for (VAR_17 = 0;VAR_17 < 64;++VAR_17) VAR_0[VAR_17] = VAR_3[VAR_17];
}
