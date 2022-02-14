
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct df {int num_problems_defined; struct dataflow** problems_in_order; } ;
struct dataflow {scalar_t__ block_info; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int index; } ;


 int FUNC_0 (int,TYPE_1__*) ;
 void* FUNC_1 (struct dataflow*,int) ;
 int FUNC_2 (struct dataflow*) ;
 int FUNC_3 (struct dataflow*,int,void*) ;

void
FUNC_4 (struct df *VAR_0, int VAR_1, basic_block VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0->num_problems_defined; VAR_3++)
    {
      struct dataflow *VAR_4 = VAR_0->problems_in_order[VAR_3];
      if (VAR_4->block_info)
 {
   void *VAR_5;

   FUNC_2 (VAR_4);



   VAR_5 = FUNC_1 (VAR_4, VAR_1);
   FUNC_3 (VAR_4, VAR_1,
     FUNC_1 (VAR_4, VAR_2->index));
   FUNC_3 (VAR_4, VAR_2->index, VAR_5);
 }
    }

  FUNC_0 (VAR_1, VAR_2);
  VAR_2->index = VAR_1;
}
