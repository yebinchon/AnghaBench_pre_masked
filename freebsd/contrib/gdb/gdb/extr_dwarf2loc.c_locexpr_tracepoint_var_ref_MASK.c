
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct dwarf2_locexpr_baton {int size; int data; } ;
struct axs_value {int dummy; } ;
struct agent_expr {int dummy; } ;


 struct dwarf2_locexpr_baton* FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*,struct agent_expr*,struct axs_value*,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct symbol * VAR_0, struct agent_expr * VAR_1,
       struct axs_value * VAR_2)
{
  struct dwarf2_locexpr_baton *VAR_3 = FUNC_0 (VAR_0);

  FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3->data, VAR_3->size);
}
