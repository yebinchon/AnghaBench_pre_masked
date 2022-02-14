
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_status_func_t ;
typedef int svn_revnum_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct old_status_func_cb_baton {void* original_baton; int original_func; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 struct old_status_func_cb_baton* FUNC_0 (int *,int) ;
 int VAR_1 ;
 int * FUNC_1 (int *,char const*,int *,int ,struct old_status_func_cb_baton*,int ,int ,int ,int ,int ,int *,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_2,
                  const char *VAR_3,
                  svn_opt_revision_t *VAR_4,
                  svn_wc_status_func_t VAR_5,
                  void *VAR_6,
                  svn_boolean_t VAR_7,
                  svn_boolean_t VAR_8,
                  svn_boolean_t VAR_9,
                  svn_boolean_t VAR_10,
                  svn_client_ctx_t *VAR_11,
                  apr_pool_t *VAR_12)
{
  struct old_status_func_cb_baton *VAR_13 = FUNC_0(VAR_12, sizeof(*VAR_13));
  VAR_13->original_func = VAR_5;
  VAR_13->original_baton = VAR_6;

  return FUNC_1(VAR_2, VAR_3, VAR_4,
                            VAR_1, VAR_13,
                            VAR_7, VAR_8, VAR_9, VAR_10, VAR_0,
                            VAR_11, VAR_12);
}
