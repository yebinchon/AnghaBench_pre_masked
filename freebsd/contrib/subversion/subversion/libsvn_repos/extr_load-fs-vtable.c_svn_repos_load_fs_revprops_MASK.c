
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_parse_fns3_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const**,void**,int *,int ,int ,int ,int ,int ,int ,void*,int *) ;
 int * FUNC_2 (int *,int const*,void*,int ,int ,void*,int *) ;

svn_error_t *
FUNC_3(svn_repos_t *VAR_1,
                           svn_stream_t *VAR_2,
                           svn_revnum_t VAR_3,
                           svn_revnum_t VAR_4,
                           svn_boolean_t VAR_5,
                           svn_boolean_t VAR_6,
                           svn_boolean_t VAR_7,
                           svn_repos_notify_func_t VAR_8,
                           void *VAR_9,
                           svn_cancel_func_t VAR_10,
                           void *VAR_11,
                           apr_pool_t *VAR_12)
{
  const svn_repos_parse_fns3_t *VAR_13;
  void *VAR_14;



  FUNC_0(FUNC_1(&VAR_13, &VAR_14,
                               VAR_1,
                               VAR_3, VAR_4,
                               VAR_5,
                               VAR_6,
                               VAR_7,
                               VAR_8,
                               VAR_9,
                               VAR_12));

  return FUNC_2(VAR_2, VAR_13, VAR_14, VAR_0,
                                     VAR_10, VAR_11, VAR_12);
}
