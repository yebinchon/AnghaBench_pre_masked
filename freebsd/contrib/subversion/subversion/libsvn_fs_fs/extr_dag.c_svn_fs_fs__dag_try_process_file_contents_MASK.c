
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_process_contents_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int node_revision_t ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,TYPE_1__*) ;
 int * FUNC_2 (int *,int ,int *,int ,void*,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_0,
                                         dag_node_t *VAR_1,
                                         svn_fs_process_contents_func_t VAR_2,
                                         void* VAR_3,
                                         apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5;


  FUNC_0(FUNC_1(&VAR_5, VAR_1));

  return FUNC_2(VAR_0, VAR_1->fs,
                                              VAR_5,
                                              VAR_2, VAR_3, VAR_4);
}
