
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef int bfd ;


 unsigned char FUNC_0 (int *,int *) ;

__attribute__((used)) static unsigned long
FUNC_1 (bfd *VAR_0, char *VAR_1, unsigned int *VAR_2)
{
  unsigned long VAR_3;
  unsigned int VAR_4;
  int VAR_5, VAR_6;
  unsigned char VAR_7;

  VAR_3 = 0;
  VAR_6 = 0;
  VAR_4 = 0;
  VAR_5 = 0;
  while (1)
    {
      VAR_7 = FUNC_0 (VAR_0, (bfd_byte *) VAR_1);
      VAR_1++;
      VAR_4++;
      VAR_3 |= ((unsigned long)(VAR_7 & 127) << VAR_6);
      if ((VAR_7 & 128) == 0)
 {
   break;
 }
      VAR_6 += 7;
    }
  *VAR_2 = VAR_4;
  return VAR_3;
}
