
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axs_value {int type; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct agent_expr*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct agent_expr*,int ) ;
 int FUNC_4 (struct agent_expr*,struct axs_value*) ;
 int FUNC_5 (struct agent_expr*,struct axs_value*) ;

__attribute__((used)) static void
FUNC_6 (struct agent_expr *VAR_2, struct axs_value *VAR_3)
{
  if (FUNC_0 (VAR_3->type) != VAR_0)
    FUNC_2 ("Illegal type of operand to `~'.");

  FUNC_5 (VAR_2, VAR_3);
  FUNC_4 (VAR_2, VAR_3);
  FUNC_1 (VAR_2, VAR_1);
  FUNC_3 (VAR_2, VAR_3->type);
}
