
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,int) ;

char **
FUNC_8 (const char *VAR_0[],
    char *VAR_1,
    char *VAR_2)
{
  char **VAR_3;
  int VAR_4;
  int VAR_5;
  int VAR_6 = FUNC_2 (VAR_1);
  int VAR_7;
  const char *VAR_8;

  VAR_4 = 10;
  VAR_3 = (char **) FUNC_6 (VAR_4 * sizeof (char *));
  VAR_5 = 0;

  for (VAR_7 = 0; (VAR_8 = VAR_0[VAR_7]) != ((void*)0); VAR_7++)
    if (FUNC_3 (VAR_8, VAR_1, VAR_6) == 0)
      {
 if (VAR_5 == VAR_4)
   {
     VAR_4 *= 2;
     VAR_3 = (char **) FUNC_7 ((char *) VAR_3,
         (VAR_4
          * sizeof (char *)));
   }

 VAR_3[VAR_5] = (char *)
   FUNC_6 (FUNC_2 (VAR_2) + FUNC_2 (VAR_8) + 1);
 if (VAR_2 == VAR_1)
   FUNC_1 (VAR_3[VAR_5], VAR_8);
 else if (VAR_2 > VAR_1)
   {

     FUNC_1 (VAR_3[VAR_5], VAR_8 + (VAR_2 - VAR_1));
   }
 else
   {

     FUNC_4 (VAR_3[VAR_5], VAR_2, VAR_1 - VAR_2);
     VAR_3[VAR_5][VAR_1 - VAR_2] = '\0';
     FUNC_0 (VAR_3[VAR_5], VAR_8);
   }
 ++VAR_5;
      }

  if (VAR_5 == 0)
    {
      FUNC_5 (VAR_3);
      VAR_3 = 0;
    }
  else
    {
      VAR_3 = (char **) FUNC_7 ((char *) VAR_3, ((VAR_5 + 1)
       * sizeof (char *)));
      VAR_3[VAR_5] = (char *) 0;
    }

  return VAR_3;
}
