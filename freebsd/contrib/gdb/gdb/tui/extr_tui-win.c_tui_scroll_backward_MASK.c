
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;
struct tui_win_info {TYPE_1__ generic; } ;


 int VAR_0 ;
 struct tui_win_info* VAR_1 ;
 struct tui_win_info* VAR_2 ;
 struct tui_win_info* VAR_3 ;
 struct tui_win_info* VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

void
FUNC_3 (struct tui_win_info * VAR_5, int VAR_6)
{
  if (VAR_5 != VAR_1)
    {
      int VAR_7 = VAR_6;

      if (VAR_6 == 0)
 VAR_7 = VAR_5->generic.height - 3;






      if (VAR_5 == VAR_4)
 FUNC_2 (VAR_0, VAR_7);
      else if (VAR_5 == VAR_3)
 FUNC_1 (VAR_0, VAR_7);
      else if (VAR_5 == VAR_2)
 FUNC_0 (VAR_0, VAR_7);
    }
}
