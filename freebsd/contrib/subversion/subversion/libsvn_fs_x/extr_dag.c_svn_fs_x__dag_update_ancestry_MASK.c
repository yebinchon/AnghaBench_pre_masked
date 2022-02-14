
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int predecessor_count; int noderev_id; int predecessor_id; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_error_t ;
struct TYPE_8__ {TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

svn_error_t *
FUNC_4(dag_node_t *VAR_1,
                              dag_node_t *VAR_2,
                              apr_pool_t *VAR_3)
{
  svn_fs_x__noderev_t *VAR_4 = VAR_2->node_revision;
  svn_fs_x__noderev_t *VAR_5 = VAR_1->node_revision;

  if (! FUNC_3(VAR_1))
    return FUNC_2
      (VAR_0, ((void*)0),
       FUNC_0("Attempted to update ancestry of non-mutable node"));

  VAR_5->predecessor_id = VAR_4->noderev_id;
  VAR_5->predecessor_count = VAR_4->predecessor_count;
  VAR_5->predecessor_count++;

  return FUNC_1(VAR_1, VAR_3);
}
