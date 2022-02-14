
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union exp_element {int dummy; } exp_element ;
struct expression {union exp_element* elts; } ;
struct cleanup {int dummy; } ;
struct axs_value {int dummy; } ;
struct agent_expr {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct agent_expr*,int ) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (union exp_element**,struct agent_expr*,struct axs_value*) ;
 int FUNC_3 (struct agent_expr*,struct axs_value*) ;
 struct cleanup* FUNC_4 (struct agent_expr*) ;
 struct agent_expr* FUNC_5 (int ) ;
 int VAR_1 ;

struct agent_expr *
FUNC_6 (CORE_ADDR VAR_2, struct expression *VAR_3)
{
  struct cleanup *VAR_4 = 0;
  struct agent_expr *VAR_5 = FUNC_5 (VAR_2);
  union exp_element *VAR_6;
  struct axs_value VAR_7;

  VAR_4 = FUNC_4 (VAR_5);

  VAR_6 = VAR_3->elts;
  VAR_1 = 1;
  FUNC_2 (&VAR_6, VAR_5, &VAR_7);


  FUNC_3 (VAR_5, &VAR_7);


  FUNC_0 (VAR_5, VAR_0);




  FUNC_1 (VAR_4);
  return VAR_5;
}
