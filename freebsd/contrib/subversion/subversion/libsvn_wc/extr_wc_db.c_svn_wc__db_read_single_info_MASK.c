
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct svn_wc__db_info_t {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct svn_wc__db_info_t const**,int *,char const*,int ,int *,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(const struct svn_wc__db_info_t **VAR_1,
                            svn_wc__db_t *VAR_2,
                            const char *VAR_3,
                            svn_boolean_t VAR_4,
                            apr_pool_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;

  FUNC_1(FUNC_5(VAR_3));

  FUNC_0(FUNC_6(&VAR_7, &VAR_8, VAR_2,
                                                VAR_3,
                                                VAR_6, VAR_6));
  FUNC_3(VAR_7);

  FUNC_2(FUNC_4(VAR_1, VAR_7, VAR_8,
                                       VAR_4,
                                       VAR_5, VAR_6),
                      VAR_7);

  return VAR_0;
}
