
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PTR ;



PTR
FUNC_0 (register const PTR VAR_0, int VAR_1, size_t VAR_2)
{
  const unsigned char *VAR_3 = (const unsigned char *)VAR_0;

  while (VAR_2-- > 0)
  {
    if (*VAR_3 == VAR_1)
     return (PTR)VAR_3;
    VAR_3++;
  }
  return ((void*)0);
}
