
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union exp_element {int dummy; } exp_element ;
struct value {int type; } ;
struct type {int dummy; } ;
struct axs_value {scalar_t__ kind; struct type* type; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct value* FUNC_1 (union exp_element**) ;
 struct type* FUNC_2 (int ,struct type*,struct type*) ;
 struct type* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (union exp_element**,struct agent_expr*,struct axs_value*) ;
 int FUNC_6 (struct value*) ;

__attribute__((used)) static void
FUNC_7 (union exp_element **VAR_3, struct agent_expr *VAR_4,
     struct axs_value *VAR_5)
{
  struct axs_value VAR_6;


  FUNC_5 (VAR_3, VAR_4, &VAR_6);
  if (VAR_6 != VAR_1)
    FUNC_4 ("Left operand of `@' must be an object in memory.");


  {
    struct value *VAR_7 = FUNC_1 (VAR_3);
    int VAR_8;

    if (!VAR_7)
      FUNC_4 ("Right operand of `@' must be a constant, in agent expressions.");
    if (FUNC_0 (VAR_7->type) != VAR_0)
      FUNC_4 ("Right operand of `@' must be an integer.");
    VAR_8 = FUNC_6 (VAR_7);
    if (VAR_8 <= 0)
      FUNC_4 ("Right operand of `@' must be positive.");



    {


      struct type *VAR_9
      = FUNC_3 (0, VAR_2, 0, VAR_8 - 1);
      struct type *VAR_10 = FUNC_2 (0, VAR_6, VAR_9);

      VAR_5->kind = VAR_1;
      VAR_5->type = VAR_10;
    }
  }
}
