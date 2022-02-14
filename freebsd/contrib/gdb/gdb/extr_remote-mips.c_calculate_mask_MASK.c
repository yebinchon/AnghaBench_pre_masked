
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;



__attribute__((used)) static unsigned long
FUNC_0 (CORE_ADDR VAR_0, int VAR_1)
{
  unsigned long VAR_2;
  int VAR_3;

  VAR_2 = VAR_0 ^ (VAR_0 + VAR_1 - 1);

  for (VAR_3 = 32; VAR_3 >= 0; VAR_3--)
    if (VAR_2 == 0)
      break;
    else
      VAR_2 >>= 1;

  VAR_2 = (unsigned long) 0xffffffff >> VAR_3;

  return VAR_2;
}
