
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axs_value {int kind; int type; } ;
struct agent_expr {int dummy; } ;
typedef enum agent_op { ____Placeholder_agent_op } agent_op ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct agent_expr*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct agent_expr*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct agent_expr *VAR_2, struct axs_value *VAR_3,
    struct axs_value *VAR_4, struct axs_value *VAR_5, enum agent_op VAR_6,
    enum agent_op VAR_7, int VAR_8, char *VAR_9)
{

  if ((FUNC_0 (VAR_4->type) != VAR_0)
      || (FUNC_0 (VAR_5->type) != VAR_0))
    FUNC_3 ("Illegal combination of types in %s.", VAR_9);

  FUNC_2 (VAR_2,
      FUNC_1 (VAR_4->type) ? VAR_7 : VAR_6);
  if (VAR_8)
    FUNC_4 (VAR_2, VAR_4->type);
  VAR_3->type = VAR_4->type;
  VAR_3->kind = VAR_1;
}
