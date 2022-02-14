
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0 (const char *VAR_0)
{
  const char *VAR_1;
  int VAR_2;

  for (VAR_2 = 1, VAR_1 = VAR_0-1; VAR_2; VAR_1--)
    {
      switch (*VAR_1)
 {
 case ')':
   VAR_2++;
   break;
 case '(':
   VAR_2--;
   break;
 }
    }
  return ++VAR_1;
}
