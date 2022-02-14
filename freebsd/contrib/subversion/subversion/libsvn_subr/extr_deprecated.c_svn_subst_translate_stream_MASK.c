
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_subst_keywords_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,char const*,int ,int const*,int ,int *) ;

svn_error_t *
FUNC_4(svn_stream_t *VAR_0,
                           svn_stream_t *VAR_1,
                           const char *VAR_2,
                           svn_boolean_t VAR_3,
                           const svn_subst_keywords_t *VAR_4,
                           svn_boolean_t VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_1(((void*)0));
  svn_error_t *VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
                                                 VAR_4, VAR_5, VAR_6);
  FUNC_2(VAR_6);
  return FUNC_0(VAR_7);
}
