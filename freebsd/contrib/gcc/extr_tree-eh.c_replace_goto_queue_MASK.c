
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct leh_tf_state {scalar_t__ goto_queue_active; int * top_p; } ;


 int FUNC_0 (int ,struct leh_tf_state*) ;

__attribute__((used)) static void
FUNC_1 (struct leh_tf_state *VAR_0)
{
  if (VAR_0->goto_queue_active == 0)
    return;
  FUNC_0 (*VAR_0->top_p, VAR_0);
}
