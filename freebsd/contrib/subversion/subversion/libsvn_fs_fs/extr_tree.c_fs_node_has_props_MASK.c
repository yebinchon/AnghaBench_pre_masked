
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_boolean_t *VAR_0,
                  svn_fs_root_t *VAR_1,
                  const char *VAR_2,
                  apr_pool_t *VAR_3)
{
  dag_node_t *VAR_4;

  FUNC_0(FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3));

  return FUNC_2(FUNC_3(VAR_0, VAR_4,
                                                  VAR_3));
}
