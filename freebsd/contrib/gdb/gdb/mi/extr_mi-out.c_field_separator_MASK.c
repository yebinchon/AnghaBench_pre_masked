
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct TYPE_3__ {int buffer; scalar_t__ suppress_field_separator; } ;
typedef TYPE_1__ mi_out_data ;


 int FUNC_0 (char,int ) ;
 TYPE_1__* FUNC_1 (struct ui_out*) ;

__attribute__((used)) static void
FUNC_2 (struct ui_out *VAR_0)
{
  mi_out_data *VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1->suppress_field_separator)
    VAR_1->suppress_field_separator = 0;
  else
    FUNC_0 (',', VAR_1->buffer);
}
