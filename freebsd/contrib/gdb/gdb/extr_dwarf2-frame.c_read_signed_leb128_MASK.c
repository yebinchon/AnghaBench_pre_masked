
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef int bfd ;
typedef unsigned char LONGEST ;


 unsigned char FUNC_0 (int *,int *) ;

__attribute__((used)) static LONGEST
FUNC_1 (bfd *VAR_0, char *VAR_1, unsigned int *VAR_2)
{
  LONGEST VAR_3;
  int VAR_4;
  unsigned int VAR_5;
  unsigned char VAR_6;

  VAR_3 = 0;
  VAR_4 = 0;
  VAR_5 = 0;

  do
    {
      VAR_6 = FUNC_0 (VAR_0, (bfd_byte *) VAR_1);
      VAR_1++;
      VAR_5++;
      VAR_3 |= ((VAR_6 & 0x7f) << VAR_4);
      VAR_4 += 7;
    }
  while (VAR_6 & 0x80);

  if ((VAR_4 < 32) && (VAR_6 & 0x40))
    VAR_3 |= -(1 << VAR_4);

  *VAR_2 = VAR_5;

  return VAR_3;
}
