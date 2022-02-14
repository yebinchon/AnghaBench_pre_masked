
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (void *VAR_0, const void *VAR_1, int VAR_2)
{
  long long *VAR_3 = (long long*)VAR_0;
  const long long *VAR_4 = (const long long*)VAR_1;
  int VAR_5;
  if (VAR_2 == 40)
  {
    long long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    VAR_6 = VAR_4[0];
    VAR_7 = VAR_4[1];
    VAR_8 = VAR_4[2];
    VAR_9 = VAR_4[3];
    VAR_10 = VAR_4[4];
    VAR_3[0] = VAR_6;
    VAR_3[1] = VAR_7;
    VAR_3[2] = VAR_8;
    VAR_3[3] = VAR_9;
    VAR_3[4] = VAR_10;
    return;
  }
  for(VAR_5 = 0;VAR_5 < VAR_2;VAR_5+=8)
  {
    *VAR_3 = *VAR_4;
    VAR_3++;
    VAR_4++;
  }
}
