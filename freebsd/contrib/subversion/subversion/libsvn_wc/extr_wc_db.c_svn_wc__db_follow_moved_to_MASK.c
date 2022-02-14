
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
struct svn_wc__db_moved_to_t {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,char const*,int ,int **,int *,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(apr_array_header_t **VAR_1,
                           svn_wc__db_t *VAR_2,
                           const char *VAR_3,
                           apr_pool_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  svn_wc__db_wcroot_t *VAR_6;
  const char *VAR_7;

  FUNC_1(FUNC_6(VAR_3));

  FUNC_0(FUNC_7(&VAR_6, &VAR_7, VAR_2,
                              VAR_3, VAR_5, VAR_5));
  FUNC_3(VAR_6);

  *VAR_1 = FUNC_4(VAR_4, 0,
                              sizeof(struct svn_wc__db_moved_to_t *));


  FUNC_2(FUNC_5(VAR_6, VAR_7, 0, VAR_1,
                                      VAR_4, VAR_5),
                      VAR_6);



  return VAR_0;
}
