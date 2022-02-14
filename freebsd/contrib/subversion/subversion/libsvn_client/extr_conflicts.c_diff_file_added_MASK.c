
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_diff_source_t ;
struct svn_diff_tree_processor_t {struct merge_newly_added_dir_baton* baton; } ;
struct merge_newly_added_dir_baton {TYPE_1__* ctx; int merge_right_rev; int merge_left_rev; int added_repos_relpath; int repos_uuid; int repos_root_url; int target_abspath; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_2__ {int notify_baton2; int notify_func2; int wc_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char const*,char const*,int ,TYPE_1__*,int *) ;
 int FUNC_2 (char const*,int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int *,int *,int **,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (char const*,scalar_t__*,int *) ;
 int FUNC_6 (char const*,char const*,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (int ,char const*,int ,int ,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (scalar_t__*,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char *VAR_7,
                const svn_diff_source_t *VAR_8,
                const svn_diff_source_t *VAR_9,
                const char *VAR_10,
                const char *VAR_11,
                apr_hash_t *VAR_12,
                apr_hash_t *VAR_13,
                void *VAR_14,
                const struct svn_diff_tree_processor_t *VAR_15,
                apr_pool_t *VAR_16)
{
  struct merge_newly_added_dir_baton *VAR_17 = VAR_15->baton;
  const char *VAR_18;
  svn_node_kind_t VAR_19;
  svn_node_kind_t VAR_20;
  apr_array_header_t *VAR_21;
  apr_array_header_t *VAR_22;

  VAR_18 = FUNC_4(VAR_17->target_abspath, VAR_7, VAR_16);

  FUNC_0(FUNC_11(&VAR_19, VAR_17->ctx->wc_ctx, VAR_18,
                            VAR_0, VAR_0, VAR_16));
  FUNC_0(FUNC_5(VAR_18, &VAR_20, VAR_16));

  if (VAR_19 == VAR_2 && VAR_20 == VAR_2)
    {
      VAR_21 = FUNC_8(VAR_13, VAR_16);
      FUNC_0(FUNC_3(VAR_21, ((void*)0), ((void*)0), &VAR_22,
                                   VAR_16));
      FUNC_0(FUNC_1(VAR_18, VAR_11,
                                FUNC_7(VAR_22,
                                                       VAR_16),
                                VAR_17->ctx, VAR_16));
      return VAR_1;
    }

  if (VAR_19 != VAR_3 && VAR_19 != VAR_4)
    {
      FUNC_0(FUNC_2(
                VAR_18, VAR_5,
                VAR_6,
                VAR_19, VAR_3, VAR_2,
                VAR_17->repos_root_url, VAR_17->repos_uuid,
                FUNC_9(VAR_17->added_repos_relpath, VAR_7, VAR_16),
                VAR_17->merge_left_rev, VAR_17->merge_right_rev,
                VAR_17->ctx->wc_ctx, VAR_17->ctx->notify_func2, VAR_17->ctx->notify_baton2,
                VAR_16));
      return VAR_1;
    }

  if (VAR_20 != VAR_3)
    {
      FUNC_0(FUNC_2(
                VAR_18, VAR_5,
                VAR_6, VAR_19,
                VAR_3, VAR_2, VAR_17->repos_root_url, VAR_17->repos_uuid,
                FUNC_9(VAR_17->added_repos_relpath, VAR_7, VAR_16),
                VAR_17->merge_left_rev, VAR_17->merge_right_rev,
                VAR_17->ctx->wc_ctx, VAR_17->ctx->notify_func2, VAR_17->ctx->notify_baton2,
                VAR_16));
      return VAR_1;
    }

  VAR_21 = FUNC_8(VAR_13, VAR_16);
  FUNC_0(FUNC_3(VAR_21, ((void*)0), ((void*)0), &VAR_22,
                               VAR_16));
  FUNC_0(FUNC_6(VAR_11, VAR_18, VAR_0, VAR_16));
  FUNC_0(FUNC_10(VAR_17->ctx->wc_ctx, VAR_18,
                                FUNC_7(VAR_22,
                                                       VAR_16),
                                VAR_0, VAR_17->ctx->notify_func2,
                                VAR_17->ctx->notify_baton2, VAR_16));

  return VAR_1;
}
