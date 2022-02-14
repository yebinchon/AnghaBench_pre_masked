
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {void* estimated_nb_iterations; void* nb_iterations; } ;


 void* FUNC_0 (void*,int ,int ) ;

void
FUNC_1 (struct loop *VAR_0, tree VAR_1, tree VAR_2)
{
  VAR_0->nb_iterations = FUNC_0 (VAR_0->nb_iterations, VAR_1, VAR_2);
  VAR_0->estimated_nb_iterations
   = FUNC_0 (VAR_0->estimated_nb_iterations, VAR_1, VAR_2);
}
