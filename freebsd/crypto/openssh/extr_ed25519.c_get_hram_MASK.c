
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned long long) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, const unsigned char *VAR_1, const unsigned char *VAR_2, unsigned char *VAR_3, unsigned long long VAR_4)
{
  unsigned long long VAR_5;

  for (VAR_5 = 0;VAR_5 < 32;++VAR_5) VAR_3[VAR_5] = VAR_1[VAR_5];
  for (VAR_5 = 32;VAR_5 < 64;++VAR_5) VAR_3[VAR_5] = VAR_2[VAR_5-32];
  for (VAR_5 = 64;VAR_5 < VAR_4;++VAR_5) VAR_3[VAR_5] = VAR_1[VAR_5];

  FUNC_0(VAR_0,VAR_3,VAR_4);
}
