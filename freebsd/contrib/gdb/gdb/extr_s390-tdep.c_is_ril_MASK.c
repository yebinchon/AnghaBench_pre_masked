
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;



__attribute__((used)) static int
FUNC_0 (bfd_byte *VAR_0, int VAR_1, int VAR_2,
        unsigned int *VAR_3, int *VAR_4)
{
  if (VAR_0[0] == VAR_1 && (VAR_0[1] & 0xf) == VAR_2)
    {
      *VAR_3 = (VAR_0[1] >> 4) & 0xf;



      *VAR_4 = (((VAR_0[2] << 24)
              | (VAR_0[3] << 16)
              | (VAR_0[4] << 8)
              | (VAR_0[5])) ^ 0x80000000) - 0x80000000;
      return 1;
    }
  else
    return 0;
}
