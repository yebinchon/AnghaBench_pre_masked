
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PTR ;



int
FUNC_0 (const PTR VAR_0, const PTR VAR_1, size_t VAR_2)
{
  register const unsigned char *VAR_3 = (const unsigned char*)VAR_0;
  register const unsigned char *VAR_4 = (const unsigned char*)VAR_1;

  while (VAR_2-- > 0)
    {
      if (*VAR_3++ != *VAR_4++)
   return VAR_3[-1] < VAR_4[-1] ? -1 : 1;
    }
  return 0;
}
