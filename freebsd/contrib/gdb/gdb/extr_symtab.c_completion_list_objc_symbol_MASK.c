
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;


 char* FUNC_0 (struct minimal_symbol*) ;
 int FUNC_1 (char*,char*,int,char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_7 (struct minimal_symbol *VAR_0, char *VAR_1,
        int VAR_2, char *VAR_3, char *VAR_4)
{
  static char *VAR_5 = ((void*)0);
  static unsigned int VAR_6 = 0;

  char *VAR_7, *VAR_8, *VAR_9;
  char *VAR_10 = ((void*)0);

  VAR_7 = FUNC_0 (VAR_0);


  if ((VAR_7[0] != '-') && (VAR_7[0] != '+'))
    return;

  if (VAR_1[0] == '[')

    FUNC_1 (VAR_7 + 1, VAR_1, VAR_2, VAR_3, VAR_4);

  while ((FUNC_5 (VAR_7) + 1) >= VAR_6)
    {
      if (VAR_6 == 0)
 VAR_6 = 1024;
      else
 VAR_6 *= 2;
      VAR_5 = FUNC_6 (VAR_5, VAR_6);
    }
  VAR_9 = FUNC_3 (VAR_7, ' ');
  if (VAR_9 != ((void*)0))
    VAR_9++;

  VAR_8 = FUNC_3 (VAR_7, '(');

  if ((VAR_8 != ((void*)0)) && (VAR_9 != ((void*)0)))
    {
      FUNC_2 (VAR_5, VAR_7, (VAR_8 - VAR_7));
      VAR_5[VAR_8 - VAR_7] = ' ';
      FUNC_2 (VAR_5 + (VAR_8 - VAR_7) + 1, VAR_9, FUNC_5 (VAR_9) + 1);
      FUNC_1 (VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
      if (VAR_1[0] == '[')
 FUNC_1 (VAR_5 + 1, VAR_1, VAR_2, VAR_3, VAR_4);
    }

  if (VAR_9 != ((void*)0))
    {

      FUNC_4 (VAR_5, VAR_9);
      VAR_10 = FUNC_3 (VAR_5, ']');
      if (VAR_10 != ((void*)0))
 *VAR_10 = '\0';

      FUNC_1 (VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
    }
}
