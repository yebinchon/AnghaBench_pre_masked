
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct loop {unsigned int num_nodes; TYPE_1__* latch; struct loop* inner; struct loop* next; } ;
typedef int edge ;
typedef int bitmap ;
typedef TYPE_2__* basic_block ;
struct TYPE_8__ {int back_edge; } ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int succs; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_2__** FUNC_4 (struct loop*) ;
 int FUNC_5 (struct loop*) ;
 int FUNC_6 (struct loop*,int ) ;

__attribute__((used)) static void
FUNC_7 (struct loop *VAR_0, bitmap VAR_1)
{
  struct loop *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    {
      edge VAR_3;
      basic_block *VAR_4;
      unsigned VAR_5;

      FUNC_7 (VAR_2->inner, VAR_1);


      if (FUNC_0 (VAR_2->latch->succs) > 0)
 {

   VAR_3 = FUNC_5 (VAR_2);
   FUNC_1 (VAR_3)->back_edge = 1;
       }

      VAR_4 = FUNC_4 (VAR_2);
      for (VAR_5 = 0; VAR_5 < VAR_2->num_nodes; VAR_5++)
 FUNC_2 (VAR_1, VAR_4[VAR_5]->index);
      FUNC_3 (VAR_4);
      FUNC_6 (VAR_2, VAR_1);
    }
}
