
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PTR ;



PTR
FUNC_0 (PTR VAR_0, register int VAR_1, register size_t VAR_2)
{
  register unsigned char *VAR_3 = (unsigned char*)VAR_0;
  while (VAR_2-- > 0)
    *VAR_3++ = VAR_1;
  return VAR_0;
}
