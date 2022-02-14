
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg; } ;
struct axs_value {int kind; TYPE_1__ u; int type; } ;
struct agent_expr {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct agent_expr*,int) ;
 int FUNC_2 (struct agent_expr*,int ) ;
 int FUNC_3 (struct agent_expr*,int ) ;



 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4 (struct agent_expr *VAR_3, struct axs_value *VAR_4)
{
  if (VAR_2)
    switch (VAR_4->kind)
      {
      case 128:


 FUNC_3 (VAR_3, VAR_0);
 break;

      case 130:
 {
   int VAR_5 = FUNC_0 (VAR_4->type);






   FUNC_1 (VAR_3, VAR_5);
   FUNC_3 (VAR_3, VAR_1);
 }
 break;

      case 129:



 FUNC_2 (VAR_3, VAR_4->u.reg);
 FUNC_3 (VAR_3, VAR_0);
 break;
      }
  else

    FUNC_3 (VAR_3, VAR_0);
}
