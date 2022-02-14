
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int flags; struct cmd_list_element** prefixlist; struct cmd_list_element* cmd_pointer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 struct cmd_list_element* FUNC_2 (char*,int,struct cmd_list_element*,int,int*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 char FUNC_5 (char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

struct cmd_list_element *
FUNC_6 (char **VAR_3, struct cmd_list_element *VAR_4,
       struct cmd_list_element **VAR_5, int VAR_6)
{
  char *VAR_7, *VAR_8;
  int VAR_9, VAR_10, VAR_11;
  struct cmd_list_element *VAR_12, *VAR_13;
  char *VAR_14 = *VAR_3;

  while (**VAR_3 == ' ' || **VAR_3 == '\t')
    (*VAR_3)++;






  for (VAR_7 = *VAR_3;
       *VAR_7 && (FUNC_3 (*VAR_7) || *VAR_7 == '-' || *VAR_7 == '_' ||




       (VAR_2 && (*VAR_7 == '!' || *VAR_7 == '/' || *VAR_7 == '?')));
       VAR_7++)
    ;


  if (VAR_7 == *VAR_3)
    return 0;

  VAR_9 = VAR_7 - *VAR_3;





  VAR_8 = (char *) FUNC_0 (VAR_9 + 1);
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
      char VAR_15 = (*VAR_3)[VAR_10];
      VAR_8[VAR_10] = VAR_15;
    }
  VAR_8[VAR_9] = '\0';


  VAR_12 = 0;
  VAR_11 = 0;
  VAR_12 = FUNC_2 (VAR_8, VAR_9, VAR_4, VAR_6, &VAR_11);





  if (!VAR_12 || VAR_11 == 0)
    {
      for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
   char VAR_16 = VAR_8[VAR_10];
   VAR_8[VAR_10] = FUNC_4 (VAR_16) ? FUNC_5 (VAR_16) : VAR_16;
 }
      VAR_12 = FUNC_2 (VAR_8, VAR_9, VAR_4, VAR_6, &VAR_11);
    }


  if (VAR_11 == 0)
    return 0;

  if (VAR_11 > 1)
    {
      if (VAR_5 != ((void*)0))


 *VAR_5 = 0;
      return (struct cmd_list_element *) -1;
    }



  *VAR_3 = VAR_7;

  if (VAR_12->cmd_pointer)
    {







      if (VAR_12->flags & VAR_0)
      FUNC_1 (&VAR_14);
      VAR_12 = VAR_12->cmd_pointer;
    }


  if (VAR_12->prefixlist)
    {
      VAR_13 = FUNC_6 (VAR_3, *VAR_12->prefixlist, VAR_5,
   VAR_6);
      if (!VAR_13)
 {

   if (VAR_5 != ((void*)0))
     *VAR_5 = VAR_4;
   return VAR_12;
 }
      else if (VAR_13 == (struct cmd_list_element *) -1)
 {



   if (VAR_5 != ((void*)0))
     if (!*VAR_5)




       *VAR_5 = VAR_12;
   return VAR_13;
 }
      else
 {

   return VAR_13;
 }
    }
  else
    {
      if (VAR_5 != ((void*)0))
 *VAR_5 = VAR_4;
      return VAR_12;
    }
}
