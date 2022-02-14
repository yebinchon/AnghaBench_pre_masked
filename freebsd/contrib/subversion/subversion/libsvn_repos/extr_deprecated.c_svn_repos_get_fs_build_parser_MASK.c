
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_t ;
typedef int svn_repos_parser_fns_t ;
typedef int svn_repos_parse_fns2_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef enum svn_repos_load_uuid { ____Placeholder_svn_repos_load_uuid } svn_repos_load_uuid ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int const*,int *) ;
 int FUNC_2 (int const**,void**,int *,int ,int,int *,char const*,int *) ;

svn_error_t *
FUNC_3(const svn_repos_parser_fns_t **VAR_1,
                              void **VAR_2,
                              svn_repos_t *VAR_3,
                              svn_boolean_t VAR_4,
                              enum svn_repos_load_uuid VAR_5,
                              svn_stream_t *VAR_6,
                              const char *VAR_7,
                              apr_pool_t *VAR_8)
{
  const svn_repos_parse_fns2_t *VAR_9;

  FUNC_0(FUNC_2(&VAR_9, VAR_2, VAR_3,
                                         VAR_4, VAR_5, VAR_6,
                                         VAR_7, VAR_8));

  *VAR_1 = FUNC_1(VAR_9, VAR_8);
  return VAR_0;
}
