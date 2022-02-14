
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* basic_block ;
struct TYPE_9__ {int * node; int * heap; } ;
struct TYPE_7__ {TYPE_1__* rtl; } ;
struct TYPE_8__ {size_t index; TYPE_2__ il; } ;
struct TYPE_6__ {int visited; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1 (basic_block VAR_1, int VAR_2)
{
  VAR_1->il.rtl->visited = VAR_2;
  if (VAR_0[VAR_1->index].heap)
    {
      FUNC_0 (VAR_0[VAR_1->index].heap, VAR_0[VAR_1->index].node);
      VAR_0[VAR_1->index].heap = ((void*)0);
      VAR_0[VAR_1->index].node = ((void*)0);
    }
}
