
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct TYPE_3__ {scalar_t__ suppress_output; } ;
typedef TYPE_1__ mi_out_data ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;


 int FUNC_0 (struct ui_out*,int ) ;
 int FUNC_1 (struct ui_out*,int ,int ,int ,char*,int) ;
 int FUNC_2 (struct ui_out*,int ,int,int,char*,char const*) ;
 int FUNC_3 (struct ui_out*,int *,int ) ;
 TYPE_1__* FUNC_4 (struct ui_out*) ;
 int VAR_0 ;

void
FUNC_5 (struct ui_out *VAR_1, int VAR_2, enum ui_align VAR_3,
   const char *VAR_4,
   const char *VAR_5)
{
  mi_out_data *VAR_6 = FUNC_4 (VAR_1);
  if (VAR_6->suppress_output)
    return;
  FUNC_3 (VAR_1, ((void*)0), VAR_0);
  FUNC_1 (VAR_1, 0, 0, 0, "width", VAR_2);
  FUNC_1 (VAR_1, 0, 0, 0, "alignment", VAR_3);
  FUNC_2 (VAR_1, 0, 0, 0, "col_name", VAR_4);
  FUNC_2 (VAR_1, 0, VAR_2, VAR_3, "colhdr", VAR_5);
  FUNC_0 (VAR_1, VAR_0);
}
