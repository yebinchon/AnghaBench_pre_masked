
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct ui_file {int dummy; } ;
struct TYPE_3__ {int buffer; } ;
typedef TYPE_1__ mi_out_data ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ui_file*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct ui_out*) ;

void
FUNC_3 (struct ui_out *VAR_1,
     struct ui_file *VAR_2)
{
  mi_out_data *VAR_3 = FUNC_2 (VAR_1);
  FUNC_0 (VAR_3->buffer, VAR_0, VAR_2);
  FUNC_1 (VAR_3->buffer);
}
