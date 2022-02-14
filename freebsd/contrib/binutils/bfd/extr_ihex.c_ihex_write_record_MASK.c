
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef unsigned int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int VAR_2 ;
 size_t FUNC_1 (char*,int ,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_3,
     size_t VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6,
     bfd_byte *VAR_7)
{
  static const char VAR_8[] = "0123456789ABCDEF";
  char VAR_9[9 + VAR_0 * 2 + 4];
  char *VAR_10;
  unsigned int VAR_11;
  unsigned int VAR_12;
  size_t VAR_13;




  VAR_9[0] = ':';
  ((VAR_9 + 1)[0] = VAR_8[((VAR_4) >> 4) & 0xf], (VAR_9 + 1)[1] = VAR_8[(VAR_4) & 0xf]);
  ((VAR_9 + 3)[0] = VAR_8[(((VAR_5 >> 8) & 0xff) >> 4) & 0xf], (VAR_9 + 3)[1] = VAR_8[((VAR_5 >> 8) & 0xff) & 0xf]);
  ((VAR_9 + 5)[0] = VAR_8[((VAR_5 & 0xff) >> 4) & 0xf], (VAR_9 + 5)[1] = VAR_8[(VAR_5 & 0xff) & 0xf]);
  ((VAR_9 + 7)[0] = VAR_8[((VAR_6) >> 4) & 0xf], (VAR_9 + 7)[1] = VAR_8[(VAR_6) & 0xf]);

  VAR_11 = VAR_4 + VAR_5 + (VAR_5 >> 8) + VAR_6;

  for (VAR_12 = 0, VAR_10 = VAR_9 + 9; VAR_12 < VAR_4; VAR_12++, VAR_10 += 2, VAR_7++)
    {
      ((VAR_10)[0] = VAR_8[((*VAR_7) >> 4) & 0xf], (VAR_10)[1] = VAR_8[(*VAR_7) & 0xf]);
      VAR_11 += *VAR_7;
    }

  ((VAR_10)[0] = VAR_8[(((- VAR_11) & 0xff) >> 4) & 0xf], (VAR_10)[1] = VAR_8[((- VAR_11) & 0xff) & 0xf]);
  VAR_10[2] = '\r';
  VAR_10[3] = '\n';

  VAR_13 = 9 + VAR_4 * 2 + 4;
  if (FUNC_1 (VAR_9, (bfd_size_type) VAR_13, VAR_3) != VAR_13)
    return VAR_1;

  return VAR_2;
}
