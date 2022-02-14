
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct leh_tf_state {int goto_queue_active; int goto_queue; } ;
struct goto_queue_node {int * repl_stmt; int * stmt; } ;


 scalar_t__ FUNC_0 (struct goto_queue_node*,int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static tree
FUNC_1 (struct leh_tf_state *VAR_1, tree VAR_2)
{
  struct goto_queue_node VAR_3, *VAR_4;
  VAR_3.stmt = VAR_2;
  VAR_4 = (struct goto_queue_node *)
     FUNC_0 (&VAR_3, VAR_1->goto_queue, VAR_1->goto_queue_active,
   sizeof (struct goto_queue_node), VAR_0);
  return (VAR_4 ? VAR_4->repl_stmt : ((void*)0));
}
