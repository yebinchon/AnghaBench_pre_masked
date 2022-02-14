
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct tui_win_info {TYPE_1__ generic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tui_win_info*) ;
 int FUNC_1 (struct tui_win_info*) ;
 int FUNC_2 (struct tui_win_info*) ;
 struct tui_win_info* FUNC_3 () ;

void
FUNC_4 (struct tui_win_info * VAR_1)
{
  if (VAR_1 != ((void*)0))
    {
      struct tui_win_info * VAR_2 = FUNC_3 ();

      if (VAR_2 != ((void*)0)
   && VAR_2->generic.type != VAR_0)
 FUNC_2 (VAR_2);
      FUNC_1 (VAR_1);
      if (VAR_1->generic.type != VAR_0)
 FUNC_0 (VAR_1);
    }
}
