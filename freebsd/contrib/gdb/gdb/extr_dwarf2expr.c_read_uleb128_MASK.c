
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char ULONGEST ;


 int FUNC_0 (char*) ;

unsigned char *
FUNC_1 (unsigned char *VAR_0, unsigned char *VAR_1, ULONGEST * VAR_2)
{
  unsigned VAR_3 = 0;
  ULONGEST VAR_4 = 0;
  unsigned char VAR_5;

  while (1)
    {
      if (VAR_0 >= VAR_1)
 FUNC_0 ("read_uleb128: Corrupted DWARF expression.");

      VAR_5 = *VAR_0++;
      VAR_4 |= (VAR_5 & 0x7f) << VAR_3;
      if ((VAR_5 & 0x80) == 0)
 break;
      VAR_3 += 7;
    }
  *VAR_2 = VAR_4;
  return VAR_0;
}
