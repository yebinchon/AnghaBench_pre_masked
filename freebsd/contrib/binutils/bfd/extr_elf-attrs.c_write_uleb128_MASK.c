
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;



__attribute__((used)) static bfd_byte *
FUNC_0 (bfd_byte *VAR_0, unsigned int VAR_1)
{
  bfd_byte VAR_2;
  do
    {
      VAR_2 = VAR_1 & 0x7f;
      VAR_1 >>= 7;
      if (VAR_1)
 VAR_2 |= 0x80;
      *(VAR_0++) = VAR_2;
    }
  while (VAR_1);
  return VAR_0;
}
