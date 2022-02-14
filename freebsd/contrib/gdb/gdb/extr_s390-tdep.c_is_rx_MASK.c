
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;



__attribute__((used)) static int
FUNC_0 (bfd_byte *VAR_0, int VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3, unsigned int *VAR_4, unsigned int *VAR_5)
{
  if (VAR_0[0] == VAR_1)
    {
      *VAR_2 = (VAR_0[1] >> 4) & 0xf;
      *VAR_4 = VAR_0[1] & 0xf;
      *VAR_5 = (VAR_0[2] >> 4) & 0xf;
      *VAR_3 = ((VAR_0[2] & 0xf) << 8) | VAR_0[3];
      return 1;
    }
  else
    return 0;
}
