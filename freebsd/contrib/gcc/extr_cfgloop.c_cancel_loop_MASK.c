
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct loops {int ** parray; } ;
struct loop {unsigned int num_nodes; size_t num; int outer; int inner; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int loop_father; } ;


 int FUNC_0 (struct loop*) ;
 int FUNC_1 (struct loop*) ;
 int FUNC_2 (int) ;
 TYPE_1__** FUNC_3 (struct loop*) ;

__attribute__((used)) static void
FUNC_4 (struct loops *VAR_0, struct loop *VAR_1)
{
  basic_block *VAR_2;
  unsigned VAR_3;

  FUNC_2 (!VAR_1->inner);


  VAR_2 = FUNC_3 (VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_1->num_nodes; VAR_3++)
    VAR_2[VAR_3]->loop_father = VAR_1->outer;


  FUNC_1 (VAR_1);


  VAR_0->parray[VAR_1->num] = ((void*)0);


  FUNC_0 (VAR_1);
}
