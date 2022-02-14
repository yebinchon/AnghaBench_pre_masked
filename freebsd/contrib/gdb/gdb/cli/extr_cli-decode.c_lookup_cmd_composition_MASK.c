
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {struct cmd_list_element** prefixlist; struct cmd_list_element* cmd_pointer; } ;


 scalar_t__ FUNC_0 (int) ;
 struct cmd_list_element* VAR_0 ;
 struct cmd_list_element* FUNC_1 (char*,int,struct cmd_list_element*,int,int*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 char FUNC_4 (char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_5 (char *VAR_3,
                      struct cmd_list_element **VAR_4,
                      struct cmd_list_element **VAR_5,
                      struct cmd_list_element **VAR_6)
{
  char *VAR_7, *VAR_8;
  int VAR_9, VAR_10, VAR_11;
  struct cmd_list_element *VAR_12;
  struct cmd_list_element *VAR_13;
  *VAR_4 = ((void*)0);
  *VAR_5 = ((void*)0);
  *VAR_6 = ((void*)0);

  VAR_12 = VAR_0;

  while (1)
    {



      VAR_13 = *VAR_6;

      while (*VAR_3 == ' ' || *VAR_3 == '\t')
      (VAR_3)++;






      for (VAR_7 = VAR_3;
         *VAR_7 && (FUNC_2 (*VAR_7) || *VAR_7 == '-' || *VAR_7 == '_' ||




                (VAR_2 && (*VAR_7 == '!' || *VAR_7 == '/' || *VAR_7 == '?')));
         VAR_7++)
      ;


      if (VAR_7 == VAR_3)
      return 0;

      VAR_9 = VAR_7 - VAR_3;




      VAR_8 = (char *) FUNC_0 (VAR_9 + 1);
      for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
      {
        char VAR_14 = VAR_3[VAR_10];
        VAR_8[VAR_10] = VAR_14;
      }
      VAR_8[VAR_9] = '\0';


      *VAR_6 = 0;
      VAR_11 = 0;
      *VAR_6 = FUNC_1 (VAR_8, VAR_9, VAR_12, 1, &VAR_11);




      if (!*VAR_6 || VAR_11 == 0)
      {
        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
          {
            char VAR_15 = VAR_8[VAR_10];
            VAR_8[VAR_10] = FUNC_3 (VAR_15) ? FUNC_4 (VAR_15) : VAR_15;
          }
        *VAR_6 = FUNC_1 (VAR_8, VAR_9, VAR_12, 1, &VAR_11);
      }

      if (*VAR_6 == (struct cmd_list_element *) -1)
      {
        return 0;
      }

      if (*VAR_6 == ((void*)0))
      return 0;
      else
      {
        if ((*VAR_6)->cmd_pointer)
          {



            *VAR_4 = *VAR_6;
            *VAR_6 = (*VAR_6)->cmd_pointer;
          }
        *VAR_5 = VAR_13;
      }
      if ((*VAR_6)->prefixlist)
      VAR_12 = *(*VAR_6)->prefixlist;
      else
      return 1;

      VAR_3 = VAR_7;
    }
}
