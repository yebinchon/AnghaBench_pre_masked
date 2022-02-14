
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_3__* edge ;
typedef int bbro_basic_block_data ;
typedef TYPE_4__* basic_block ;
struct TYPE_22__ {int start_of_trace; int in_trace; int end_of_trace; int * node; int * heap; } ;
struct TYPE_19__ {TYPE_1__* rtl; } ;
struct TYPE_21__ {int index; struct TYPE_21__* aux; TYPE_2__ il; } ;
struct TYPE_20__ {TYPE_4__* dest; } ;
struct TYPE_18__ {int visited; } ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (scalar_t__,char*,int,...) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 TYPE_5__* FUNC_6 (TYPE_5__*,int) ;

__attribute__((used)) static basic_block
FUNC_7 (basic_block VAR_4, edge VAR_5, basic_block VAR_6, int VAR_7)
{
  basic_block VAR_8;

  VAR_8 = FUNC_3 (VAR_4, VAR_5, VAR_6);
  FUNC_0 (VAR_8, VAR_4);

  FUNC_5 (VAR_5->dest == VAR_8);
  FUNC_5 (!VAR_5->dest->il.rtl->visited);

  if (VAR_2)
    FUNC_4 (VAR_2,
      "Duplicated bb %d (created bb %d)\n",
      VAR_4->index, VAR_8->index);
  VAR_8->il.rtl->visited = VAR_7;
  VAR_8->aux = VAR_6->aux;
  VAR_6->aux = VAR_8;

  if (VAR_8->index >= VAR_0 || VAR_3 > VAR_0)
    {
      int VAR_9;
      int VAR_10;

      VAR_10 = FUNC_2 (VAR_3, VAR_8->index + 1);
      VAR_10 = FUNC_1 (VAR_10);
      VAR_1 = FUNC_6 (VAR_1, VAR_10 * sizeof (bbro_basic_block_data));
      for (VAR_9 = VAR_0; VAR_9 < VAR_10; VAR_9++)
 {
   VAR_1[VAR_9].start_of_trace = -1;
   VAR_1[VAR_9].in_trace = -1;
   VAR_1[VAR_9].end_of_trace = -1;
   VAR_1[VAR_9].heap = ((void*)0);
   VAR_1[VAR_9].node = ((void*)0);
 }
      VAR_0 = VAR_10;

      if (VAR_2)
 {
   FUNC_4 (VAR_2,
     "Growing the dynamic array to %d elements.\n",
     VAR_0);
 }
    }

  VAR_1[VAR_8->index].in_trace = VAR_7;

  return VAR_8;
}
