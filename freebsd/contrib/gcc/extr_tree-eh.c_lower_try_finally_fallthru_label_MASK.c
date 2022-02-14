
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct leh_tf_state {TYPE_2__* outer; scalar_t__ fallthru_label; } ;
struct TYPE_4__ {TYPE_1__* tf; } ;
struct TYPE_3__ {int try_finally_expr; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static tree
FUNC_2 (struct leh_tf_state *VAR_0)
{
  tree VAR_1 = VAR_0->fallthru_label;
  if (!VAR_1)
    {
      VAR_1 = FUNC_0 ();
      VAR_0->fallthru_label = VAR_1;
      if (VAR_0->outer->tf)
        FUNC_1 (VAR_1, VAR_0->outer->tf->try_finally_expr);
    }
  return VAR_1;
}
