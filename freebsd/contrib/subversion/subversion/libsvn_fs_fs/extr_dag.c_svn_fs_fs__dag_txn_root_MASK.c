
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int **,int *,int const*,int *) ;
 int FUNC_2 (int const**,int const**,int *,int const*,int *) ;

svn_error_t *
FUNC_3(dag_node_t **VAR_0,
                        svn_fs_t *VAR_1,
                        const svn_fs_fs__id_part_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  const svn_fs_id_t *VAR_4, *VAR_5;

  FUNC_0(FUNC_2(&VAR_4, &VAR_5, VAR_1, VAR_2, VAR_3));
  return FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3);
}
