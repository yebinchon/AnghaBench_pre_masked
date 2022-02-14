
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_status_t ;
struct status_baton {int ctx; int tree_conflicts; int prop_conflicts; int text_conflicts; int repos_locks; int skip_unrecognized; int show_last_committed; int detailed; int suppress_externals_placeholders; int target_path; int target_abspath; scalar_t__ xml_mode; } ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,int ,char const*,int const*,int ,int ,int ,int ,int ,int *,int *,int *,int ,int *) ;
 int * FUNC_1 (int ,int ,char const*,int const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_0,
                           const char *VAR_1,
                           const svn_client_status_t *VAR_2,
                           apr_pool_t *VAR_3)
{
  struct status_baton *VAR_4 = VAR_0;

  if (VAR_4->xml_mode)
    return FUNC_1(VAR_4->target_abspath, VAR_4->target_path,
                                    VAR_1, VAR_2, VAR_4->ctx, VAR_3);
  else
    return FUNC_0(VAR_4->target_abspath, VAR_4->target_path,
                                VAR_1, VAR_2,
                                VAR_4->suppress_externals_placeholders,
                                VAR_4->detailed,
                                VAR_4->show_last_committed,
                                VAR_4->skip_unrecognized,
                                VAR_4->repos_locks,
                                &VAR_4->text_conflicts,
                                &VAR_4->prop_conflicts,
                                &VAR_4->tree_conflicts,
                                VAR_4->ctx,
                                VAR_3);
}
