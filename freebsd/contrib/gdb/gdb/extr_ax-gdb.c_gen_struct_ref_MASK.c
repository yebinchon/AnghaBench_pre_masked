
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct axs_value {scalar_t__ kind; struct type* type; } ;
struct agent_expr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*,int) ;
 struct type* FUNC_4 (struct type*,int) ;
 scalar_t__ VAR_4 ;
 struct type* FUNC_5 (struct type*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct type*,char*) ;
 int FUNC_8 (struct agent_expr*,struct axs_value*,struct type*,int,scalar_t__) ;
 int FUNC_9 (struct agent_expr*,struct axs_value*) ;
 int FUNC_10 (struct agent_expr*,int) ;
 int FUNC_11 (struct agent_expr*,struct axs_value*) ;

__attribute__((used)) static void
FUNC_12 (struct agent_expr *VAR_5, struct axs_value *VAR_6, char *VAR_7,
  char *VAR_8, char *VAR_9)
{
  struct type *VAR_10;
  int VAR_11;




  while (FUNC_0 (VAR_6->type) == VAR_1)
    {
      FUNC_11 (VAR_5, VAR_6);
      FUNC_9 (VAR_5, VAR_6);
    }
  VAR_10 = FUNC_5 (VAR_6->type);


  if (FUNC_0 (VAR_10) != VAR_2
      && FUNC_0 (VAR_10) != VAR_3)
    FUNC_6 ("The left operand of `%s' is not a %s.",
    VAR_8, VAR_9);



  if (VAR_6->kind != VAR_4)
    FUNC_6 ("Structure does not live in memory.");

  VAR_11 = FUNC_7 (VAR_10, VAR_7);


  if (FUNC_3 (VAR_10, VAR_11))
    FUNC_8 (VAR_5, VAR_6, FUNC_4 (VAR_10, VAR_11),
        FUNC_1 (VAR_10, VAR_11),
        (FUNC_1 (VAR_10, VAR_11)
         + FUNC_2 (VAR_10, VAR_11)));
  else
    {
      FUNC_10 (VAR_5, FUNC_1 (VAR_10, VAR_11) / VAR_0);
      VAR_6->kind = VAR_4;
      VAR_6->type = FUNC_4 (VAR_10, VAR_11);
    }
}
