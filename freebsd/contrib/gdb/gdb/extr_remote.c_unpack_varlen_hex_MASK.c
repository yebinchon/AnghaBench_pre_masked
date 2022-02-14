
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;


 scalar_t__ FUNC_0 (char,int*) ;

char *
FUNC_1 (char *VAR_0,
     ULONGEST *VAR_1)
{
  int VAR_2;
  int VAR_3 = 0;

  while (FUNC_0 (*VAR_0, &VAR_2))
    {
      VAR_0++;
      VAR_3 = VAR_3 << 4;
      VAR_3 |= VAR_2 & 0x0f;
    }
  *VAR_1 = VAR_3;
  return VAR_0;
}
