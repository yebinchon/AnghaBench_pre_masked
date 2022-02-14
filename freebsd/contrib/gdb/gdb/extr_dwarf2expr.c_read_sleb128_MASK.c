
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char LONGEST ;


 int FUNC_0 (char*) ;

unsigned char *
FUNC_1 (unsigned char *VAR_0, unsigned char *VAR_1, LONGEST * VAR_2)
{
  unsigned VAR_3 = 0;
  LONGEST VAR_4 = 0;
  unsigned char VAR_5;

  while (1)
    {
      if (VAR_0 >= VAR_1)
 FUNC_0 ("read_sleb128: Corrupted DWARF expression.");

      VAR_5 = *VAR_0++;
      VAR_4 |= (VAR_5 & 0x7f) << VAR_3;
      VAR_3 += 7;
      if ((VAR_5 & 0x80) == 0)
 break;
    }
  if (VAR_3 < (sizeof (*VAR_2) * 8) && (VAR_5 & 0x40) != 0)
    VAR_4 |= -(1 << VAR_3);

  *VAR_2 = VAR_4;
  return VAR_0;
}
