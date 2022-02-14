
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *
FUNC_0 (void *VAR_0, const void *VAR_1, size_t VAR_2)
{
  char *VAR_3 = VAR_0;
  const char *VAR_4 = VAR_1;
  if (VAR_3 < VAR_4)
    while (VAR_2--)
      *VAR_3++ = *VAR_4++;
  else
    {
      char *VAR_5 = VAR_4 + (VAR_2-1);
      char *VAR_6 = VAR_3 + (VAR_2-1);
      while (VAR_2--)
        *VAR_6-- = *VAR_5--;
    }
  return VAR_0;
}
