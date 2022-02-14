
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_error_t ;
typedef int svn_cl__conflict_stats_t ;
struct notify_baton {int path_prefix; int * conflict_stats; void* had_print_error; scalar_t__ progress_revision; scalar_t__ in_external; void* is_wc_to_repos_copy; void* is_export; void* is_checkout; void* sent_first_txdelta; void* received_some_change; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct notify_baton* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int *) ;

svn_error_t *
FUNC_3(svn_wc_notify_func2_t *VAR_3,
                     void **VAR_4,
                     svn_cl__conflict_stats_t *VAR_5,
                     apr_pool_t *VAR_6)
{
  struct notify_baton *VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7));

  VAR_7->received_some_change = VAR_0;
  VAR_7->sent_first_txdelta = VAR_0;
  VAR_7->is_checkout = VAR_0;
  VAR_7->is_export = VAR_0;
  VAR_7->is_wc_to_repos_copy = VAR_0;
  VAR_7->in_external = 0;
  VAR_7->progress_revision = 0;
  VAR_7->had_print_error = VAR_0;
  VAR_7->conflict_stats = VAR_5;
  FUNC_0(FUNC_2(&VAR_7->path_prefix, "", VAR_6));

  *VAR_3 = VAR_2;
  *VAR_4 = VAR_7;
  return VAR_1;
}
