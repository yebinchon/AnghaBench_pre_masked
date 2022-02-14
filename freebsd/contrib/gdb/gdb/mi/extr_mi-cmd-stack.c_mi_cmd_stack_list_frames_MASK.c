
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*) ;
 struct frame_info* FUNC_3 () ;
 struct frame_info* FUNC_4 (struct frame_info*) ;
 struct cleanup* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct frame_info*,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

enum mi_cmd_result
FUNC_7 (char *VAR_5, char **VAR_6, int VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;
  struct cleanup *VAR_11;
  struct frame_info *VAR_12;

  if (!VAR_3)
    FUNC_2 ("mi_cmd_stack_list_frames: No stack.");

  if (VAR_7 > 2 || VAR_7 == 1)
    FUNC_2 ("mi_cmd_stack_list_frames: Usage: [FRAME_LOW FRAME_HIGH]");

  if (VAR_7 == 2)
    {
      VAR_8 = FUNC_0 (VAR_6[0]);
      VAR_9 = FUNC_0 (VAR_6[1]);
    }
  else
    {


      VAR_8 = -1;
      VAR_9 = -1;
    }




  for (VAR_10 = 0, VAR_12 = FUNC_3 ();
       VAR_12 && VAR_10 < VAR_8;
       VAR_10++, VAR_12 = FUNC_4 (VAR_12));

  if (VAR_12 == ((void*)0))
    FUNC_2 ("mi_cmd_stack_list_frames: Not enough frames in stack.");

  VAR_11 = FUNC_5 (VAR_4, "stack");



  for (;
       VAR_12 && (VAR_10 <= VAR_9 || VAR_9 == -1);
       VAR_10++, VAR_12 = FUNC_4 (VAR_12))
    {
      VAR_2;




      FUNC_6 (VAR_12 ,
   VAR_10 ,
   VAR_0 ,
   0 );
    }

  FUNC_1 (VAR_11);
  if (VAR_10 < VAR_9)
    FUNC_2 ("mi_cmd_stack_list_frames: Not enough frames in stack.");

  return VAR_1;
}
