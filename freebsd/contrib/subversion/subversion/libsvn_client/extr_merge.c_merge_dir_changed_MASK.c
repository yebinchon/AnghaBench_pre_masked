
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef scalar_t__ svn_wc_notify_state_t ;
typedef int svn_wc_conflict_version_t ;
typedef int svn_error_t ;
typedef int svn_diff_source_t ;
struct TYPE_15__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct svn_diff_tree_processor_t {TYPE_2__* baton; } ;
struct merge_dir_baton_t {scalar_t__ tree_conflict_reason; int parent_baton; int skip_reason; scalar_t__ shadowed; } ;
struct TYPE_16__ {int pool; int conflicted_paths; int dry_run; TYPE_12__* target; int merge_source; TYPE_1__* ctx; } ;
typedef TYPE_2__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_17__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;
struct TYPE_14__ {int abspath; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (TYPE_2__*,struct merge_dir_baton_t*,int *) ;
 int FUNC_3 (int const**,int const**,char const*,int ,int ,int *,TYPE_12__*,int *,int *) ;
 int FUNC_4 (TYPE_2__*,struct merge_dir_baton_t*,char const*,int *) ;
 int FUNC_5 (TYPE_3__ const**,char const*,TYPE_3__ const*,TYPE_2__*,int *,int *) ;
 int FUNC_6 (TYPE_2__*,char const*,int ,int ,int ,int ,int *) ;
 int FUNC_7 (TYPE_2__*,char const*,int ,int ,scalar_t__,int *) ;
 char* FUNC_8 (int ,char const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (scalar_t__*,int ,char const*,int const*,int const*,int *,TYPE_3__ const*,int ,int *,int *,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_9,
                  const svn_diff_source_t *VAR_10,
                  const svn_diff_source_t *VAR_11,
                            apr_hash_t *VAR_12,
                            apr_hash_t *VAR_13,
                  const apr_array_header_t *VAR_14,
                  void *VAR_15,
                  const struct svn_diff_tree_processor_t *VAR_16,
                  apr_pool_t *VAR_17)
{
  merge_cmd_baton_t *VAR_18 = VAR_16->baton;
  struct merge_dir_baton_t *VAR_19 = VAR_15;
  const apr_array_header_t *VAR_20;
  const char *VAR_21 = FUNC_8(VAR_18->target->abspath,
                                              VAR_9, VAR_17);

  FUNC_0(FUNC_2(VAR_18, VAR_19, VAR_17));

  FUNC_0(FUNC_4(VAR_18, VAR_19, VAR_21, VAR_17));

  if (VAR_19->shadowed)
    {
      if (VAR_19->tree_conflict_reason == VAR_0)
        {

          FUNC_0(FUNC_6(VAR_18, VAR_21, VAR_2,
                              VAR_8,
                              VAR_19->skip_reason, VAR_19->parent_baton,
                              VAR_17));
        }

      return VAR_1;
    }

  FUNC_0(FUNC_5(&VAR_20, VAR_21, VAR_14,
                                      VAR_18, VAR_17, VAR_17));

  if (VAR_20->nelts)
    {
      const svn_wc_conflict_version_t *VAR_22;
      const svn_wc_conflict_version_t *VAR_23;
      svn_client_ctx_t *VAR_24 = VAR_18->ctx;
      svn_wc_notify_state_t VAR_25;

      FUNC_0(FUNC_3(&VAR_22, &VAR_23, VAR_21,
                                     VAR_2, VAR_2,
                                     &VAR_18->merge_source,
                                     VAR_18->target,
                                     VAR_17, VAR_17));

      FUNC_0(FUNC_9(&VAR_25, VAR_24->wc_ctx, VAR_21,
                                  VAR_22, VAR_23,
                                  VAR_12, VAR_20,
                                  VAR_18->dry_run,
                                  ((void*)0), ((void*)0),
                                  VAR_24->cancel_func, VAR_24->cancel_baton,
                                  VAR_17));

      if (VAR_25 == VAR_5)
        {
          FUNC_1(&VAR_18->conflicted_paths, VAR_21,
                               VAR_18->pool);
        }

      if (VAR_25 == VAR_5
          || VAR_25 == VAR_7
          || VAR_25 == VAR_4)
        {
          FUNC_0(FUNC_7(VAR_18, VAR_21, VAR_3,
                                       VAR_6,
                                       VAR_25, VAR_17));
        }
    }

  return VAR_1;
}
