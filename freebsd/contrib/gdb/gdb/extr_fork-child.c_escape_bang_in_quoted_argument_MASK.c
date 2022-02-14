
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0)
{
  const int VAR_1 = FUNC_0 (VAR_0);





  if (VAR_1 < 3)
    return 0;

  if (VAR_0[VAR_1 - 3] == 'c'
      && VAR_0[VAR_1 - 2] == 's'
      && VAR_0[VAR_1 - 1] == 'h')
    return 1;

  return 0;
}
