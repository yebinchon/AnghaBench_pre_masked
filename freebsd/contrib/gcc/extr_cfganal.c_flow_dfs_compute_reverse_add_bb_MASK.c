
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* depth_first_search_ds ;
typedef TYPE_2__* basic_block ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int visited_blocks; int sp; TYPE_2__** stack; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1 (depth_first_search_ds VAR_0, basic_block VAR_1)
{
  VAR_0->stack[VAR_0->sp++] = VAR_1;
  FUNC_0 (VAR_0->visited_blocks, VAR_1->index);
}
