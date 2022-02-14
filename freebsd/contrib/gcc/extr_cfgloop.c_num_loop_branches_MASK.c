
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct loop {scalar_t__ latch; unsigned int num_nodes; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int succs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int) ;
 TYPE_1__** FUNC_3 (struct loop const*) ;

unsigned
FUNC_4 (const struct loop *VAR_1)
{
  unsigned VAR_2, VAR_3;
  basic_block * VAR_4;

  FUNC_2 (VAR_1->latch != VAR_0);

  VAR_4 = FUNC_3 (VAR_1);
  VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1->num_nodes; VAR_2++)
    if (FUNC_0 (VAR_4[VAR_2]->succs) >= 2)
      VAR_3++;
  FUNC_1 (VAR_4);

  return VAR_3;
}
