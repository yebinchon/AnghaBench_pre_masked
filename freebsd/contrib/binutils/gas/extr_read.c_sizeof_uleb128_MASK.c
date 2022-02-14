
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;



__attribute__((used)) static inline int
FUNC_0 (valueT VAR_0)
{
  register int VAR_1 = 0;
  register unsigned VAR_2;

  do
    {
      VAR_2 = (VAR_0 & 0x7f);
      VAR_0 >>= 7;
      VAR_1 += 1;
    }
  while (VAR_0 != 0);

  return VAR_1;
}
