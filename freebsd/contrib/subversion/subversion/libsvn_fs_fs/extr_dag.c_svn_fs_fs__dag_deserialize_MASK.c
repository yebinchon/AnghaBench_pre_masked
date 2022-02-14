
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int created_path; int * node_pool; int node_revision; int fresh_root_predecessor_id; int * id; int * fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,void**) ;

svn_error_t *
FUNC_5(void **VAR_2,
                           void *VAR_3,
                           apr_size_t VAR_4,
                           apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6 = (dag_node_t *)VAR_3;
  if (VAR_4 == 0)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Empty noderev in cache"));


  VAR_6->fs = ((void*)0);


  FUNC_2(VAR_6, &VAR_6->id);
  FUNC_2(VAR_6,
                            (svn_fs_id_t **)&VAR_6->fresh_root_predecessor_id);
  FUNC_3(VAR_6, &VAR_6->node_revision);
  VAR_6->node_pool = VAR_5;

  FUNC_4(VAR_6, (void**)&VAR_6->created_path);


  *VAR_2 = VAR_6;

  return VAR_1;
}
