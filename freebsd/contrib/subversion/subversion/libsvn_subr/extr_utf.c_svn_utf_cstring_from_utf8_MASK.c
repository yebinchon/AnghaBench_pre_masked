
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xlate_handle_node_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int *) ;
 int * FUNC_2 (char const**,char const*,int *,int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (int *,int ) ;

svn_error_t *
FUNC_6(const char **VAR_1,
                          const char *VAR_2,
                          apr_pool_t *VAR_3)
{
  xlate_handle_node_t *VAR_4;
  svn_error_t *VAR_5;

  FUNC_0(FUNC_1(VAR_2, VAR_3));

  FUNC_0(FUNC_3(&VAR_4, VAR_3));
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_3);
  VAR_5 = FUNC_5(
          VAR_5,
          FUNC_4(VAR_4, VAR_0, VAR_3));

  return VAR_5;
}
