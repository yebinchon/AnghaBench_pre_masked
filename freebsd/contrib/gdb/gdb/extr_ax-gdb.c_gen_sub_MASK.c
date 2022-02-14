
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axs_value {int kind; int type; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct agent_expr*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct agent_expr*,int ) ;
 int FUNC_6 (struct agent_expr*,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (struct agent_expr *VAR_7, struct axs_value *VAR_8,
  struct axs_value *VAR_9, struct axs_value *VAR_10)
{
  if (FUNC_0 (VAR_9->type) == VAR_1)
    {

      if (FUNC_0 (VAR_10->type) == VAR_0)
 {
   FUNC_6 (VAR_7, VAR_3, VAR_9->type);
   FUNC_3 (VAR_7, VAR_4);
   FUNC_5 (VAR_7, VAR_9->type);
   VAR_8->type = VAR_9->type;
 }




      else if (FUNC_0 (VAR_10->type) == VAR_1
        && (FUNC_1 (FUNC_2 (VAR_9->type))
     == FUNC_1 (FUNC_2 (VAR_10->type))))
 {
   FUNC_3 (VAR_7, VAR_4);
   FUNC_6 (VAR_7, VAR_2, VAR_9->type);
   VAR_8->type = VAR_6;
 }
      else
 FUNC_4 ("First argument of `-' is a pointer, but second argument is neither\nan integer nor a pointer of the same type.");


    }


  else if (FUNC_0 (VAR_9->type) == VAR_0
    && FUNC_0 (VAR_10->type) == VAR_0)
    {
      FUNC_3 (VAR_7, VAR_4);
      FUNC_5 (VAR_7, VAR_9->type);
      VAR_8->type = VAR_9->type;
    }

  else
    FUNC_4 ("Illegal combination of types in subtraction.");

  VAR_8->kind = VAR_5;
}
