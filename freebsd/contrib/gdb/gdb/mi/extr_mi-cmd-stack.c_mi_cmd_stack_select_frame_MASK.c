
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;

enum mi_cmd_result
FUNC_2 (char *VAR_2, char **VAR_3, int VAR_4)
{
  if (!VAR_1)
    FUNC_0 ("mi_cmd_stack_select_frame: No stack.");

  if (VAR_4 > 1)
    FUNC_0 ("mi_cmd_stack_select_frame: Usage: [FRAME_SPEC]");


  if (VAR_4 == 0)
    FUNC_1 (0, 1 );
  else
    FUNC_1 (VAR_3[0], 1 );
  return VAR_0;
}
