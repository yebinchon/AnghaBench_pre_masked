
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1, register size_t VAR_2)
{
  register unsigned char VAR_3, VAR_4;

  while (VAR_2-- > 0)
    {
      VAR_3 = (unsigned char) *VAR_0++;
      VAR_4 = (unsigned char) *VAR_1++;
      if (VAR_3 != VAR_4)
 return VAR_3 - VAR_4;
      if (VAR_3 == '\0')
 return 0;
    }
  return 0;
}
