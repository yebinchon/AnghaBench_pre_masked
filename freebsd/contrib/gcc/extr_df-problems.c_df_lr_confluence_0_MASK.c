
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct df {int hardware_regs_used; } ;
struct dataflow {struct df* df; } ;
typedef int bitmap ;
typedef TYPE_1__* basic_block ;
struct TYPE_6__ {int out; } ;
struct TYPE_5__ {int index; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (struct dataflow*,int ) ;

__attribute__((used)) static void
FUNC_2 (struct dataflow *VAR_1, basic_block VAR_2)
{
  struct df *VAR_3 = VAR_1->df;

  bitmap VAR_4 = FUNC_1 (VAR_1, VAR_2->index)->out;
  if (VAR_2 != VAR_0)
    FUNC_0 (VAR_4, VAR_3->hardware_regs_used);
}
