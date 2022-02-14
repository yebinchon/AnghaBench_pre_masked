
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int node_pool; int fs; int * node_revision; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *,char const*,int const*,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(dag_node_t *VAR_1,
          const char *VAR_2,
          const svn_fs_x__id_t *VAR_3,
          svn_node_kind_t VAR_4,
          svn_fs_x__txn_id_t VAR_5,
          apr_pool_t *VAR_6)
{
  svn_fs_x__noderev_t *VAR_7 = VAR_1->node_revision;


  FUNC_0(FUNC_1(VAR_1->fs, VAR_5, VAR_7, VAR_2, VAR_3,
                              VAR_4, VAR_1->node_pool, VAR_6));


  FUNC_2(VAR_1);

  return VAR_0;
}
