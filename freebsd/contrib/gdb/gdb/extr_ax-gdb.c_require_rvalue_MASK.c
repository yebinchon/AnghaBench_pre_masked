
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg; } ;
struct axs_value {int kind; int type; TYPE_1__ u; } ;
struct agent_expr {int dummy; } ;


 int FUNC_0 (struct agent_expr*,int ) ;



 int FUNC_1 (struct agent_expr*,int ) ;
 int FUNC_2 (struct agent_expr*,int ) ;

__attribute__((used)) static void
FUNC_3 (struct agent_expr *VAR_0, struct axs_value *VAR_1)
{
  switch (VAR_1->kind)
    {
    case 128:

      break;

    case 130:

      FUNC_2 (VAR_0, VAR_1->type);
      break;

    case 129:





      FUNC_0 (VAR_0, VAR_1->u.reg);
      FUNC_1 (VAR_0, VAR_1->type);
      break;
    }

  VAR_1->kind = 128;
}
