
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union exp_element {int dummy; } exp_element ;
struct expression {union exp_element* elts; } ;
struct cleanup {int dummy; } ;
struct axs_value {int dummy; } ;
struct agent_expr {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (union exp_element**,struct agent_expr*,struct axs_value*) ;
 struct cleanup* FUNC_2 (struct agent_expr*) ;
 struct agent_expr* FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;

struct agent_expr *
FUNC_4 (struct expression *VAR_1, struct axs_value *VAR_2)
{
  struct cleanup *VAR_3 = 0;
  struct agent_expr *VAR_4 = FUNC_3 (0);
  union exp_element *VAR_5;

  VAR_3 = FUNC_2 (VAR_4);

  VAR_5 = VAR_1->elts;
  VAR_0 = 0;
  FUNC_1 (&VAR_5, VAR_4, VAR_2);




  FUNC_0 (VAR_3);
  return VAR_4;
}
