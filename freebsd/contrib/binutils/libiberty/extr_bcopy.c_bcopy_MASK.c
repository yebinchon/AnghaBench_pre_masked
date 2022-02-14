
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0 (const void *VAR_0, void *VAR_1, size_t VAR_2)
{
  if (VAR_1 < VAR_0)
    {
      const char *VAR_3 = (const char *) VAR_0;
      char *VAR_4 = (char *) VAR_1;
      while (VAR_2--)
 *VAR_4++ = *VAR_3++;
    }
  else
    {
      const char *VAR_5 = (const char *)VAR_0 + (VAR_2-1);
      char *VAR_6 = (char *)VAR_1 + (VAR_2-1);
      while (VAR_2--)
        *VAR_6-- = *VAR_5--;
    }
}
