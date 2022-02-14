
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * handle; } ;
struct tui_win_info {TYPE_1__ generic; scalar_t__ can_highlight; } ;
struct tui_gen_win_info {int dummy; } ;
typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (struct tui_gen_win_info*,int ) ;
 int FUNC_1 (struct tui_win_info*,int) ;
 int FUNC_2 (int *) ;

void
FUNC_3 (struct tui_win_info * VAR_1)
{
  if (VAR_1 != ((void*)0)
      && VAR_1->can_highlight
      && VAR_1->generic.handle != (WINDOW *) ((void*)0))
    {
      FUNC_0 ((struct tui_gen_win_info *) VAR_1, VAR_0);
      FUNC_2 (VAR_1->generic.handle);
      FUNC_1 (VAR_1, 1);
    }
}
