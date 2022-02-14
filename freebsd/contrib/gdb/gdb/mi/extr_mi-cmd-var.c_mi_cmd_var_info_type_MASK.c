
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 struct varobj* FUNC_2 (char*) ;
 int FUNC_3 (struct varobj*) ;

enum mi_cmd_result
FUNC_4 (char *VAR_2, char **VAR_3, int VAR_4)
{
  struct varobj *VAR_5;

  if (VAR_4 != 1)
    FUNC_0 ("mi_cmd_var_info_type: Usage: NAME.");


  VAR_5 = FUNC_2 (VAR_3[0]);
  if (VAR_5 == ((void*)0))
    FUNC_0 ("mi_cmd_var_info_type: Variable object not found");

  FUNC_1 (VAR_1, "type", FUNC_3 (VAR_5));
  return VAR_0;
}
