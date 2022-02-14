
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct ui_out {int dummy; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;
struct TYPE_3__ {int stream; scalar_t__ suppress_output; } ;
typedef TYPE_1__ cli_out_data ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct ui_out*) ;
 int FUNC_2 (int ,char const*,int ) ;

void
FUNC_3 (struct ui_out *VAR_1, int VAR_2,
        int VAR_3, enum ui_align VAR_4,
        const char *VAR_5,
        const char *VAR_6,
        va_list VAR_7)
{
  cli_out_data *VAR_8 = FUNC_1 (VAR_1);
  if (VAR_8->suppress_output)
    return;

  FUNC_2 (VAR_8->stream, VAR_6, VAR_7);

  if (VAR_4 != VAR_0)
    FUNC_0 ();
}
