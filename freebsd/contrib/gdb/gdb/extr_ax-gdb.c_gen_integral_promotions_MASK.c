
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axs_value {void* type; } ;
struct agent_expr {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct agent_expr*,void*,void*) ;
 int FUNC_1 (void*,void*) ;

__attribute__((used)) static void
FUNC_2 (struct agent_expr *VAR_2, struct axs_value *VAR_3)
{
  if (!FUNC_1 (VAR_3->type, VAR_0))
    {
      FUNC_0 (VAR_2, VAR_3->type, VAR_0);
      VAR_3->type = VAR_0;
    }
  else if (!FUNC_1 (VAR_3->type, VAR_1))
    {
      FUNC_0 (VAR_2, VAR_3->type, VAR_1);
      VAR_3->type = VAR_1;
    }
}
