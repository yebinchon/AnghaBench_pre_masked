
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int handle; } ;
struct tui_win_info {TYPE_2__ generic; } ;
struct TYPE_4__ {scalar_t__ is_visible; } ;
struct TYPE_6__ {TYPE_1__ generic; } ;


 struct tui_win_info* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 struct tui_win_info* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tui_win_info*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6 (int VAR_3, int VAR_4)
{
  struct tui_win_info * VAR_5;

  if (!VAR_2)
    FUNC_3 (0 , 0 );

  VAR_5 = FUNC_1 (FUNC_5 ());
  if (VAR_5)
    {
      FUNC_4 (VAR_5);
      if (VAR_1 && VAR_1->generic.is_visible)
        FUNC_2 ();
      FUNC_0 (VAR_0->generic.handle, (VAR_5 != VAR_0));
    }
  return 0;
}
