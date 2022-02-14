
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int const*,char const*,int const*,char const*,int const*,char const*,int ,int ,int ,int ,int ,int ,int ,int ,int ,char const*,int *,int *,int const*,int *,int *) ;
 int * FUNC_1 (int *,int ,int *) ;

svn_error_t *
FUNC_2(const apr_array_header_t *VAR_2,
                 const char *VAR_3,
                 const svn_opt_revision_t *VAR_4,
                 const char *VAR_5,
                 const svn_opt_revision_t *VAR_6,
                 const char *VAR_7,
                 svn_depth_t VAR_8,
                 svn_boolean_t VAR_9,
                 svn_boolean_t VAR_10,
                 svn_boolean_t VAR_11,
                 svn_boolean_t VAR_12,
                 svn_boolean_t VAR_13,
                 const char *VAR_14,
                 apr_file_t *VAR_15,
                 apr_file_t *VAR_16,
                 const apr_array_header_t *VAR_17,
                 svn_client_ctx_t *VAR_18,
                 apr_pool_t *VAR_19)
{
  svn_stream_t *VAR_20 = FUNC_1(VAR_15, VAR_1, VAR_19);
  svn_stream_t *VAR_21 = FUNC_1(VAR_16, VAR_1, VAR_19);

  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
                          VAR_6, VAR_7, VAR_8,
                          VAR_9, VAR_0 ,
                          VAR_10, VAR_11,
                          VAR_12, VAR_0 ,
                          VAR_0 , VAR_13,
                          VAR_14,
                          VAR_20, VAR_21, VAR_17, VAR_18, VAR_19);
}
