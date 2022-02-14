
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lin ;


 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_0, lin *VAR_1)
{
  unsigned char VAR_2 = *VAR_0;
  lin VAR_3 = 0;

  if (! FUNC_0 (VAR_2))
    return 0;

  do
    {
      VAR_3 = VAR_2 - '0' + VAR_3 * 10;
      VAR_2 = *++VAR_0;
    }
  while (FUNC_0 (VAR_2));

  *VAR_1 = VAR_3;
  return VAR_0;
}
