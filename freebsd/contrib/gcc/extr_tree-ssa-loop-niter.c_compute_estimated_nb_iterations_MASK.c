
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nb_iter_bound {int bound; struct nb_iter_bound* next; } ;
struct loop {int estimated_nb_iterations; struct nb_iter_bound* bounds; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct loop *VAR_1)
{
  struct nb_iter_bound *VAR_2;

  for (VAR_2 = VAR_1->bounds; VAR_2; VAR_2 = VAR_2->next)
    {
      if (FUNC_0 (VAR_2->bound) != VAR_0)
 continue;



      if (FUNC_1 (VAR_1->estimated_nb_iterations)
   || FUNC_2 (VAR_2->bound, VAR_1->estimated_nb_iterations))
 VAR_1->estimated_nb_iterations = VAR_2->bound;
    }
}
