
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
typedef int svn_client_diff_summarize_func_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const**,int *,int *,char const*,char const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*,int ,int ,int ,int const*,int ,int const*,int *,int *,int *) ;
 int FUNC_2 (int const**,char const***,int ,void*,char const*,int *,int *) ;
 int * FUNC_3 (int ) ;
 int VAR_2 ;

svn_error_t *
FUNC_4(const char *VAR_3,
                           const svn_opt_revision_t *VAR_4,
                           const char *VAR_5,
                           const svn_opt_revision_t *VAR_6,
                           svn_depth_t VAR_7,
                           svn_boolean_t VAR_8,
                           const apr_array_header_t *VAR_9,
                           svn_client_diff_summarize_func_t VAR_10,
                           void *VAR_11,
                           svn_client_ctx_t *VAR_12,
                           apr_pool_t *VAR_13)
{
  const svn_diff_tree_processor_t *VAR_14;
  svn_opt_revision_t VAR_15;
  const char **VAR_16;


  VAR_15.kind = VAR_2;

  FUNC_0(FUNC_2(
                     &VAR_14, &VAR_16,
                     VAR_10, VAR_11,
                     VAR_3, VAR_13, VAR_13));

  return FUNC_3(FUNC_1(VAR_16, ((void*)0), ((void*)0),
                                 VAR_3, VAR_5,
                                 VAR_4, VAR_6,
                                 &VAR_15, VAR_1 ,
                                 VAR_7, VAR_8, VAR_9,
                                 VAR_0 ,
                                 VAR_14, VAR_12, VAR_13, VAR_13));
}
