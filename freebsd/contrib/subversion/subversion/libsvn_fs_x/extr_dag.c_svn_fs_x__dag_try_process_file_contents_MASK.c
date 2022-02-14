
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_process_contents_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int node_revision; int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int ,int ,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_boolean_t *VAR_0,
                                        dag_node_t *VAR_1,
                                        svn_fs_process_contents_func_t VAR_2,
                                        void* VAR_3,
                                        apr_pool_t *VAR_4)
{
  return FUNC_0(VAR_0, VAR_1->fs,
                                             VAR_1->node_revision,
                                             VAR_2, VAR_3, VAR_4);
}
