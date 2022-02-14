
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;
struct TYPE_3__ {int is_visible; } ;
struct TYPE_4__ {TYPE_1__ generic; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__** VAR_1 ;

int
FUNC_0 (enum tui_win_type VAR_2)
{
  if (VAR_0 == 0)
    return 0;

  if (VAR_1[VAR_2] == 0)
    return 0;

  return VAR_1[VAR_2]->generic.is_visible;
}
