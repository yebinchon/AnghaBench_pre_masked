
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct tui_win_info {TYPE_1__ generic; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;


 int FUNC_0 (struct tui_win_info*) ;
 scalar_t__ FUNC_1 (int) ;

struct tui_win_info *
FUNC_2 (enum tui_win_type VAR_0)
{
  struct tui_win_info * VAR_1 = (struct tui_win_info *) ((void*)0);

  VAR_1 = (struct tui_win_info *) FUNC_1 (sizeof (struct tui_win_info));
  if ((VAR_1 != ((void*)0)))
    {
      VAR_1->generic.type = VAR_0;
      FUNC_0 (VAR_1);
    }

  return VAR_1;
}
