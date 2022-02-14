
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int copy_id; int node_id; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;


 scalar_t__ FUNC_0 (int *,int *) ;

svn_boolean_t
FUNC_1(dag_node_t *VAR_0,
                                   dag_node_t *VAR_1)
{
  svn_fs_x__noderev_t *VAR_2 = VAR_0->node_revision;
  svn_fs_x__noderev_t *VAR_3 = VAR_1->node_revision;

  return FUNC_0(&VAR_2->node_id, &VAR_3->node_id)
      && FUNC_0(&VAR_2->copy_id, &VAR_3->copy_id);
}
