
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*) ;
 struct frame_info* FUNC_3 () ;
 struct frame_info* FUNC_4 (struct frame_info*) ;
 int FUNC_5 (int ,int,struct frame_info*) ;
 struct cleanup* FUNC_6 (int ,char*) ;
 struct cleanup* FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_2 ;

enum mi_cmd_result
FUNC_9 (char *VAR_3, char **VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7;
  int VAR_8;
  struct frame_info *VAR_9;
  struct cleanup *VAR_10;

  if (VAR_5 < 1 || VAR_5 > 3 || VAR_5 == 2)
    FUNC_2 ("mi_cmd_stack_list_args: Usage: PRINT_VALUES [FRAME_LOW FRAME_HIGH]");

  if (VAR_5 == 3)
    {
      VAR_6 = FUNC_0 (VAR_4[1]);
      VAR_7 = FUNC_0 (VAR_4[2]);
    }
  else
    {


      VAR_6 = -1;
      VAR_7 = -1;
    }




  for (VAR_8 = 0, VAR_9 = FUNC_3 ();
       VAR_9 && VAR_8 < VAR_6;
       VAR_8++, VAR_9 = FUNC_4 (VAR_9));

  if (VAR_9 == ((void*)0))
    FUNC_2 ("mi_cmd_stack_list_args: Not enough frames in stack.");

  VAR_10 = FUNC_6 (VAR_2, "stack-args");



  for (;
       VAR_9 && (VAR_8 <= VAR_7 || VAR_7 == -1);
       VAR_8++, VAR_9 = FUNC_4 (VAR_9))
    {
      struct cleanup *VAR_11;
      VAR_1;
      VAR_11 = FUNC_7 (VAR_2, "frame");
      FUNC_8 (VAR_2, "level", VAR_8);
      FUNC_5 (0, FUNC_0 (VAR_4[0]), VAR_9);
      FUNC_1 (VAR_11);
    }

  FUNC_1 (VAR_10);
  if (VAR_8 < VAR_7)
    FUNC_2 ("mi_cmd_stack_list_args: Not enough frames in stack.");

  return VAR_0;
}
