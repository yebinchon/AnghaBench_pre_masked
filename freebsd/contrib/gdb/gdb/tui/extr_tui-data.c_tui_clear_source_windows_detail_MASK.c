
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tui_win_info {int dummy; } ;
struct TYPE_2__ {int count; scalar_t__* list; } ;


 int FUNC_0 (struct tui_win_info*) ;
 TYPE_1__* FUNC_1 () ;

void
FUNC_2 (void)
{
  int VAR_0;

  for (VAR_0 = 0; VAR_0 < (FUNC_1 ())->count; VAR_0++)
    FUNC_0 ((struct tui_win_info *) (FUNC_1 ())->list[VAR_0]);
}
