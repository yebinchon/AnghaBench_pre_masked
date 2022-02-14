
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (int VAR_0, int *VAR_1)
{
  if ((VAR_0 >= 'a') && (VAR_0 <= 'f'))
    {
      *VAR_1 = VAR_0 - 'a' + 10;
      return 1;
    }
  if ((VAR_0 >= 'A') && (VAR_0 <= 'F'))
    {
      *VAR_1 = VAR_0 - 'A' + 10;
      return 1;
    }
  if ((VAR_0 >= '0') && (VAR_0 <= '9'))
    {
      *VAR_1 = VAR_0 - '0';
      return 1;
    }
  return 0;
}
