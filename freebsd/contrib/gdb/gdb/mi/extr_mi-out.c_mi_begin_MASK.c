
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ mi_out_data ;
typedef enum ui_out_type { ____Placeholder_ui_out_type } ui_out_type ;


 int FUNC_0 (struct ui_out*,char const*,int) ;
 TYPE_1__* FUNC_1 (struct ui_out*) ;

void
FUNC_2 (struct ui_out *VAR_0,
   enum ui_out_type VAR_1,
   int VAR_2,
   const char *VAR_3)
{
  mi_out_data *VAR_4 = FUNC_1 (VAR_0);
  if (VAR_4->suppress_output)
    return;
  FUNC_0 (VAR_0, VAR_3, VAR_1);
}
