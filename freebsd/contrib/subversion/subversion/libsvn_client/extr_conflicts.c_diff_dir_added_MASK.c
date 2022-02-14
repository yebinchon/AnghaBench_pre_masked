
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int revision; int repos_relpath; } ;
typedef TYPE_1__ svn_diff_source_t ;
struct svn_diff_tree_processor_t {struct merge_newly_added_dir_baton* baton; } ;
struct merge_newly_added_dir_baton {char* target_abspath; TYPE_2__* ctx; int repos_root_url; int merge_right_rev; int merge_left_rev; int added_repos_relpath; int repos_uuid; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_6__ {int notify_baton2; int notify_func2; int wc_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ,char*,int ,int ) ;
 int FUNC_6 (char*,int ,int *,int ,int ,int ,int ,TYPE_2__*,int *) ;
 int FUNC_7 (char const*,int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_8 (char*,char const*,int *) ;
 int FUNC_9 (char const*,scalar_t__*,int *) ;
 int FUNC_10 (char const*,int ,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int ,char const*,int *) ;
 int FUNC_12 (int ,char*,int *) ;
 int FUNC_13 (int ,char const*,int ,char const*,int ,int *,int *,int ,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int ,char const*,char const*,int const*,int ,int ,int *,int *,int *,int ,int ,int *) ;
 int FUNC_15 (scalar_t__*,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(const char *VAR_11,
               const svn_diff_source_t *VAR_12,
               const svn_diff_source_t *VAR_13,
               apr_hash_t *VAR_14,
               apr_hash_t *VAR_15,
               void *VAR_16,
               const struct svn_diff_tree_processor_t *VAR_17,
               apr_pool_t *VAR_18)
{
  struct merge_newly_added_dir_baton *VAR_19 = VAR_17->baton;
  const char *VAR_20;
  const char *VAR_21;
  svn_node_kind_t VAR_22;
  svn_node_kind_t VAR_23;
  apr_hash_index_t *VAR_24;


  if (VAR_11[0] == '\0')
    {

      FUNC_0(FUNC_12(VAR_19->ctx->wc_ctx, VAR_19->target_abspath,
                                        VAR_18));
      FUNC_0(FUNC_6(VAR_19->target_abspath,
                                    VAR_19->added_repos_relpath, VAR_15,
                                    VAR_19->repos_root_url, VAR_19->repos_uuid,
                                    VAR_19->merge_left_rev, VAR_19->merge_right_rev,
                                    VAR_19->ctx, VAR_18));
      return VAR_2;

    }

  VAR_20 = FUNC_8(VAR_19->target_abspath, VAR_11, VAR_18);

  FUNC_0(FUNC_15(&VAR_22, VAR_19->ctx->wc_ctx, VAR_20,
                            VAR_1, VAR_1, VAR_18));
  FUNC_0(FUNC_9(VAR_20, &VAR_23, VAR_18));

  if (VAR_22 == VAR_6 && VAR_23 == VAR_6)
    {
      FUNC_0(FUNC_6(FUNC_8(VAR_19->target_abspath, VAR_11,
                                                    VAR_18),
                                    VAR_19->added_repos_relpath, VAR_15,
                                    VAR_19->repos_root_url, VAR_19->repos_uuid,
                                    VAR_19->merge_left_rev, VAR_19->merge_right_rev,
                                    VAR_19->ctx, VAR_18));
      return VAR_2;
    }

  if (VAR_22 != VAR_7 && VAR_22 != VAR_8)
    {
      FUNC_0(FUNC_7(
                VAR_20, VAR_9,
                VAR_10,
                VAR_22, VAR_7, VAR_6,
                VAR_19->repos_root_url, VAR_19->repos_uuid,
                FUNC_11(VAR_19->added_repos_relpath, VAR_11, VAR_18),
                VAR_19->merge_left_rev, VAR_19->merge_right_rev,
                VAR_19->ctx->wc_ctx, VAR_19->ctx->notify_func2, VAR_19->ctx->notify_baton2,
                VAR_18));
      return VAR_2;
    }

  if (VAR_23 != VAR_7)
    {
      FUNC_0(FUNC_7(
                VAR_20, VAR_9,
                VAR_10, VAR_22,
                VAR_7, VAR_6, VAR_19->repos_root_url, VAR_19->repos_uuid,
                FUNC_11(VAR_19->added_repos_relpath, VAR_11, VAR_18),
                VAR_19->merge_left_rev, VAR_19->merge_right_rev,
                VAR_19->ctx->wc_ctx, VAR_19->ctx->notify_func2, VAR_19->ctx->notify_baton2,
                VAR_18));
      return VAR_2;
    }

  FUNC_0(FUNC_10(VAR_20, VAR_0, VAR_18));
  VAR_21 = FUNC_5(VAR_18, VAR_19->repos_root_url, "/",
                             VAR_13->repos_relpath, VAR_3);
  FUNC_0(FUNC_13(VAR_19->ctx->wc_ctx, VAR_20, VAR_5,
                      VAR_21, VAR_13->revision,
                      ((void*)0), ((void*)0),
                      VAR_19->ctx->notify_func2, VAR_19->ctx->notify_baton2,
                      VAR_18));

  for (VAR_24 = FUNC_1(VAR_18, VAR_15);
       VAR_24;
       VAR_24 = FUNC_2(VAR_24))
    {
      const char *VAR_25 = FUNC_3(VAR_24);
      const svn_string_t *VAR_26 = FUNC_4(VAR_24);

      FUNC_0(FUNC_14(VAR_19->ctx->wc_ctx, VAR_20,
                               VAR_25, VAR_26, VAR_4,
                               VAR_1, ((void*)0) ,
                               ((void*)0), ((void*)0),
                               VAR_19->ctx->notify_func2, VAR_19->ctx->notify_baton2,
                               VAR_18));
    }

  return VAR_2;
}
