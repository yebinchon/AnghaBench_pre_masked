
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream; scalar_t__ suppress_output; } ;
typedef TYPE_1__ tui_out_data ;
struct ui_out {int dummy; } ;


 int FUNC_0 (int,int ) ;
 TYPE_1__* FUNC_1 (struct ui_out*) ;

void
FUNC_2 (struct ui_out *VAR_0, int VAR_1)
{
  tui_out_data *VAR_2 = FUNC_1 (VAR_0);
  if (VAR_2->suppress_output)
    return;
  FUNC_0 (VAR_1, VAR_2->stream);
}
