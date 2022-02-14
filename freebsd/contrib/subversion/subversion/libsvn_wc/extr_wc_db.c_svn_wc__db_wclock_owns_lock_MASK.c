
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int *,int *,char const*,int ,int *) ;
 int FUNC_6 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_boolean_t *VAR_2,
                            svn_wc__db_t *VAR_3,
                            const char *VAR_4,
                            svn_boolean_t VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;

  FUNC_0(FUNC_6(&VAR_7, &VAR_8, VAR_3,
                              VAR_4, VAR_6, VAR_6));

  if (!VAR_7)
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_2("The node '%s' was not found."),
                             FUNC_3(VAR_4,
                                                    VAR_6));

  FUNC_1(VAR_7);

  FUNC_0(FUNC_5(VAR_2, VAR_7, VAR_8,
                                               VAR_5, VAR_6));

  return VAR_1;
}
