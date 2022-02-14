
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {scalar_t__ level; } ;
typedef enum ui_out_type { ____Placeholder_ui_out_type } ui_out_type ;
struct TYPE_2__ {int type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct ui_out*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (struct ui_out *VAR_1,
    enum ui_out_type VAR_2)
{

  FUNC_1 (VAR_1->level > 0 && VAR_1->level < VAR_0);
  FUNC_1 (FUNC_0 (VAR_1)->type == VAR_2);
  VAR_1->level--;
  return VAR_1->level + 1;
}
