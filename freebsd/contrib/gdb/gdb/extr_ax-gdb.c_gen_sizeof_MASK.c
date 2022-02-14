
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union exp_element {int dummy; } exp_element ;
struct axs_value {int type; int kind; } ;
struct agent_expr {int len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct agent_expr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (union exp_element**,struct agent_expr*,struct axs_value*) ;

__attribute__((used)) static void
FUNC_3 (union exp_element **VAR_2, struct agent_expr *VAR_3,
     struct axs_value *VAR_4)
{





  int VAR_5 = VAR_3->len;
  FUNC_2 (VAR_2, VAR_3, VAR_4);


  VAR_3->len = VAR_5;

  FUNC_1 (VAR_3, FUNC_0 (VAR_4->type));
  VAR_4->kind = VAR_0;
  VAR_4->type = VAR_1;
}
