
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_parser_fns_t ;
typedef int svn_repos_parse_fns2_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int const*,int *) ;
 int * FUNC_1 (int *,int *,void*,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_stream_t *VAR_0,
                           const svn_repos_parser_fns_t *VAR_1,
                           void *VAR_2,
                           svn_cancel_func_t VAR_3,
                           void *VAR_4,
                           apr_pool_t *VAR_5)
{
  svn_repos_parse_fns2_t *VAR_6 = FUNC_0(VAR_1, VAR_5);

  return FUNC_1(VAR_0, VAR_6, VAR_2,
                                     VAR_3, VAR_4, VAR_5);
}
