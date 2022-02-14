
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dataflow {int dummy; } ;
typedef TYPE_3__* edge ;
typedef int bitmap ;
struct TYPE_9__ {int out; int in; } ;
struct TYPE_8__ {int flags; TYPE_2__* src; TYPE_1__* dest; } ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_4__* FUNC_1 (struct dataflow*,int ) ;

__attribute__((used)) static void
FUNC_2 (struct dataflow *VAR_1, edge VAR_2)
{
  bitmap VAR_3 = FUNC_1 (VAR_1, VAR_2->dest->index)->in;
  bitmap VAR_4 = FUNC_1 (VAR_1, VAR_2->src->index)->out;

  if (VAR_2->flags & VAR_0)
    return;

  FUNC_0 (VAR_3, VAR_4);
}
