
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct dump_info {int flags; int nodes; TYPE_1__* free_list; scalar_t__ queue; int node; scalar_t__ queue_end; scalar_t__ column; scalar_t__ index; int * stream; } ;
typedef int splay_tree_delete_value_fn ;
typedef TYPE_1__* dump_queue_p ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct dump_info*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct dump_info*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5 (tree VAR_2, int VAR_3, FILE *VAR_4)
{
  struct dump_info VAR_5;
  dump_queue_p VAR_6;
  dump_queue_p VAR_7;


  VAR_5.stream = VAR_4;
  VAR_5.index = 0;
  VAR_5.column = 0;
  VAR_5.queue = 0;
  VAR_5.queue_end = 0;
  VAR_5.free_list = 0;
  VAR_5.flags = VAR_3;
  VAR_5.node = VAR_2;
  VAR_5.nodes = FUNC_4 (VAR_1, 0,
        (splay_tree_delete_value_fn) &FUNC_1);


  FUNC_2 (&VAR_5, VAR_2, VAR_0);


  while (VAR_5.queue)
    FUNC_0 (&VAR_5);


  for (VAR_6 = VAR_5.free_list; VAR_6; VAR_6 = VAR_7)
    {
      VAR_7 = VAR_6->next;
      FUNC_1 (VAR_6);
    }
  FUNC_3 (VAR_5.nodes);
}
