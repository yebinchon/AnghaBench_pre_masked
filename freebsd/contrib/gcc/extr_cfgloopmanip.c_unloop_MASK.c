
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct loops {int ** parray; } ;
struct loop {unsigned int num_nodes; size_t num; int outer; struct loop* inner; TYPE_1__* latch; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {struct loop* loop_father; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct loops*,TYPE_1__*,int*) ;
 int FUNC_2 (struct loop*) ;
 int FUNC_3 (int ,struct loop*) ;
 int FUNC_4 (struct loop*) ;
 int FUNC_5 (TYPE_1__**) ;
 TYPE_1__** FUNC_6 (struct loop*) ;
 TYPE_4__* FUNC_7 (struct loop*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11 (struct loops *VAR_1, struct loop *VAR_2, bool *VAR_3)
{
  basic_block *VAR_4;
  struct loop *VAR_5;
  unsigned VAR_6, VAR_7;
  basic_block VAR_8 = VAR_2->latch;
  bool VAR_9 = 0;

  if (FUNC_7 (VAR_2)->flags & VAR_0)
    *VAR_3 = 1;







  VAR_4 = FUNC_6 (VAR_2);
  VAR_7 = VAR_2->num_nodes;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    if (VAR_4[VAR_6]->loop_father == VAR_2)
      {
 FUNC_8 (VAR_4[VAR_6]);
 FUNC_0 (VAR_4[VAR_6], VAR_2->outer);
      }
  FUNC_5(VAR_4);

  while (VAR_2->inner)
    {
      VAR_5 = VAR_2->inner;
      FUNC_4 (VAR_5);
      FUNC_3 (VAR_2->outer, VAR_5);
    }


  FUNC_4 (VAR_2);
  VAR_1->parray[VAR_2->num] = ((void*)0);
  FUNC_2 (VAR_2);

  FUNC_9 (FUNC_10 (VAR_8));




  FUNC_1 (VAR_1, VAR_8, &VAR_9);
}
