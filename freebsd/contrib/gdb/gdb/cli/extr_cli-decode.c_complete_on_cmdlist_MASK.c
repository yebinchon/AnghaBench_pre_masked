
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char* name; scalar_t__ prefixlist; scalar_t__ func; int abbrev_flag; struct cmd_list_element* next; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,int) ;

char **
FUNC_8 (struct cmd_list_element *VAR_0, char *VAR_1, char *VAR_2)
{
  struct cmd_list_element *VAR_3;
  char **VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7 = FUNC_2 (VAR_1);

  VAR_5 = 10;
  VAR_4 = (char **) FUNC_6 (VAR_5 * sizeof (char *));
  VAR_6 = 0;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
    if (!FUNC_3 (VAR_3->name, VAR_1, VAR_7)
 && !VAR_3->abbrev_flag
 && (VAR_3->func
     || VAR_3->prefixlist))
      {
 if (VAR_6 == VAR_5)
   {
     VAR_5 *= 2;
     VAR_4 = (char **) FUNC_7 ((char *) VAR_4,
         (VAR_5
          * sizeof (char *)));
   }

 VAR_4[VAR_6] = (char *)
   FUNC_6 (FUNC_2 (VAR_2) + FUNC_2 (VAR_3->name) + 1);
 if (VAR_2 == VAR_1)
   FUNC_1 (VAR_4[VAR_6], VAR_3->name);
 else if (VAR_2 > VAR_1)
   {

     FUNC_1 (VAR_4[VAR_6], VAR_3->name + (VAR_2 - VAR_1));
   }
 else
   {

     FUNC_4 (VAR_4[VAR_6], VAR_2, VAR_1 - VAR_2);
     VAR_4[VAR_6][VAR_1 - VAR_2] = '\0';
     FUNC_0 (VAR_4[VAR_6], VAR_3->name);
   }
 ++VAR_6;
      }

  if (VAR_6 == 0)
    {
      FUNC_5 (VAR_4);
      VAR_4 = 0;
    }
  else
    {
      VAR_4 = (char **) FUNC_7 ((char *) VAR_4, ((VAR_6 + 1)
       * sizeof (char *)));
      VAR_4[VAR_6] = (char *) 0;
    }

  return VAR_4;
}
