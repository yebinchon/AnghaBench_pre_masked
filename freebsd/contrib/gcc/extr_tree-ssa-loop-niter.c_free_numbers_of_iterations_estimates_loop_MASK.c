
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nb_iter_bound {struct nb_iter_bound* next; } ;
struct loop {struct nb_iter_bound* bounds; int * estimated_nb_iterations; int * nb_iterations; } ;


 int FUNC_0 (struct nb_iter_bound*) ;

void
FUNC_1 (struct loop *VAR_0)
{
  struct nb_iter_bound *VAR_1, *VAR_2;

  VAR_0->nb_iterations = ((void*)0);
  VAR_0->estimated_nb_iterations = ((void*)0);
  for (VAR_1 = VAR_0->bounds; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
    }

  VAR_0->bounds = ((void*)0);
}
