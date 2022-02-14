
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out_level {int type; scalar_t__ field_count; } ;
struct ui_out {scalar_t__ level; } ;
typedef enum ui_out_type { ____Placeholder_ui_out_type } ui_out_type ;


 scalar_t__ VAR_0 ;
 struct ui_out_level* FUNC_0 (struct ui_out*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (struct ui_out *VAR_1,
     enum ui_out_type VAR_2,
     const char *VAR_3)
{
  struct ui_out_level *VAR_4;

  VAR_1->level++;
  FUNC_1 (VAR_1->level >= 0 && VAR_1->level < VAR_0);
  VAR_4 = FUNC_0 (VAR_1);
  VAR_4->field_count = 0;
  VAR_4->type = VAR_2;
  return VAR_1->level;
}
