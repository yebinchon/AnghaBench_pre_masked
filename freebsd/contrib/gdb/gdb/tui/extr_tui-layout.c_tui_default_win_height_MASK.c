
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; } ;
struct tui_win_info {TYPE_2__ generic; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;
struct TYPE_4__ {int height; } ;
struct TYPE_6__ {TYPE_1__ generic; } ;







 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 struct tui_win_info** VAR_1 ;

int
FUNC_1 (enum tui_win_type VAR_2, enum tui_layout_type VAR_3)
{
  int VAR_4;

  if (VAR_1[VAR_2] != (struct tui_win_info *) ((void*)0))
    VAR_4 = VAR_1[VAR_2]->generic.height;
  else
    {
      switch (VAR_3)
 {
 case 130:
 case 132:
   if (VAR_0 == ((void*)0))
     VAR_4 = FUNC_0 () / 2;
   else
     VAR_4 = FUNC_0 () - VAR_0->generic.height;
   break;
 case 128:
 case 129:
 case 131:
   if (VAR_0 == ((void*)0))
     VAR_4 = FUNC_0 () / 3;
   else
     VAR_4 = (FUNC_0 () - VAR_0->generic.height) / 2;
   break;
 default:
   VAR_4 = 0;
   break;
 }
    }

  return VAR_4;
}
