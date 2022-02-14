
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int man_len; unsigned int man_start; int totalsize; int byteorder; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned char*,int ,int ,unsigned int,int) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 int FUNC_3 (char*,char*) ;

char *
FUNC_4 (const struct floatformat *VAR_0, char *VAR_1)
{
  unsigned char *VAR_2 = (unsigned char *) VAR_1;
  unsigned long VAR_3;
  unsigned int VAR_4, VAR_5;
  int VAR_6;
  static char VAR_7[50];
  char VAR_8[9];


  FUNC_0 (VAR_0 != ((void*)0));
  FUNC_0 (sizeof VAR_7 > ((VAR_0->man_len + 7) / 8) * 2);

  VAR_5 = VAR_0->man_start;
  VAR_6 = VAR_0->man_len;
  VAR_4 = (VAR_6 % 32) > 0 ? VAR_6 % 32 : 32;

  VAR_3 = FUNC_1 (VAR_2, VAR_0->byteorder, VAR_0->totalsize,
      VAR_5, VAR_4);

  FUNC_2 (VAR_7, "%lx", VAR_3);

  VAR_5 += VAR_4;
  VAR_6 -= VAR_4;

  while (VAR_6 > 0)
    {
      VAR_3 = FUNC_1 (VAR_2, VAR_0->byteorder, VAR_0->totalsize,
   VAR_5, 32);

      FUNC_2 (VAR_8, "%08lx", VAR_3);
      FUNC_3 (VAR_7, VAR_8);

      VAR_5 += 32;
      VAR_6 -= 32;
    }

  return VAR_7;
}
