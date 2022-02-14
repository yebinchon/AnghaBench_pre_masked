
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rc_uint_type ;
typedef int bfd_byte ;



__attribute__((used)) static int
FUNC_0 (rc_uint_type VAR_0, const bfd_byte *VAR_1)
{
  rc_uint_type VAR_2;
  if ((VAR_0 & 1) != 0)
    return 0;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 += 2)
    {
      if (VAR_1[VAR_2] == 0 && VAR_1[VAR_2 + 1] == 0 && (VAR_2 + 2) < VAR_0)
 return 0;
      if (VAR_1[VAR_2] == 0xff && VAR_1[VAR_2 + 1] == 0xff)
 return 0;
    }
  return 1;
}
