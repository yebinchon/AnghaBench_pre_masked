
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int suppress_output; } ;
typedef TYPE_1__ tui_out_data ;
struct ui_out {int dummy; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct ui_out*) ;

void
FUNC_2 (struct ui_out *VAR_0, int VAR_1,
   int VAR_2,
   const char *VAR_3)
{
  tui_out_data *VAR_4 = FUNC_1 (VAR_0);
  if (VAR_2 == 0)
    VAR_4->suppress_output = 1;
  else


    FUNC_0 (VAR_4->suppress_output == 0);
}
