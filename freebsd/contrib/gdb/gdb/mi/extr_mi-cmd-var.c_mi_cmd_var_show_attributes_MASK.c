
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct varobj*) ;
 struct varobj* FUNC_3 (char*) ;

enum mi_cmd_result
FUNC_4 (char *VAR_2, char **VAR_3, int VAR_4)
{
  int VAR_5;
  char *VAR_6;
  struct varobj *VAR_7;

  if (VAR_4 != 1)
    FUNC_0 ("mi_cmd_var_show_attributes: Usage: NAME.");


  VAR_7 = FUNC_3 (VAR_3[0]);
  if (VAR_7 == ((void*)0))
    FUNC_0 ("mi_cmd_var_show_attributes: Variable object not found");

  VAR_5 = FUNC_2 (VAR_7);

  if (VAR_5 & 0x00000001)
    VAR_6 = "editable";
  else
    VAR_6 = "noneditable";

  FUNC_1 (VAR_1, "attr", VAR_6);
  return VAR_0;
}
