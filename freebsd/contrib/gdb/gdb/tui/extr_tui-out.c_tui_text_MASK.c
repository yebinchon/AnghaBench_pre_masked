
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; int stream; scalar_t__ start_of_line; scalar_t__ suppress_output; } ;
typedef TYPE_1__ tui_out_data ;
struct ui_out {int dummy; } ;


 int FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 TYPE_1__* FUNC_2 (struct ui_out*) ;

void
FUNC_3 (struct ui_out *VAR_0, const char *VAR_1)
{
  tui_out_data *VAR_2 = FUNC_2 (VAR_0);
  if (VAR_2->suppress_output)
    return;
  VAR_2->start_of_line ++;
  if (VAR_2->line > 0)
    {
      if (FUNC_1 (VAR_1, '\n') != 0)
        {
          VAR_2->line = -1;
          VAR_2->start_of_line = 0;
        }
      return;
    }
  if (FUNC_1 (VAR_1, '\n'))
    VAR_2->start_of_line = 0;
  FUNC_0 (VAR_1, VAR_2->stream);
}
