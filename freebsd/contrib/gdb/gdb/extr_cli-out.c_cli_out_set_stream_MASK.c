
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct ui_file {int dummy; } ;
struct TYPE_3__ {struct ui_file* stream; } ;
typedef TYPE_1__ cli_out_data ;


 TYPE_1__* FUNC_0 (struct ui_out*) ;

struct ui_file *
FUNC_1 (struct ui_out *VAR_0, struct ui_file *VAR_1)
{
  cli_out_data *VAR_2 = FUNC_0 (VAR_0);
  struct ui_file *VAR_3 = VAR_2->stream;
  VAR_2->stream = VAR_1;
  return VAR_3;
}
