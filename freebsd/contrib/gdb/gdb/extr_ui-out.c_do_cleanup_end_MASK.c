
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out_end_cleanup_data {int type; int uiout; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ui_out_end_cleanup_data*) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_0)
{
  struct ui_out_end_cleanup_data *VAR_1 = VAR_0;
  FUNC_0 (VAR_1->uiout, VAR_1->type);
  FUNC_1 (VAR_1);
}
