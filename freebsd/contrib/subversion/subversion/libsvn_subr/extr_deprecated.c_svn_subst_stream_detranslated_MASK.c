
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_subst_eol_style_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int **,char const*,int *,int *) ;
 int * FUNC_3 (int **,char const*,int *,int *) ;
 int FUNC_4 (int **,int *,int ,char const*,scalar_t__,int *,int *) ;

svn_error_t *
FUNC_5(svn_stream_t **VAR_0,
                              const char *VAR_1,
                              svn_subst_eol_style_t VAR_2,
                              const char *VAR_3,
                              svn_boolean_t VAR_4,
                              apr_hash_t *VAR_5,
                              svn_boolean_t VAR_6,
                              apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;

  if (VAR_6)
    return FUNC_3(VAR_0, VAR_1, VAR_7, VAR_7);



  FUNC_0(FUNC_2(&VAR_8, VAR_1, VAR_7, VAR_7));

  return FUNC_1(FUNC_4(
                           VAR_0, VAR_8,
                           VAR_2, VAR_3,
                           VAR_4,
                           VAR_5, VAR_7));
}
