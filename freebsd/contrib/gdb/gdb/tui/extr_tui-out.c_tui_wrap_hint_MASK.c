
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ tui_out_data ;
struct ui_out {int dummy; } ;


 TYPE_1__* FUNC_0 (struct ui_out*) ;
 int FUNC_1 (char*) ;

void
FUNC_2 (struct ui_out *VAR_0, char *VAR_1)
{
  tui_out_data *VAR_2 = FUNC_0 (VAR_0);
  if (VAR_2->suppress_output)
    return;
  FUNC_1 (VAR_1);
}
