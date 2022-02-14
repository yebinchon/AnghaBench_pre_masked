
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  int VAR_2 = * (const int *) VAR_0;
  int VAR_3 = * (const int *) VAR_1;
  if (VAR_2 < VAR_3)
    return -1;
  else if (VAR_2 > VAR_3)
    return 1;
  else
    return 0;
}
