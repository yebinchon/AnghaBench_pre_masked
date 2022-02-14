
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,TYPE_1__*) ;
 int * FUNC_2 (int ,int const*,int *,char const*,int const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(dag_node_t *VAR_0,
          const char *VAR_1,
          const svn_fs_id_t *VAR_2,
          svn_node_kind_t VAR_3,
          const svn_fs_fs__id_part_t *VAR_4,
          apr_pool_t *VAR_5)
{
  node_revision_t *VAR_6;


  FUNC_0(FUNC_1(&VAR_6, VAR_0));


  return FUNC_2(VAR_0->fs, VAR_4, VAR_6, VAR_1, VAR_2,
                              VAR_3, VAR_5);
}
