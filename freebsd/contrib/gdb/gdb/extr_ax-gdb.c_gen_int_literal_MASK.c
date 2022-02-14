
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct axs_value {struct type* type; int kind; } ;
struct agent_expr {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct agent_expr*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct agent_expr *VAR_1, struct axs_value *VAR_2, LONGEST VAR_3,
   struct type *VAR_4)
{
  FUNC_0 (VAR_1, VAR_3);
  VAR_2->kind = VAR_0;
  VAR_2->type = VAR_4;
}
