
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int *,int *,char const*,int ,int *) ;

svn_error_t *
FUNC_5(svn_wc__db_t *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5)
{
  svn_boolean_t VAR_6;

  FUNC_0(FUNC_4(&VAR_6, VAR_3, VAR_4, VAR_0,
                                      VAR_5));
  if (!VAR_6)
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("No write-lock in '%s'"),
                             FUNC_2(VAR_4,
                                                    VAR_5));

  return VAR_2;
}
