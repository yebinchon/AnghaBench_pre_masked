
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef int bfd ;
typedef unsigned char ULONGEST ;


 unsigned char FUNC_0 (int *,int *) ;

__attribute__((used)) static ULONGEST
FUNC_1 (bfd *VAR_0, char *VAR_1, unsigned int *VAR_2)
{
  ULONGEST VAR_3;
  unsigned int VAR_4;
  int VAR_5;
  unsigned char VAR_6;

  VAR_3 = 0;
  VAR_5 = 0;
  VAR_4 = 0;

  do
    {
      VAR_6 = FUNC_0 (VAR_0, (bfd_byte *) VAR_1);
      VAR_1++;
      VAR_4++;
      VAR_3 |= ((VAR_6 & 0x7f) << VAR_5);
      VAR_5 += 7;
    }
  while (VAR_6 & 0x80);

  *VAR_2 = VAR_4;

  return VAR_3;
}
