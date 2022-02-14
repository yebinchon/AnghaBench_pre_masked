
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const**,int *,int *,int *,char const*,int *,int *,int *) ;
 int FUNC_4 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_1,
                            const apr_array_header_t **VAR_2,
                            svn_boolean_t *VAR_3,
                            svn_node_kind_t *VAR_4,
                            svn_wc__db_t *VAR_5,
                            const char *VAR_6,
                            apr_pool_t *VAR_7,
                            apr_pool_t *VAR_8)
{
  svn_wc__db_wcroot_t *VAR_9;
  const char *VAR_10;

  FUNC_0(FUNC_4(&VAR_9, &VAR_10,
                              VAR_5, VAR_6, VAR_8, VAR_8));
  FUNC_2(VAR_9);

  FUNC_1(
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
                     VAR_9, VAR_10, VAR_5,
                     VAR_7, VAR_8),
    VAR_9);
  return VAR_0;
}
