
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

void
FUNC_4 (char *VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7 = 0;
  int VAR_8;
  char *VAR_9;

  FUNC_2 (VAR_1 > 0);
  if (VAR_1 == VAR_0)
    {
      FUNC_1 (VAR_4, VAR_3);
      FUNC_1 ("\n", VAR_3);
      return;
    }

  if (((VAR_2 - 1) / VAR_5 + 2) * VAR_5 >= VAR_1)
    FUNC_1 ("\n", VAR_3);

  if (VAR_5 >= VAR_1)
    VAR_5 = VAR_1 - 1;

  VAR_8 = FUNC_3 (VAR_4);

  if (VAR_2 > 0)
    VAR_7 = VAR_5 - (VAR_2 - 1) % VAR_5 - 1;
  if (VAR_6)
    VAR_7 += VAR_5 - VAR_8;

  VAR_9 = FUNC_0 (VAR_7 + 1);
  VAR_9[VAR_7] = '\0';
  while (VAR_7--)
    VAR_9[VAR_7] = ' ';

  FUNC_1 (VAR_9, VAR_3);
  FUNC_1 (VAR_4, VAR_3);
}
