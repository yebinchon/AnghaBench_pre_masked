
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_layout_def {size_t display_mode; int regs_display_type; scalar_t__ split; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_2 (struct tui_layout_def * VAR_6)
{
  if (VAR_6->split)
    {
      FUNC_0 (VAR_2, VAR_4);
      FUNC_1 (VAR_5[VAR_6->display_mode]);
    }
  else
    {
      if (VAR_6->display_mode == VAR_3)
 FUNC_0 (VAR_1, VAR_4);
      else
 FUNC_0 (VAR_0, VAR_6->regs_display_type);
    }
}
