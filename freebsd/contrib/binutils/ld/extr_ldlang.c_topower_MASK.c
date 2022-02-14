
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (int VAR_0)
{
  unsigned int VAR_1 = 1;
  int VAR_2;

  if (VAR_0 < 0)
    return -1;

  for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
    {
      if (VAR_1 >= (unsigned int) VAR_0)
 return VAR_2;
      VAR_1 <<= 1;
    }

  return 0;
}
