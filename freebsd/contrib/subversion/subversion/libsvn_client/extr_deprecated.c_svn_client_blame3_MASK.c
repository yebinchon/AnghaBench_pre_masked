
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_diff_file_options_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_blame_receiver_t ;
typedef int svn_client_blame_receiver2_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int const*,int const*,int const*,int const*,int ,int ,int ,void*,int *,int *) ;
 int FUNC_1 (int *,void**,int ,void*,int *) ;

svn_error_t *
FUNC_2(const char *VAR_1,
                  const svn_opt_revision_t *VAR_2,
                  const svn_opt_revision_t *VAR_3,
                  const svn_opt_revision_t *VAR_4,
                  const svn_diff_file_options_t *VAR_5,
                  svn_boolean_t VAR_6,
                  svn_client_blame_receiver_t VAR_7,
                  void *VAR_8,
                  svn_client_ctx_t *VAR_9,
                  apr_pool_t *VAR_10)
{
  svn_client_blame_receiver2_t VAR_11;
  void *VAR_12;

  FUNC_1(&VAR_11, &VAR_12, VAR_7, VAR_8,
                      VAR_10);

  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                           VAR_6, VAR_0, VAR_11, VAR_12,
                           VAR_9, VAR_10);
}
