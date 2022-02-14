
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nargs; } ;
typedef TYPE_1__ ins ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,TYPE_1__*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (ins * VAR_3, char *VAR_4)
{
  char *VAR_5;
  char *VAR_6, *VAR_7;
  int VAR_8 = 0;
  char *VAR_9[VAR_0];
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;


  VAR_5 = VAR_6 = VAR_7 = VAR_4;

  while (*VAR_7 != '\0')
    {
      if (*VAR_7 == ',' && VAR_11 != 1 && VAR_12 != 1)
        {
          *VAR_7++ = '\0';
          VAR_9[VAR_10++] = FUNC_5 (VAR_6);
          VAR_6 = VAR_7;
          continue;
        }

      if (*VAR_7 == ' ')
        FUNC_1 (FUNC_0("Illegal operands (whitespace): `%s'"), VAR_2);

      if (*VAR_7 == '(')
        VAR_11 = 1;
      else if (*VAR_7 == '[')
        VAR_12 = 1;

      if (*VAR_7 == ')')
        {
          if (VAR_11)
            VAR_11 = 0;
          else
            FUNC_2 (FUNC_0("Missing matching brackets : `%s'"), VAR_2);
        }
      else if (*VAR_7 == ']')
        {
          if (VAR_12)
            VAR_12 = 0;
          else
            FUNC_2 (FUNC_0("Missing matching brackets : `%s'"), VAR_2);
        }

      if (VAR_11 == 1 && *VAR_7 == ')')
        VAR_11 = 0;
      else if (VAR_12 == 1 && *VAR_7 == ']')
        VAR_12 = 0;

      VAR_7++;
    }


  VAR_9[VAR_10++] = FUNC_5 (VAR_6);
  VAR_3->nargs = VAR_10;


  if (VAR_11 || VAR_12)
    FUNC_2 (FUNC_0("Missing matching brackets : `%s'"), VAR_2);


  for (VAR_10 = 0; VAR_10 < VAR_3->nargs; VAR_10++)
    {
      VAR_1 = VAR_10;
      FUNC_4 (VAR_9[VAR_10], VAR_3);
      FUNC_3 (VAR_9[VAR_10]);
    }

  if (VAR_8)
    FUNC_3 (VAR_5);
}
