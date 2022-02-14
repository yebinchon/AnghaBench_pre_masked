
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
typedef enum varobj_display_formats { ____Placeholder_varobj_display_formats } varobj_display_formats ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 struct varobj* FUNC_4 (char*) ;
 int FUNC_5 (struct varobj*,int) ;
 char* FUNC_6 (char*) ;

enum mi_cmd_result
FUNC_7 (char *VAR_8, char **VAR_9, int VAR_10)
{
  enum varobj_display_formats VAR_11;
  int VAR_12;
  struct varobj *VAR_13;
  char *VAR_14;

  if (VAR_10 != 2)
    FUNC_0 ("mi_cmd_var_set_format: Usage: NAME FORMAT.");


  VAR_13 = FUNC_4 (VAR_9[0]);

  if (VAR_13 == ((void*)0))
    FUNC_0 ("mi_cmd_var_set_format: Variable object not found");

  VAR_14 = FUNC_6 (VAR_9[1]);
  if (VAR_14 == ((void*)0))
    FUNC_0 ("mi_cmd_var_set_format: Must specify the format as: \"natural\", \"binary\", \"decimal\", \"hexadecimal\", or \"octal\"");

  VAR_12 = FUNC_1 (VAR_14);

  if (FUNC_2 (VAR_14, "natural", VAR_12) == 0)
    VAR_11 = VAR_3;
  else if (FUNC_2 (VAR_14, "binary", VAR_12) == 0)
    VAR_11 = VAR_0;
  else if (FUNC_2 (VAR_14, "decimal", VAR_12) == 0)
    VAR_11 = VAR_1;
  else if (FUNC_2 (VAR_14, "hexadecimal", VAR_12) == 0)
    VAR_11 = VAR_2;
  else if (FUNC_2 (VAR_14, "octal", VAR_12) == 0)
    VAR_11 = VAR_4;
  else
    FUNC_0 ("mi_cmd_var_set_format: Unknown display format: must be: \"natural\", \"binary\", \"decimal\", \"hexadecimal\", or \"octal\"");


  FUNC_5 (VAR_13, VAR_11);


  FUNC_3 (VAR_6, "format", VAR_7[(int) VAR_11]);
  return VAR_5;
}
