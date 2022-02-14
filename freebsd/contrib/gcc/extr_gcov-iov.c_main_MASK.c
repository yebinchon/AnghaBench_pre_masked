
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 unsigned long FUNC_2 (char*,char**,int) ;

int
FUNC_3 (int VAR_1, char **VAR_2)
{
  unsigned int VAR_3 = 0;
  unsigned char VAR_4[4];
  unsigned int VAR_5;
  unsigned long VAR_6;
  unsigned long VAR_7 = 0;
  char VAR_8 = 0;
  char *VAR_9;

  if (VAR_1 != 3)
    {
      FUNC_0 (VAR_0, "usage: %s 'version' 'phase'\n", VAR_2[0]);
      return 1;
    }

  VAR_9 = VAR_2[1];
  VAR_6 = FUNC_2 (VAR_9, &VAR_9, 10);

  if (*VAR_9 == '.')
    VAR_7 = FUNC_2 (VAR_9 + 1, 0, 10);

  VAR_8 = VAR_2[2][0];
  if (VAR_8 == '\0')
    VAR_8 = '*';

  VAR_4[0] = (VAR_6 < 10 ? '0' : 'A' - 10) + VAR_6;
  VAR_4[1] = (VAR_7 / 10) + '0';
  VAR_4[2] = (VAR_7 % 10) + '0';
  VAR_4[3] = VAR_8;

  for (VAR_5 = 0; VAR_5 != 4; VAR_5++)
    VAR_3 = (VAR_3 << 8) | VAR_4[VAR_5];

  FUNC_1 ("/* Generated automatically by the program `%s'\n", VAR_2[0]);
  FUNC_1 ("   from `%s (%lu %lu) and %s (%c)'.  */\n",
   VAR_2[1], VAR_6, VAR_7, VAR_2[2], VAR_8);
  FUNC_1 ("\n");
  FUNC_1 ("#define GCOV_VERSION ((gcov_unsigned_t)%#08x)  /* %.4s */\n",
   VAR_3, VAR_4);

  return 0;
}
