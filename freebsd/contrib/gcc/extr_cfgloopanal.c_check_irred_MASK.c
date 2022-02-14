
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct graph {TYPE_1__* vertices; } ;
struct edge {size_t src; size_t dest; TYPE_3__* data; } ;
typedef TYPE_3__* edge ;
struct TYPE_6__ {TYPE_2__* src; int dest; int flags; } ;
struct TYPE_5__ {int flags; int loop_father; } ;
struct TYPE_4__ {scalar_t__ component; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (struct graph *VAR_2, struct edge *VAR_3)
{
  edge VAR_4 = VAR_3->data;



  FUNC_1 (VAR_2->vertices[VAR_3->src].component >= VAR_2->vertices[VAR_3->dest].component);

  if (VAR_2->vertices[VAR_3->src].component != VAR_2->vertices[VAR_3->dest].component)
    return;

  VAR_4->flags |= VAR_1;
  if (FUNC_0 (VAR_4->src->loop_father, VAR_4->dest))
    VAR_4->src->flags |= VAR_0;
}
