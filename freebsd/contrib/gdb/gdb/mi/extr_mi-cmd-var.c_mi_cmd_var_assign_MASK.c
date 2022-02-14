
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
 int FUNC_2 (struct varobj*) ;
 struct varobj* FUNC_3 (char*) ;
 int FUNC_4 (struct varobj*) ;
 int FUNC_5 (struct varobj*,char*) ;
 char* FUNC_6 (char*) ;

enum mi_cmd_result
FUNC_7 (char *VAR_2, char **VAR_3, int VAR_4)
{
  struct varobj *VAR_5;
  char *VAR_6;

  if (VAR_4 != 2)
    FUNC_0 ("mi_cmd_var_assign: Usage: NAME EXPRESSION.");


  VAR_5 = FUNC_3 (VAR_3[0]);
  if (VAR_5 == ((void*)0))
    FUNC_0 ("mi_cmd_var_assign: Variable object not found");


  if (!(FUNC_2 (VAR_5) & 0x00000001))
    FUNC_0 ("mi_cmd_var_assign: Variable object is not editable");

  VAR_6 = FUNC_6 (VAR_3[1]);

  if (!FUNC_5 (VAR_5, VAR_6))
    FUNC_0 ("mi_cmd_var_assign: Could not assign expression to varible object");

  FUNC_1 (VAR_1, "value", FUNC_4 (VAR_5));
  return VAR_0;
}
