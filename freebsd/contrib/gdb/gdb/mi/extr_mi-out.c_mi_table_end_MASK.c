
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ mi_out_data ;


 int FUNC_0 (struct ui_out*,int ) ;
 TYPE_1__* FUNC_1 (struct ui_out*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2 (struct ui_out *VAR_2)
{
  mi_out_data *VAR_3 = FUNC_1 (VAR_2);
  VAR_3->suppress_output = 0;
  FUNC_0 (VAR_2, VAR_0);
  FUNC_0 (VAR_2, VAR_1);
}
