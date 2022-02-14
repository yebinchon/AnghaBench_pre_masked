
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;
struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ cli_out_data ;


 int FUNC_0 (struct ui_out*,int,int,int,char const*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct ui_out*) ;

void
FUNC_3 (struct ui_out *VAR_0, int VAR_1, int VAR_2,
        enum ui_align VAR_3,
        const char *VAR_4, int VAR_5)
{
  char VAR_6[20];

  cli_out_data *VAR_7 = FUNC_2 (VAR_0);
  if (VAR_7->suppress_output)
    return;
  FUNC_1 (VAR_6, "%d", VAR_5);
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
}
