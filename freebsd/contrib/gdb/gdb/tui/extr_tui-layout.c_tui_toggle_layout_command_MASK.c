
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_layout_def {scalar_t__ display_mode; int split; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tui_layout_def*) ;
 struct tui_layout_def* FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (char *VAR_2, int VAR_3)
{
  struct tui_layout_def * VAR_4 = FUNC_2 ();


  FUNC_0 ();
  if (VAR_4->display_mode == VAR_1)
    VAR_4->display_mode = VAR_0;
  else
    VAR_4->display_mode = VAR_1;

  if (!VAR_4->split)
    FUNC_1 (VAR_4);
}
