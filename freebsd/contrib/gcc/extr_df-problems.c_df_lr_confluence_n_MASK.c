
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dataflow {TYPE_1__* df; } ;
typedef TYPE_4__* edge ;
typedef int bitmap ;
struct TYPE_11__ {int in; int out; } ;
struct TYPE_10__ {int flags; TYPE_3__* dest; TYPE_2__* src; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {int hardware_regs_used; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (struct dataflow*,int ) ;

__attribute__((used)) static void
FUNC_3 (struct dataflow *VAR_2, edge VAR_3)
{
  bitmap VAR_4 = FUNC_2 (VAR_2, VAR_3->src->index)->out;
  bitmap VAR_5 = FUNC_2 (VAR_2, VAR_3->dest->index)->in;




  if (VAR_3->flags & VAR_0)
    FUNC_0 (VAR_4, VAR_5, VAR_1);
  else
    FUNC_1 (VAR_4, VAR_5);

  FUNC_1 (VAR_4, VAR_2->df->hardware_regs_used);
}
