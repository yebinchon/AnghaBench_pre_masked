
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; scalar_t__ is_visible; } ;
struct tui_win_info {TYPE_1__ generic; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct tui_win_info** VAR_2 ;

struct tui_win_info *
FUNC_0 (struct tui_win_info * VAR_3)
{
  enum tui_win_type VAR_4 = VAR_3->generic.type;
  struct tui_win_info * VAR_5 = (struct tui_win_info *) ((void*)0);

  if (VAR_3->generic.type == VAR_0)
    VAR_4 = VAR_1;
  else
    VAR_4 = VAR_3->generic.type + 1;
  while (VAR_4 != VAR_3->generic.type && (VAR_5 == ((void*)0)))
    {
      if (VAR_2[VAR_4] && VAR_2[VAR_4]->generic.is_visible)
 VAR_5 = VAR_2[VAR_4];
      else
 {
   if (VAR_4 == VAR_0)
     VAR_4 = VAR_1;
   else
     VAR_4++;
 }
    }

  return VAR_5;
}
