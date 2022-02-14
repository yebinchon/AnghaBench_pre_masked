
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct ui_out {int dummy; } ;
struct TYPE_3__ {int stream; scalar_t__ suppress_output; } ;
typedef TYPE_1__ cli_out_data ;


 TYPE_1__* FUNC_0 (struct ui_out*) ;
 int FUNC_1 (struct ui_out*) ;
 int FUNC_2 (int ,char const*,int ) ;

void
FUNC_3 (struct ui_out *VAR_0, int VAR_1,
      const char *VAR_2, va_list VAR_3)
{
  cli_out_data *VAR_4 = FUNC_0 (VAR_0);
  if (VAR_4->suppress_output)
    return;
  if (FUNC_1 (VAR_0) >= VAR_1)
    FUNC_2 (VAR_4->stream, VAR_2, VAR_3);
}
