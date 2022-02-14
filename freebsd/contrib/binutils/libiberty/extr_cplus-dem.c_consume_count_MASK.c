
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1 (const char **VAR_0)
{
  int VAR_1 = 0;

  if (! FUNC_0 ((unsigned char)**VAR_0))
    return -1;

  while (FUNC_0 ((unsigned char)**VAR_0))
    {
      VAR_1 *= 10;






      if ((VAR_1 % 10) != 0)
 {
   while (FUNC_0 ((unsigned char) **VAR_0))
     (*VAR_0)++;
   return -1;
 }

      VAR_1 += **VAR_0 - '0';
      (*VAR_0)++;
    }

  if (VAR_1 < 0)
    VAR_1 = -1;

  return (VAR_1);
}
