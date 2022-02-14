
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef int bfd ;


 unsigned char FUNC_0 (int *,int *) ;

__attribute__((used)) static long
FUNC_1 (bfd *VAR_0, char *VAR_1, unsigned int *VAR_2)
{
  long VAR_3;
  int VAR_4, VAR_5, VAR_6, VAR_7;
  unsigned char VAR_8;

  VAR_3 = 0;
  VAR_5 = 0;
  VAR_6 = 32;
  VAR_7 = 0;
  VAR_4 = 0;
  while (1)
    {
      VAR_8 = FUNC_0 (VAR_0, (bfd_byte *) VAR_1);
      VAR_1++;
      VAR_7++;
      VAR_3 |= ((long)(VAR_8 & 127) << VAR_5);
      VAR_5 += 7;
      if ((VAR_8 & 128) == 0)
 {
   break;
 }
    }
  if ((VAR_5 < VAR_6) && (VAR_8 & 0x40))
    {
      VAR_3 |= -(1 << VAR_5);
    }
  *VAR_2 = VAR_7;
  return VAR_3;
}
