
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct sched_entity {struct rb_node run_node; } ;
struct cfs_rq {int tasks_timeline; struct rb_node* rb_leftmost; } ;


 int FUNC_0 (struct rb_node*,int *) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static void FUNC_2(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 if (VAR_0->rb_leftmost == &VAR_1->run_node) {
  struct rb_node *VAR_2;

  VAR_2 = FUNC_1(&VAR_1->run_node);
  VAR_0->rb_leftmost = VAR_2;
 }

 FUNC_0(&VAR_1->run_node, &VAR_0->tasks_timeline);
}
