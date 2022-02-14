
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int allow_unknown; char* prefixname; char* name; struct cmd_list_element** prefixlist; struct cmd_list_element* next; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char) ;
 struct cmd_list_element* FUNC_3 (char**,struct cmd_list_element*,struct cmd_list_element**,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;

struct cmd_list_element *
FUNC_9 (char **VAR_0, struct cmd_list_element *VAR_1, char *VAR_2,
     int VAR_3, int VAR_4)
{
  struct cmd_list_element *VAR_5 = 0;
  struct cmd_list_element *VAR_6 =
  FUNC_3 (VAR_0, VAR_1, &VAR_5, VAR_4);




  if (!VAR_6)
    {
      if (!VAR_3)
 {
   if (!*VAR_0)
     FUNC_1 ("Lack of needed %scommand", VAR_2);
   else
     {
       char *VAR_7 = *VAR_0, *VAR_8;

       while (FUNC_2 (*VAR_7) || *VAR_7 == '-')
  VAR_7++;

       VAR_8 = (char *) FUNC_0 (VAR_7 - *VAR_0 + 1);
       FUNC_7 (VAR_8, *VAR_0, VAR_7 - *VAR_0);
       VAR_8[VAR_7 - *VAR_0] = '\0';
       FUNC_8 (VAR_2, VAR_8);
     }
 }
      else
 return 0;
    }
  else if (VAR_6 == (struct cmd_list_element *) -1)
    {


      int VAR_9 = (VAR_5 ? VAR_5->allow_unknown :
     VAR_3);
      char *VAR_10 = VAR_5 ? VAR_5->prefixname : VAR_2;
      struct cmd_list_element *VAR_11 =
      (VAR_5 ? *(VAR_5->prefixlist) : VAR_1);

      if (VAR_9 < 0)
 {
   if (VAR_5)
     return VAR_5;
   else
     return 0;
 }
      else
 {

   int VAR_12;
   char VAR_13[100];

   for (VAR_12 = 0;
        ((*VAR_0)[VAR_12] && (*VAR_0)[VAR_12] != ' '
  && (*VAR_0)[VAR_12] != '\t');
        VAR_12++)
     ;

   VAR_13[0] = 0;
   for (VAR_6 = VAR_11; VAR_6; VAR_6 = VAR_6->next)
     if (!FUNC_6 (*VAR_0, VAR_6->name, VAR_12))
       {
  if (FUNC_5 (VAR_13) + FUNC_5 (VAR_6->name) + 6 < (int) sizeof VAR_13)
    {
      if (FUNC_5 (VAR_13))
        FUNC_4 (VAR_13, ", ");
      FUNC_4 (VAR_13, VAR_6->name);
    }
  else
    {
      FUNC_4 (VAR_13, "..");
      break;
    }
       }
   FUNC_1 ("Ambiguous %scommand \"%s\": %s.", VAR_10,
   *VAR_0, VAR_13);
   return 0;
 }
    }
  else
    {


      while (**VAR_0 == ' ' || **VAR_0 == '\t')
 (*VAR_0)++;

      if (VAR_6->prefixlist && **VAR_0 && !VAR_6->allow_unknown)
 FUNC_8 (VAR_6->prefixname, *VAR_0);


      return VAR_6;
    }
  return 0;
}
