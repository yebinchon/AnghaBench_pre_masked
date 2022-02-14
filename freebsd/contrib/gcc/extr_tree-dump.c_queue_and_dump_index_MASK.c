
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef TYPE_2__* dump_node_info_p ;
typedef TYPE_3__* dump_info_p ;
struct TYPE_11__ {int column; int stream; int nodes; } ;
struct TYPE_10__ {unsigned int index; } ;
struct TYPE_9__ {scalar_t__ value; } ;


 int FUNC_0 (TYPE_3__*,unsigned int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,char const*) ;
 unsigned int FUNC_3 (TYPE_3__*,scalar_t__,int) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

void
FUNC_5 (dump_info_p VAR_0, const char *VAR_1, tree VAR_2, int VAR_3)
{
  unsigned int VAR_4;
  splay_tree_node VAR_5;



  if (!VAR_2)
    return;


  VAR_5 = FUNC_4 (VAR_0->nodes, (splay_tree_key) VAR_2);
  if (VAR_5)
    VAR_4 = ((dump_node_info_p) VAR_5->value)->index;
  else

    VAR_4 = FUNC_3 (VAR_0, VAR_2, VAR_3);


  FUNC_1 (VAR_0);
  FUNC_2 (VAR_0->stream, "%-4s: ", VAR_1);
  VAR_0->column += 6;
  FUNC_0 (VAR_0, VAR_4);
}
