
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
 struct cleanup* FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int) ;
 int VAR_4 ;
 int FUNC_6 (int *,char*) ;

enum mi_cmd_result
FUNC_7 (char *VAR_5, char **VAR_6, int VAR_7)
{
  int VAR_8, VAR_9, VAR_10;
  int VAR_11;
  struct cleanup *VAR_12;







  VAR_9 = VAR_2;

  VAR_12 = FUNC_3 (VAR_4, "changed-registers");

  if (VAR_7 == 0)
    {
      for (VAR_8 = 0;
    VAR_8 < VAR_9;
    VAR_8++)
 {
   if (FUNC_0 (VAR_8) == ((void*)0)
       || *(FUNC_0 (VAR_8)) == '\0')
     continue;
   VAR_10 = FUNC_4 (VAR_8);
   if (VAR_10 < 0)
     {
       FUNC_2 (VAR_12);
       FUNC_6 (&VAR_3,
    "mi_cmd_data_list_changed_registers: Unable to read register contents.");
       return VAR_1;
     }
   else if (VAR_10)
     FUNC_5 (VAR_4, ((void*)0), VAR_8);
 }
    }


  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
      VAR_8 = FUNC_1 (VAR_6[VAR_11]);

      if (VAR_8 >= 0
   && VAR_8 < VAR_9
   && FUNC_0 (VAR_8) != ((void*)0)
   && *FUNC_0 (VAR_8) != '\000')
 {
   VAR_10 = FUNC_4 (VAR_8);
   if (VAR_10 < 0)
     {
       FUNC_2 (VAR_12);
       FUNC_6 (&VAR_3,
    "mi_cmd_data_list_register_change: Unable to read register contents.");
       return VAR_1;
     }
   else if (VAR_10)
     FUNC_5 (VAR_4, ((void*)0), VAR_8);
 }
      else
 {
   FUNC_2 (VAR_12);
   FUNC_6 (&VAR_3, "bad register number");
   return VAR_1;
 }
    }
  FUNC_2 (VAR_12);
  return VAR_0;
}
