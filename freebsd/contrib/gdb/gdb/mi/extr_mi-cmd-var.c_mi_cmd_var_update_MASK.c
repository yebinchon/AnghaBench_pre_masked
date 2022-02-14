
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*) ;
 struct cleanup* FUNC_2 (int ,char*) ;
 struct cleanup* FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 struct varobj* FUNC_5 (char*) ;
 int FUNC_6 (struct varobj***) ;
 int FUNC_7 (struct varobj*) ;
 int FUNC_8 (struct varobj**) ;

enum mi_cmd_result
FUNC_9 (char *VAR_2, char **VAR_3, int VAR_4)
{
  struct varobj *VAR_5;
  struct varobj **VAR_6;
  struct varobj **VAR_7;
  struct cleanup *VAR_8;
  char *VAR_9;
  int VAR_10;

  if (VAR_4 != 1)
    FUNC_1 ("mi_cmd_var_update: Usage: NAME.");

  VAR_9 = VAR_3[0];




  if ((*VAR_9 == '*') && (*(VAR_9 + 1) == '\0'))
    {
      VAR_10 = FUNC_6 (&VAR_6);
      if (FUNC_4 (VAR_1) <= 1)
        VAR_8 = FUNC_3 (VAR_1, "changelist");
      else
        VAR_8 = FUNC_2 (VAR_1, "changelist");
      if (VAR_10 <= 0)
 {
   FUNC_0 (VAR_8);
   return VAR_0;
 }
      VAR_7 = VAR_6;
      while (*VAR_7 != ((void*)0))
 {
   FUNC_7 (*VAR_7);
   VAR_7++;
 }
      FUNC_8 (VAR_6);
      FUNC_0 (VAR_8);
    }
  else
    {

      VAR_5 = FUNC_5 (VAR_9);
      if (VAR_5 == ((void*)0))
 FUNC_1 ("mi_cmd_var_update: Variable object not found");

      if (FUNC_4 (VAR_1) <= 1)
        VAR_8 = FUNC_3 (VAR_1, "changelist");
      else
        VAR_8 = FUNC_2 (VAR_1, "changelist");
      FUNC_7 (VAR_5);
      FUNC_0 (VAR_8);
    }
    return VAR_0;
}
