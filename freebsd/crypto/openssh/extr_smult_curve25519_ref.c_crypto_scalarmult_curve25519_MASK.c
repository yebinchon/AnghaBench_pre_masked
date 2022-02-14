
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (unsigned int*,unsigned char*) ;
 int FUNC_2 (unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (unsigned int*,unsigned int*) ;

int FUNC_4(unsigned char *VAR_0,
  const unsigned char *VAR_1,
  const unsigned char *VAR_2)
{
  unsigned int VAR_3[96];
  unsigned char VAR_4[32];
  unsigned int VAR_5;
  for (VAR_5 = 0;VAR_5 < 32;++VAR_5) VAR_4[VAR_5] = VAR_1[VAR_5];
  VAR_4[0] &= 248;
  VAR_4[31] &= 127;
  VAR_4[31] |= 64;
  for (VAR_5 = 0;VAR_5 < 32;++VAR_5) VAR_3[VAR_5] = VAR_2[VAR_5];
  FUNC_1(VAR_3,VAR_4);
  FUNC_3(VAR_3 + 32,VAR_3 + 32);
  FUNC_2(VAR_3 + 64,VAR_3,VAR_3 + 32);
  FUNC_0(VAR_3 + 64);
  for (VAR_5 = 0;VAR_5 < 32;++VAR_5) VAR_0[VAR_5] = VAR_3[64 + VAR_5];
  return 0;
}
