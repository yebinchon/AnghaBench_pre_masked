
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const**,int *,int *,char const*,int *,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const**,char const**,int *,int ,int *) ;
 int FUNC_7 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_revnum_t *VAR_2,
                           const char **VAR_3,
                           const char **VAR_4,
                           const char **VAR_5,
                           svn_wc__db_t *VAR_6,
                           const char *VAR_7,
                           apr_pool_t *VAR_8,
                           apr_pool_t *VAR_9)
{
  svn_wc__db_wcroot_t *VAR_10;
  const char *VAR_11;
  apr_int64_t VAR_12 = VAR_0;

  FUNC_1(FUNC_5(VAR_7));

  FUNC_0(FUNC_7(&VAR_10, &VAR_11, VAR_6,
                                                VAR_7,
                                                VAR_9, VAR_9));
  FUNC_3(VAR_10);

  FUNC_2(FUNC_4(VAR_2, VAR_3,
                                          (VAR_4 || VAR_5)
                                            ? &VAR_12 : ((void*)0),
                                          VAR_10, VAR_11,
                                          VAR_8, VAR_9),
                       FUNC_6(VAR_4,
                                                   VAR_5,
                                                   VAR_10, VAR_12,
                                                   VAR_8),
                       VAR_1, VAR_1,
                       VAR_10);

  return VAR_1;
}
