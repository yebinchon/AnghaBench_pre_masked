
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int node; int rb_node; } ;
struct machine {int dead_threads; int threads; int * last_match; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct machine *VAR_0, struct thread *VAR_1)
{
 VAR_0->last_match = ((void*)0);
 FUNC_1(&VAR_1->rb_node, &VAR_0->threads);




 FUNC_0(&VAR_1->node, &VAR_0->dead_threads);
}
