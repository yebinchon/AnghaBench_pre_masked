
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0)
{
 if (*VAR_0++ == '\0')
  return 1;
 if (*VAR_0 != '.')
  return 0;
 do {
  char VAR_1 = *VAR_0++;
  if (VAR_1 < '0' || VAR_1 > '9')
   return 0;
 } while (*VAR_0);
 return 1;
}
