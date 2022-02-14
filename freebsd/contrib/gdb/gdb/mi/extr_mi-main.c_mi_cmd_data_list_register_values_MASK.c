
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (int,int) ;
 struct cleanup* FUNC_4 (int ,char*) ;
 struct cleanup* FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_7 (int *,char*) ;

enum mi_cmd_result
FUNC_8 (char *VAR_6, char **VAR_7, int VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12;
  int VAR_13;
  struct cleanup *VAR_14, *VAR_15;







  VAR_10 = VAR_2;

  if (VAR_8 == 0)
    {
      FUNC_7 (&VAR_3,
   "mi_cmd_data_list_register_values: Usage: -data-list-register-values <format> [<regnum1>...<regnumN>]");
      return VAR_1;
    }

  VAR_11 = (int) VAR_7[0][0];

  if (!VAR_4)
    {
      FUNC_7 (&VAR_3,
   "mi_cmd_data_list_register_values: No registers.");
      return VAR_1;
    }

  VAR_14 = FUNC_4 (VAR_5, "register-values");

  if (VAR_8 == 1)
    {
      for (VAR_9 = 0;
    VAR_9 < VAR_10;
    VAR_9++)
 {
   if (FUNC_0 (VAR_9) == ((void*)0)
       || *(FUNC_0 (VAR_9)) == '\0')
     continue;
   VAR_15 = FUNC_5 (VAR_5, ((void*)0));
   FUNC_6 (VAR_5, "number", VAR_9);
   VAR_12 = FUNC_3 (VAR_9, VAR_11);
   if (VAR_12 == -1)
     {
       FUNC_2 (VAR_14);
       return VAR_1;
     }
   FUNC_2 (VAR_15);
 }
    }


  for (VAR_13 = 1; VAR_13 < VAR_8; VAR_13++)
    {
      VAR_9 = FUNC_1 (VAR_7[VAR_13]);

      if (VAR_9 >= 0
   && VAR_9 < VAR_10
   && FUNC_0 (VAR_9) != ((void*)0)
   && *FUNC_0 (VAR_9) != '\000')
 {
   VAR_15 = FUNC_5 (VAR_5, ((void*)0));
   FUNC_6 (VAR_5, "number", VAR_9);
   VAR_12 = FUNC_3 (VAR_9, VAR_11);
   if (VAR_12 == -1)
     {
       FUNC_2 (VAR_14);
       return VAR_1;
     }
   FUNC_2 (VAR_15);
 }
      else
 {
   FUNC_2 (VAR_14);
   FUNC_7 (&VAR_3, "bad register number");
   return VAR_1;
 }
    }
  FUNC_2 (VAR_14);
  return VAR_0;
}
