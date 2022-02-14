
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_error_t ;
struct notify_baton {int path_prefix; int conflicted_paths; scalar_t__ skipped_paths; scalar_t__ tree_conflicts; scalar_t__ prop_conflicts; scalar_t__ text_conflicts; void* had_print_error; void* in_external; void* is_wc_to_repos_copy; void* is_export; void* is_checkout; void* sent_first_txdelta; void* received_some_change; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 struct notify_baton* FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int *) ;

svn_error_t *
FUNC_4(svn_wc_notify_func2_t *VAR_3,
                     void **VAR_4,
                     apr_pool_t *VAR_5)
{
  struct notify_baton *VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6));

  VAR_6->received_some_change = VAR_0;
  VAR_6->sent_first_txdelta = VAR_0;
  VAR_6->is_checkout = VAR_0;
  VAR_6->is_export = VAR_0;
  VAR_6->is_wc_to_repos_copy = VAR_0;
  VAR_6->in_external = VAR_0;
  VAR_6->had_print_error = VAR_0;
  VAR_6->text_conflicts = 0;
  VAR_6->prop_conflicts = 0;
  VAR_6->tree_conflicts = 0;
  VAR_6->skipped_paths = 0;
  VAR_6->conflicted_paths = FUNC_1(VAR_5);
  FUNC_0(FUNC_3(&VAR_6->path_prefix, "", VAR_5));

  *VAR_3 = VAR_2;
  *VAR_4 = VAR_6;
  return VAR_1;
}
