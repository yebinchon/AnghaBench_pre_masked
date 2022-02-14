
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static bool
FUNC_2 (const char *VAR_1)
{
  if (!FUNC_0 (*VAR_1))
    return 0;
  while (FUNC_0 (*VAR_1))
    VAR_1++;
  if (*VAR_1 == '$')
    {
      FUNC_1 (VAR_0, "$ operand number used after format without operand number");
      return 1;
    }
  return 0;
}
