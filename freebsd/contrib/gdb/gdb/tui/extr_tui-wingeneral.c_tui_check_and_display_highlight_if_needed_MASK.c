
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct tui_win_info {scalar_t__ is_highlighted; TYPE_1__ generic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tui_win_info*) ;
 int FUNC_1 (struct tui_win_info*) ;

void
FUNC_2 (struct tui_win_info * VAR_1)
{
  if (VAR_1 != ((void*)0) && VAR_1->generic.type != VAR_0)
    {
      if (VAR_1->is_highlighted)
 FUNC_0 (VAR_1);
      else
 FUNC_1 (VAR_1);

    }
  return;
}
