
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__* VAR_1 ;

int
FUNC_1 (enum tui_win_type VAR_2,
     enum tui_layout_type VAR_3)
{
  int VAR_4;

  VAR_4 = FUNC_0 (VAR_2, VAR_3);

  if (VAR_1[VAR_2] == VAR_0)
    VAR_4 -= 1;
  else
    VAR_4 -= 2;

  return VAR_4;
}
