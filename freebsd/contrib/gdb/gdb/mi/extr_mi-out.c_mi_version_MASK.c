
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct TYPE_3__ {int mi_version; } ;
typedef TYPE_1__ mi_out_data ;


 TYPE_1__* FUNC_0 (struct ui_out*) ;

int
FUNC_1 (struct ui_out *VAR_0)
{
  mi_out_data *VAR_1 = FUNC_0 (VAR_0);
  return VAR_1->mi_version;
}
