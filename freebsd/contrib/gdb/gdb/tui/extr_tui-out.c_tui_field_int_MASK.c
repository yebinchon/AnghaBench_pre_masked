
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ start_of_line; int line; scalar_t__ suppress_output; } ;
typedef TYPE_1__ tui_out_data ;
struct ui_out {int dummy; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct ui_out*,int,int,int,char const*,char*) ;
 TYPE_1__* FUNC_3 (struct ui_out*) ;

void
FUNC_4 (struct ui_out *VAR_0, int VAR_1, int VAR_2,
        enum ui_align VAR_3,
        const char *VAR_4, int VAR_5)
{
  char VAR_6[20];

  tui_out_data *VAR_7 = FUNC_3 (VAR_0);
  if (VAR_7->suppress_output)
    return;


  if (VAR_7->start_of_line == 0 && FUNC_1 (VAR_4, "line") == 0)
    {
      VAR_7->start_of_line ++;
      VAR_7->line = VAR_5;
      return;
    }
  VAR_7->start_of_line ++;
  FUNC_0 (VAR_6, "%d", VAR_5);
  FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
}
