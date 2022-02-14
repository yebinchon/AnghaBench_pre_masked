
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
typedef TYPE_1__ svn_prefix_tree__t ;
struct TYPE_8__ {int sub_node_count; struct TYPE_8__** sub_nodes; } ;
typedef TYPE_2__ node_t ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__**,TYPE_2__**,int) ;

__attribute__((used)) static void
FUNC_2(svn_prefix_tree__t *VAR_0,
                       node_t *VAR_1)
{
  if (VAR_1->sub_node_count & (VAR_1->sub_node_count - 1))
    return;

  if (VAR_1->sub_node_count == 0)
    {
      VAR_1->sub_nodes = FUNC_0(VAR_0->pool, sizeof(*VAR_1->sub_nodes));
    }
  else
    {
      node_t **VAR_2
        = FUNC_0(VAR_0->pool,
                      2 * VAR_1->sub_node_count * sizeof(*VAR_2));
      FUNC_1(VAR_2, VAR_1->sub_nodes,
             VAR_1->sub_node_count * sizeof(*VAR_2));
      VAR_1->sub_nodes = VAR_2;
    }
}
