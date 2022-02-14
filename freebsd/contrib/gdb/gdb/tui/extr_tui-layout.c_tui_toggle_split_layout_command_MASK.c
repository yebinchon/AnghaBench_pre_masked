
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_layout_def {int split; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct tui_layout_def*) ;
 struct tui_layout_def* FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct tui_layout_def * VAR_2 = FUNC_2 ();


  FUNC_0 ();
  VAR_2->split = (!VAR_2->split);
  FUNC_1 (VAR_2);
}
