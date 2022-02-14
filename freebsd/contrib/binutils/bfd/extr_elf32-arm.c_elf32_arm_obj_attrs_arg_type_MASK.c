
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (int VAR_1)
{
  if (VAR_1 == VAR_0)
    return 3;
  else if (VAR_1 == 4 || VAR_1 == 5)
    return 2;
  else if (VAR_1 < 32)
    return 1;
  else
    return (VAR_1 & 1) != 0 ? 2 : 1;
}
