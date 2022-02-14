
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_commit_info_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int **,int const*,int ,int ,int ,int *,int *,int *,int *) ;

svn_error_t *
FUNC_2(svn_commit_info_t **VAR_1,
                   const apr_array_header_t *VAR_2,
                   svn_boolean_t VAR_3,
                   svn_boolean_t VAR_4,
                   svn_client_ctx_t *VAR_5,
                   apr_pool_t *VAR_6)
{
  svn_depth_t VAR_7 = FUNC_0(VAR_3);

  return FUNC_1(VAR_1, VAR_2, VAR_7, VAR_4,
                            VAR_0, ((void*)0), ((void*)0), VAR_5, VAR_6);
}
