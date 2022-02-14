
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1 (char **VAR_0)
{
  char *VAR_1;
  int VAR_2 = 0;

  if (**VAR_0 != '#')
    return 0;


  VAR_1 = *VAR_0 + 1;


  while (*VAR_1 && FUNC_0 (*VAR_1))
    {
      VAR_2 = VAR_2 * 10 + *VAR_1 - '0';
      VAR_1++;
    }
  *VAR_0 = VAR_1;
  return VAR_2;
}
