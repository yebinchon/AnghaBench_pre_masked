
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; } ;
struct tui_gen_win_info {int type; int width; int height; int viewport_height; TYPE_1__ origin; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct tui_gen_win_info * VAR_1, enum tui_win_type VAR_2,
                 int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7 = VAR_3;

  VAR_1->type = VAR_2;
  VAR_1->width = VAR_4;
  VAR_1->height = VAR_7;
  if (VAR_7 > 1)
    {
      VAR_1->viewport_height = VAR_7 - 1;
      if (VAR_1->type != VAR_0)
 VAR_1->viewport_height--;
    }
  else
    VAR_1->viewport_height = 1;
  VAR_1->origin.x = VAR_5;
  VAR_1->origin.y = VAR_6;

  return;
}
