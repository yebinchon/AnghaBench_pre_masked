
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0)
{
  size_t VAR_1 = FUNC_1 (VAR_0);

  if (VAR_1 == 0)
    return;

  do
    {
      VAR_1--;
      if (FUNC_0 (VAR_0 [VAR_1]))
 VAR_0[VAR_1] = '\0';
      else
 break;
    }
  while (VAR_1 != 0);
}
