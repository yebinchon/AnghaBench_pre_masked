
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int ,int *) ;
 int FUNC_6 (int *,char const*,char const*,int ,int *) ;
 int VAR_1 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc__db_t *VAR_2,
                                          const char *VAR_3,
                                          const char *VAR_4,
                                          svn_revnum_t VAR_5,
                                          apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;

  FUNC_1(FUNC_7(VAR_3));
  FUNC_1(FUNC_2(VAR_5));
  FUNC_1(FUNC_8(VAR_4));

  FUNC_0(FUNC_9(&VAR_7, &VAR_8, VAR_2,
                              VAR_3, VAR_6, VAR_6));
  FUNC_4(VAR_7);

  FUNC_3(
    FUNC_6(VAR_7, VAR_8,
                               VAR_4, VAR_5, VAR_6),
    VAR_7);

  FUNC_0(FUNC_5(VAR_7, VAR_3, VAR_1, VAR_6));

  return VAR_0;
}
