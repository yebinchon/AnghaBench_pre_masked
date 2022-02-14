
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
typedef enum ui_out_type { ____Placeholder_ui_out_type } ui_out_type ;
struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ cli_out_data ;


 TYPE_1__* FUNC_0 (struct ui_out*) ;

void
FUNC_1 (struct ui_out *VAR_0,
  enum ui_out_type VAR_1,
  int VAR_2)
{
  cli_out_data *VAR_3 = FUNC_0 (VAR_0);
  if (VAR_3->suppress_output)
    return;
}
