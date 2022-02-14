
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef enum svn_repos_load_uuid { ____Placeholder_svn_repos_load_uuid } svn_repos_load_uuid ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int *,int *,int,char const*,int ,int ,int ,int *,int *,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_repos_t *VAR_2,
                   svn_stream_t *VAR_3,
                   svn_stream_t *VAR_4,
                   enum svn_repos_load_uuid VAR_5,
                   const char *VAR_6,
                   svn_boolean_t VAR_7,
                   svn_boolean_t VAR_8,
                   svn_cancel_func_t VAR_9,
                   void *VAR_10,
                   apr_pool_t *VAR_11)
{
  return FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6,
                            VAR_7, VAR_8, VAR_0,
                            VAR_4 ? VAR_1 : ((void*)0),
                            VAR_4, VAR_9, VAR_10, VAR_11);
}
