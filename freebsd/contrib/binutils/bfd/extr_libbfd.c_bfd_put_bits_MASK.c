
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_uint64_t ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;


 int FUNC_0 () ;

void
FUNC_1 (bfd_uint64_t VAR_0, void *VAR_1, int VAR_2, bfd_boolean VAR_3)
{
  bfd_byte *VAR_4 = VAR_1;
  int VAR_5;
  int VAR_6;

  if (VAR_2 % 8 != 0)
    FUNC_0 ();

  VAR_6 = VAR_2 / 8;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
      int VAR_7 = VAR_3 ? VAR_6 - VAR_5 - 1 : VAR_5;

      VAR_4[VAR_7] = VAR_0 & 0xff;
      VAR_0 >>= 8;
    }
}
