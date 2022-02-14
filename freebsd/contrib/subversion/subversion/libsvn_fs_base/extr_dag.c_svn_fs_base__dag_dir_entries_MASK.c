
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_3__ {int fs; int id; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int **,int ,int *,int *,int *) ;
 int FUNC_2 (int **,int ,int ,int *,int *) ;

svn_error_t *
FUNC_3(apr_hash_t **VAR_0,
                             dag_node_t *VAR_1,
                             trail_t *VAR_2,
                             apr_pool_t *VAR_3)
{
  node_revision_t *VAR_4;
  FUNC_0(FUNC_2(&VAR_4, VAR_1->fs, VAR_1->id,
                                        VAR_2, VAR_3));
  return FUNC_1(VAR_0, VAR_1->fs, VAR_4, VAR_2, VAR_3);
}
