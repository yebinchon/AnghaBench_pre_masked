
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int*,int*,int*,int*,int *,char const*,int *) ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_1,
                                svn_boolean_t *VAR_2,
                                svn_wc__db_t *VAR_3,
                                const char *VAR_4,
                                svn_boolean_t VAR_5,
                                apr_pool_t *VAR_6)
{
  svn_boolean_t VAR_7, VAR_8, VAR_9;
  svn_boolean_t VAR_10;

  if (!VAR_2)
    VAR_2 = &VAR_10;

  FUNC_0(FUNC_1(VAR_5 ? ((void*)0): &VAR_7,
                                VAR_5 ? ((void*)0): &VAR_8,
                                &VAR_9, VAR_2,
                                VAR_3, VAR_4, VAR_6));
  if (VAR_5)
    *VAR_1 = VAR_9;
  else
    *VAR_1 = VAR_7 || VAR_8 || VAR_9;

  return VAR_0;
}
