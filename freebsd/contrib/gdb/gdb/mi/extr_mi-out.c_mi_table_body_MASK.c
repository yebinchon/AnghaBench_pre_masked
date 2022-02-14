
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ mi_out_data ;


 int FUNC_0 (struct ui_out*,int ) ;
 int FUNC_1 (struct ui_out*,char*,int ) ;
 TYPE_1__* FUNC_2 (struct ui_out*) ;
 int VAR_0 ;

void
FUNC_3 (struct ui_out *VAR_1)
{
  mi_out_data *VAR_2 = FUNC_2 (VAR_1);
  if (VAR_2->suppress_output)
    return;

  FUNC_0 (VAR_1, VAR_0);
  FUNC_1 (VAR_1, "body", VAR_0);
}
