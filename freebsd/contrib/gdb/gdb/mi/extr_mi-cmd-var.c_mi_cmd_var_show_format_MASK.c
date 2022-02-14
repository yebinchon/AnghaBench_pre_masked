
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
typedef enum varobj_display_formats { ____Placeholder_varobj_display_formats } varobj_display_formats ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (struct varobj*) ;
 struct varobj* FUNC_3 (char*) ;

enum mi_cmd_result
FUNC_4 (char *VAR_3, char **VAR_4, int VAR_5)
{
  enum varobj_display_formats VAR_6;
  struct varobj *VAR_7;

  if (VAR_5 != 1)
    FUNC_0 ("mi_cmd_var_show_format: Usage: NAME.");


  VAR_7 = FUNC_3 (VAR_4[0]);
  if (VAR_7 == ((void*)0))
    FUNC_0 ("mi_cmd_var_show_format: Variable object not found");

  VAR_6 = FUNC_2 (VAR_7);


  FUNC_1 (VAR_1, "format", VAR_2[(int) VAR_6]);
  return VAR_0;
}
