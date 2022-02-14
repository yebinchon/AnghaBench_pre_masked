
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0 (unsigned int *VAR_0, unsigned int VAR_1)
{
  if (VAR_1 < 32)
    *VAR_0 |= 1 << VAR_1;
  else if (VAR_1 < 48)
    *VAR_0 |= 3 << ((VAR_1 - 32) * 2);
}
