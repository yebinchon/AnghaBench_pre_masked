
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct leh_tf_state {int goto_queue_active; void** top_p; struct goto_queue_node* goto_queue; int * eh_label; scalar_t__ may_throw; } ;
struct leh_state {int dummy; } ;
struct goto_queue_node {scalar_t__ index; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (int *,void**) ;
 int * FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (struct goto_queue_node*,int *,int *) ;
 int FUNC_5 (struct goto_queue_node*,int *,int *,int **) ;
 int FUNC_6 (struct leh_state*,int **) ;
 int FUNC_7 (struct leh_tf_state*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8 (struct leh_state *VAR_2, struct leh_tf_state *VAR_3)
{
  tree VAR_4, VAR_5, VAR_6, VAR_7;
  struct goto_queue_node *VAR_8, *VAR_9;

  if (VAR_3->may_throw)
    VAR_6 = VAR_3->eh_label;
  else
    VAR_6 = FUNC_3 ();

  VAR_5 = FUNC_0 (*VAR_3->top_p, 1);
  *VAR_3->top_p = FUNC_0 (*VAR_3->top_p, 0);

  VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_6);
  FUNC_1 (VAR_4, VAR_3->top_p);

  VAR_7 = ((void*)0);
  VAR_8 = VAR_3->goto_queue;
  VAR_9 = VAR_8 + VAR_3->goto_queue_active;
  for (; VAR_8 < VAR_9; ++VAR_8)
    if (VAR_8->index < 0)
      FUNC_5 (VAR_8, VAR_6, ((void*)0), &VAR_7);
    else
      FUNC_4 (VAR_8, VAR_6, ((void*)0));

  FUNC_7 (VAR_3);

  FUNC_6 (VAR_2, &VAR_5);
  FUNC_1 (VAR_5, VAR_3->top_p);
}
