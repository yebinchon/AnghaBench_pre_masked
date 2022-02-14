
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_list_element {char** (* completer ) (char*,char*) ;scalar_t__ enums; int allow_unknown; struct cmd_list_element** prefixlist; } ;
struct TYPE_2__ {int (* la_word_break_characters ) () ;} ;


 scalar_t__ FUNC_0 (int) ;
 struct cmd_list_element* VAR_0 ;
 char** FUNC_1 (struct cmd_list_element*,char*,char*) ;
 char** FUNC_2 (scalar_t__,char*,char*) ;
 TYPE_1__* VAR_1 ;
 char** FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char) ;
 char** FUNC_5 (char*,char*) ;
 struct cmd_list_element* FUNC_6 (char**,struct cmd_list_element*,struct cmd_list_element**,int) ;
 int VAR_4 ;
 int * FUNC_7 (int ,char) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 () ;
 char** FUNC_11 (char*,char*) ;
 char** FUNC_12 (char*,char*) ;

char **
FUNC_13 (const char *VAR_5, char *VAR_6, int VAR_7)
{
  char **VAR_8 = ((void*)0);
  char *VAR_9, *VAR_10;

  char *VAR_11;
  struct cmd_list_element *VAR_12, *VAR_13;
  VAR_4 =
    VAR_1->la_word_break_characters();


  VAR_9 = (char *) FUNC_0 (VAR_7 + 1);
  VAR_10 = VAR_9;

  FUNC_9 (VAR_9, VAR_6, VAR_7);
  VAR_9[VAR_7] = '\0';



  VAR_11 = VAR_9 + VAR_7 - FUNC_8 (VAR_5);

  if (VAR_7 == 0)
    {


      VAR_12 = (struct cmd_list_element *) -1;
      VAR_13 = 0;
    }
  else
    {
      VAR_12 = FUNC_6 (&VAR_10, VAR_0, &VAR_13, 1);
    }


  while (*VAR_10 == ' ' || *VAR_10 == '\t')
    {
      VAR_10++;
    }

  if (!VAR_12)
    {


      VAR_8 = ((void*)0);
    }
  else if (VAR_12 == (struct cmd_list_element *) -1)
    {
      char *VAR_14;



      VAR_14 = VAR_10;
      while (*VAR_14 && (FUNC_4 (*VAR_14) || *VAR_14 == '-' || *VAR_14 == '_'))
 ++VAR_14;
      if (VAR_14 != VAR_9 + VAR_7)
 {





   VAR_8 = ((void*)0);
 }
      else
 {


   if (VAR_13)
     {
       VAR_8 = FUNC_1 (*VAR_13->prefixlist, VAR_10,
       VAR_11);
     }
   else
     {
       VAR_8 = FUNC_1 (VAR_0, VAR_10, VAR_11);
     }


   VAR_4 =
     VAR_2;
 }
    }
  else
    {


      if (VAR_10 == VAR_9 + VAR_7)
 {


   if (VAR_10[-1] == ' ' || VAR_10[-1] == '\t')
     {


       if (VAR_12->prefixlist)
  {


    VAR_8 = FUNC_1 (*VAR_12->prefixlist, VAR_10, VAR_11);



    VAR_4 =
      VAR_2;
  }
       else if (VAR_12->enums)
  {
    VAR_8 = FUNC_2 (VAR_12->enums, VAR_10, VAR_11);
    VAR_4 =
      VAR_2;
  }
       else
  {


    if (VAR_12->completer == FUNC_3)
      {
        for (VAR_10 = VAR_11;
      VAR_10 > VAR_9
        && FUNC_7 (VAR_3, VAR_10[-1]) == ((void*)0);
      VAR_10--)
   ;
        VAR_4 =
   VAR_3;
      }
    else if (VAR_12->completer == FUNC_5)
      {


        for (VAR_10 = VAR_11;
      VAR_10 > VAR_9
        && VAR_10[-1] != ' ' && VAR_10[-1] != '\t';
      VAR_10--)
   ;
      }
    VAR_8 = (*VAR_12->completer) (VAR_10, VAR_11);
  }
     }
   else
     {




       char *VAR_15;


       VAR_15 = VAR_10;
       while (VAR_15 > VAR_9)
  {
    if (FUNC_4 (VAR_15[-1]) || VAR_15[-1] == '-' || VAR_15[-1] == '_')
      --VAR_15;
    else
      break;
  }

       VAR_8 = FUNC_1 (VAR_13, VAR_15, VAR_11);



       VAR_4 =
  VAR_2;
     }
 }
      else
 {


   if (VAR_12->prefixlist && !VAR_12->allow_unknown)
     {


       VAR_8 = ((void*)0);
     }
   else if (VAR_12->enums)
     {
       VAR_8 = FUNC_2 (VAR_12->enums, VAR_10, VAR_11);
     }
   else
     {

       if (VAR_12->completer == FUNC_3)
  {


    for (VAR_10 = VAR_11;
         VAR_10 > VAR_9
    && FUNC_7 (VAR_3, VAR_10[-1]) == ((void*)0);
         VAR_10--)
      ;
    VAR_4 =
      VAR_3;
  }
       else if (VAR_12->completer == FUNC_5)
  {
    for (VAR_10 = VAR_11;
         VAR_10 > VAR_9
    && VAR_10[-1] != ' ' && VAR_10[-1] != '\t';
         VAR_10--)
      ;
  }
       VAR_8 = (*VAR_12->completer) (VAR_10, VAR_11);
     }
 }
    }

  return VAR_8;
}
