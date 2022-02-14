
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axs_value {int kind; int type; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct agent_expr*,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct agent_expr*,int ) ;
 int FUNC_4 (struct agent_expr*,int ,int ) ;

__attribute__((used)) static void
FUNC_5 (struct agent_expr *VAR_6, struct axs_value *VAR_7,
  struct axs_value *VAR_8, struct axs_value *VAR_9, char *VAR_10)
{

  if (FUNC_0 (VAR_8->type) == VAR_0
      && FUNC_0 (VAR_9->type) == VAR_1)
    {

      FUNC_1 (VAR_6, VAR_4);
      FUNC_4 (VAR_6, VAR_3, VAR_9->type);
      FUNC_1 (VAR_6, VAR_2);
      FUNC_3 (VAR_6, VAR_9->type);
      VAR_7->type = VAR_9->type;
    }


  else if (FUNC_0 (VAR_8->type) == VAR_1
    && FUNC_0 (VAR_9->type) == VAR_0)
    {
      FUNC_4 (VAR_6, VAR_3, VAR_8->type);
      FUNC_1 (VAR_6, VAR_2);
      FUNC_3 (VAR_6, VAR_8->type);
      VAR_7->type = VAR_8->type;
    }



  else if (FUNC_0 (VAR_8->type) == VAR_0
    && FUNC_0 (VAR_9->type) == VAR_0)
    {
      FUNC_1 (VAR_6, VAR_2);
      FUNC_3 (VAR_6, VAR_8->type);
      VAR_7->type = VAR_8->type;
    }

  else
    FUNC_2 ("Illegal combination of types in %s.", VAR_10);

  VAR_7->kind = VAR_5;
}
