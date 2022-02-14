
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axs_value {int type; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct agent_expr*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct agent_expr*,struct axs_value*) ;

__attribute__((used)) static void
FUNC_4 (struct agent_expr *VAR_4, struct axs_value *VAR_5)
{
  if (FUNC_0 (VAR_5->type) != VAR_0
      && FUNC_0 (VAR_5->type) != VAR_1)
    FUNC_2 ("Illegal type of operand to `!'.");

  FUNC_3 (VAR_4, VAR_5);
  FUNC_1 (VAR_4, VAR_2);
  VAR_5->type = VAR_3;
}
