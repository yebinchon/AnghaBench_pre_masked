
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_parser_fns2_t ;
typedef int svn_repos_parse_fns3_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int *) ;
 int * FUNC_1 (int *,int *,void*,int ,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_stream_t *VAR_1,
                            const svn_repos_parser_fns2_t *VAR_2,
                            void *VAR_3,
                            svn_cancel_func_t VAR_4,
                            void *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_repos_parse_fns3_t *VAR_7 = FUNC_0(VAR_2, VAR_6);

  return FUNC_1(VAR_1, VAR_7, VAR_3, VAR_0,
                                     VAR_4, VAR_5, VAR_6);
}
