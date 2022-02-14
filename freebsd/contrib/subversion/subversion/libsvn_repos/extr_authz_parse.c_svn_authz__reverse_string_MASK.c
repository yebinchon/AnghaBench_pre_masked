
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;



void
FUNC_0(char *VAR_0, apr_size_t VAR_1)
{
  char *VAR_2 = VAR_0;
  char *VAR_3 = VAR_0 + VAR_1 - 1;
  for (; VAR_2 < VAR_3; ++VAR_2, --VAR_3)
    {
      char VAR_4 = *VAR_2;
      *VAR_2 = *VAR_3;
      *VAR_3 = VAR_4;
    }
}
