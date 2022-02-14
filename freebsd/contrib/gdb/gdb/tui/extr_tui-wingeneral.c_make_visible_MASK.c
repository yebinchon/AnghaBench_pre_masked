
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_gen_win_info {scalar_t__ type; int * handle; scalar_t__ is_visible; } ;
typedef int WINDOW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tui_gen_win_info*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (struct tui_gen_win_info *VAR_3, int VAR_4)
{

  if (VAR_3->type == VAR_0)
    return;

  if (VAR_4)
    {
      if (!VAR_3->is_visible)
 {
   FUNC_1 (VAR_3,
      (VAR_3->type != VAR_0
       && !FUNC_2 (VAR_3->type)));
   VAR_3->is_visible = VAR_2;
 }
    }
  else if (!VAR_4 &&
    VAR_3->is_visible && VAR_3->handle != (WINDOW *) ((void*)0))
    {
      VAR_3->is_visible = VAR_1;
      FUNC_0 (VAR_3->handle);
      VAR_3->handle = (WINDOW *) ((void*)0);
    }

  return;
}
