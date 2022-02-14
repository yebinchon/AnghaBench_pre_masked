
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ tui_out_data ;
struct ui_out {int dummy; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;


 int FUNC_0 (struct ui_out*,int,int,int,char const*,char*) ;
 TYPE_1__* FUNC_1 (struct ui_out*) ;

void
FUNC_2 (struct ui_out *VAR_0, int VAR_1, int VAR_2,
  enum ui_align VAR_3,
  const char *VAR_4)
{
  tui_out_data *VAR_5 = FUNC_1 (VAR_0);
  if (VAR_5->suppress_output)
    return;
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, "");
}
