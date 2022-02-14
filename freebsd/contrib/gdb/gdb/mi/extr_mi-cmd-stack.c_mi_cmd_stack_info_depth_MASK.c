
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct frame_info* FUNC_2 () ;
 struct frame_info* FUNC_3 (struct frame_info*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_3 ;

enum mi_cmd_result
FUNC_5 (char *VAR_4, char **VAR_5, int VAR_6)
{
  int VAR_7;
  int VAR_8;
  struct frame_info *VAR_9;

  if (!VAR_2)
    FUNC_1 ("mi_cmd_stack_info_depth: No stack.");

  if (VAR_6 > 1)
    FUNC_1 ("mi_cmd_stack_info_depth: Usage: [MAX_DEPTH]");

  if (VAR_6 == 1)
    VAR_7 = FUNC_0 (VAR_5[0]);
  else


    VAR_7 = -1;

  for (VAR_8 = 0, VAR_9 = FUNC_2 ();
       VAR_9 && (VAR_8 < VAR_7 || VAR_7 == -1);
       VAR_8++, VAR_9 = FUNC_3 (VAR_9))
    VAR_1;

  FUNC_4 (VAR_3, "depth", VAR_8);

  return VAR_0;
}
