
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int ,int *) ;
 int FUNC_5 (int *,int *,char const*,int *,int ,int ,int const*,int const*,int ,void*,int *) ;
 int VAR_1 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_boolean_t *VAR_2,
                          svn_wc__db_t *VAR_3,
                          const char *VAR_4,
                          svn_boolean_t VAR_5,
                          svn_boolean_t VAR_6,
                          const svn_skel_t *VAR_7,
                          const svn_skel_t *VAR_8,
                          svn_cancel_func_t VAR_9,
                          void *VAR_10,
                          apr_pool_t *VAR_11)
{
  svn_wc__db_wcroot_t *VAR_12;
  const char *VAR_13;

  FUNC_1(FUNC_6(VAR_4));

  FUNC_0(FUNC_7(&VAR_12, &VAR_13, VAR_3,
                              VAR_4, VAR_11, VAR_11));
  FUNC_3(VAR_12);

  FUNC_2(FUNC_5(VAR_2,
                                      VAR_12, VAR_13, VAR_3,
                                      VAR_5, VAR_6,
                                      VAR_7, VAR_8,
                                      VAR_9, VAR_10, VAR_11),
                      VAR_12);


  FUNC_0(FUNC_4(VAR_12, VAR_4, VAR_1,
                        VAR_11));

  return VAR_0;
}
