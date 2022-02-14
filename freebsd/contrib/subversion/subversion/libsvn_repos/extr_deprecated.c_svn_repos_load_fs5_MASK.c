
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef enum svn_repos_load_uuid { ____Placeholder_svn_repos_load_uuid } svn_repos_load_uuid ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int ,int ,int,char const*,int ,int ,int ,int ,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_repos_t *VAR_1,
                   svn_stream_t *VAR_2,
                   svn_revnum_t VAR_3,
                   svn_revnum_t VAR_4,
                   enum svn_repos_load_uuid VAR_5,
                   const char *VAR_6,
                   svn_boolean_t VAR_7,
                   svn_boolean_t VAR_8,
                   svn_boolean_t VAR_9,
                   svn_boolean_t VAR_10,
                   svn_repos_notify_func_t VAR_11,
                   void *VAR_12,
                   svn_cancel_func_t VAR_13,
                   void *VAR_14,
                   apr_pool_t *VAR_15)
{
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
                            VAR_5, VAR_6,
                            VAR_8, VAR_8,
                            VAR_9, VAR_10, VAR_0,
                            VAR_11, VAR_12,
                            VAR_13, VAR_14, VAR_15);
}
