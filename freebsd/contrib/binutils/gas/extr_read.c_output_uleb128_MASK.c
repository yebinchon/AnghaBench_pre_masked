
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;



__attribute__((used)) static inline int
FUNC_0 (char *VAR_0, valueT VAR_1)
{
  char *VAR_2 = VAR_0;

  do
    {
      unsigned VAR_3 = (VAR_1 & 0x7f);
      VAR_1 >>= 7;
      if (VAR_1 != 0)

 VAR_3 |= 0x80;

      *VAR_0++ = VAR_3;
    }
  while (VAR_1 != 0);

  return VAR_0 - VAR_2;
}
