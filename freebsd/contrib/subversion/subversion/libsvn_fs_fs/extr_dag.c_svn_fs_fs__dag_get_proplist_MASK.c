
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,TYPE_1__*) ;
 int FUNC_2 (int **,int ,int *,int *) ;

svn_error_t *
FUNC_3(apr_hash_t **VAR_1,
                            dag_node_t *VAR_2,
                            apr_pool_t *VAR_3)
{
  node_revision_t *VAR_4;
  apr_hash_t *VAR_5 = ((void*)0);

  FUNC_0(FUNC_1(&VAR_4, VAR_2));

  FUNC_0(FUNC_2(&VAR_5, VAR_2->fs,
                                  VAR_4, VAR_3));

  *VAR_1 = VAR_5;

  return VAR_0;
}
