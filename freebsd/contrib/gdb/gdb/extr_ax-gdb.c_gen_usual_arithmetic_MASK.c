
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct axs_value {struct type* type; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct agent_expr*,int ) ;
 struct type* VAR_2 ;
 int FUNC_2 (struct agent_expr*,struct type*,struct type*) ;
 scalar_t__ FUNC_3 (struct type*,struct type*) ;
 struct type* FUNC_4 (struct type*,struct type*) ;

__attribute__((used)) static void
FUNC_5 (struct agent_expr *VAR_3, struct axs_value *VAR_4,
        struct axs_value *VAR_5)
{

  if (FUNC_0 (VAR_4->type) == VAR_0
      && FUNC_0 (VAR_5->type) == VAR_0)
    {





      struct type *VAR_6 = FUNC_4 (VAR_2,
          FUNC_4 (VAR_4->type, VAR_5->type));


      FUNC_2 (VAR_3, VAR_5->type, VAR_6);




      if (FUNC_3 (VAR_4->type, VAR_6))
 {
   FUNC_1 (VAR_3, VAR_1);
   FUNC_2 (VAR_3, VAR_4->type, VAR_6);
   FUNC_1 (VAR_3, VAR_1);
 }

      VAR_4->type = VAR_5->type = VAR_6;
    }
}
