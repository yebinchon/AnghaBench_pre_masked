
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0 (const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
  const unsigned char *VAR_3 = VAR_0;
  const unsigned char *VAR_4 = VAR_1;

  while (VAR_2-- > 0)
    {
      if (*VAR_3++ != *VAR_4++)
   return VAR_3[-1] < VAR_4[-1] ? -1 : 1;
    }
  return 0;
}
