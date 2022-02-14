
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interp {char* name; struct interp* next; } ;


 struct interp* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,int) ;

__attribute__((used)) static char **
FUNC_8 (char *VAR_1, char *VAR_2)
{
  int VAR_3 = 0;
  int VAR_4;
  int VAR_5;
  char **VAR_6;
  struct interp *VAR_7;



  for (VAR_7 = VAR_0; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    ++VAR_3;
  VAR_6 = (char **) FUNC_6 (VAR_3 * sizeof (char *));

  VAR_5 = 0;
  VAR_4 = FUNC_2 (VAR_1);
  for (VAR_7 = VAR_0; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      if (FUNC_3 (VAR_7->name, VAR_1, VAR_4) == 0)
 {
   VAR_6[VAR_5] =
     (char *) FUNC_6 (FUNC_2 (VAR_2) + FUNC_2 (VAR_7->name) + 1);
   if (VAR_2 == VAR_1)
     FUNC_1 (VAR_6[VAR_5], VAR_7->name);
   else if (VAR_2 > VAR_1)
     {

       FUNC_1 (VAR_6[VAR_5], VAR_7->name + (VAR_2 - VAR_1));
     }
   else
     {

       FUNC_4 (VAR_6[VAR_5], VAR_2, VAR_1 - VAR_2);
       VAR_6[VAR_5][VAR_1 - VAR_2] = '\0';
       FUNC_0 (VAR_6[VAR_5], VAR_7->name);
     }
   ++VAR_5;
 }
    }

  if (VAR_5 == 0)
    {
      FUNC_5 (VAR_6);
      VAR_6 = ((void*)0);
    }
  else if (VAR_5 < VAR_3)
    {
      VAR_6 = (char **) FUNC_7 ((char *) VAR_6, ((VAR_5 + 1)
             * sizeof (char *)));
      VAR_6[VAR_5] = ((void*)0);
    }

  return VAR_6;
}
