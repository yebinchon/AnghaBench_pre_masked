
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef enum svn_repos_load_uuid { ____Placeholder_svn_repos_load_uuid } svn_repos_load_uuid ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int ,int ,int,char const*,int ,int ,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_repos_t *VAR_1,
                   svn_stream_t *VAR_2,
                   enum svn_repos_load_uuid VAR_3,
                   const char *VAR_4,
                   svn_boolean_t VAR_5,
                   svn_boolean_t VAR_6,
                   svn_boolean_t VAR_7,
                   svn_repos_notify_func_t VAR_8,
                   void *VAR_9,
                   svn_cancel_func_t VAR_10,
                   void *VAR_11,
                   apr_pool_t *VAR_12)
{
  return FUNC_0(VAR_1, VAR_2,
                            VAR_0, VAR_0,
                            VAR_3, VAR_4,
                            VAR_5, VAR_6,
                            VAR_7, VAR_8, VAR_9,
                            VAR_10, VAR_11, VAR_12);
}
