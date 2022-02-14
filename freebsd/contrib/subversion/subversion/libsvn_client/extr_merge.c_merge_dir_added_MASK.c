
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef scalar_t__ svn_wc_notify_state_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_17__ {int revision; } ;
typedef TYPE_4__ svn_diff_source_t ;
struct svn_diff_tree_processor_t {TYPE_5__* baton; } ;
struct merge_dir_baton_t {scalar_t__ tree_conflict_reason; TYPE_7__* parent_baton; scalar_t__ edited; int skip_reason; scalar_t__ shadowed; } ;
struct TYPE_15__ {TYPE_1__* loc2; scalar_t__ ancestral; } ;
struct TYPE_18__ {int pool; int conflicted_paths; TYPE_3__* ctx; int dry_run; int paths_with_new_mergeinfo; TYPE_12__* target; TYPE_2__ merge_source; scalar_t__ same_repos; int added_abspaths; scalar_t__ reintegrate_merge; int record_only; } ;
typedef TYPE_5__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_19__ {int added; } ;
struct TYPE_16__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
struct TYPE_14__ {int url; } ;
struct TYPE_13__ {int abspath; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_12__*,char const*,char const*,int *) ;
 int FUNC_5 (TYPE_5__*,struct merge_dir_baton_t*,int *) ;
 int FUNC_6 (TYPE_5__*,struct merge_dir_baton_t*,char const*,int *) ;
 int FUNC_7 (TYPE_5__*,char const*,int ,int ,int ,TYPE_7__*,int *) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int *,int *,int **,int *) ;
 char* FUNC_10 (char const*,int *) ;
 char* FUNC_11 (int ,char const*,int *) ;
 char* FUNC_12 (int ,char const*,int *) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int *) ;
 int VAR_3 ;
 char* FUNC_15 (int ,char const*,int *) ;
 int * FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int ,char const*,int *,char const*,int ,int *) ;
 int FUNC_19 (scalar_t__*,int ,char const*,int *,int *,int ,int ,int ,int *,int *,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_20(const char *VAR_6,
                const svn_diff_source_t *VAR_7,
                const svn_diff_source_t *VAR_8,
                          apr_hash_t *VAR_9,
                          apr_hash_t *VAR_10,
                void *VAR_11,
                const struct svn_diff_tree_processor_t *VAR_12,
                apr_pool_t *VAR_13)
{
  merge_cmd_baton_t *VAR_14 = VAR_12->baton;
  struct merge_dir_baton_t *VAR_15 = VAR_11;
  const char *VAR_16 = FUNC_12(VAR_14->target->abspath,
                                              VAR_6, VAR_13);


  FUNC_0(FUNC_5(VAR_14, VAR_15, VAR_13));
  FUNC_0(FUNC_6(VAR_14, VAR_15, VAR_16, VAR_13));

  if (VAR_15->shadowed)
    {
      if (VAR_15->tree_conflict_reason == VAR_0)
        {

          FUNC_0(FUNC_7(VAR_14, VAR_16, VAR_3,
                              VAR_5,
                              VAR_15->skip_reason, VAR_15->parent_baton,
                              VAR_13));
        }

      return VAR_1;
    }

  FUNC_1(
                 VAR_15->edited
                 && ! VAR_14->record_only
                 );

  if ((VAR_14->merge_source.ancestral || VAR_14->reintegrate_merge)
      && ( !VAR_15->parent_baton || !VAR_15->parent_baton->added))
    {

      FUNC_8(VAR_14->added_abspaths, VAR_16);
    }

  if (VAR_14->same_repos)
    {
      const char *VAR_17;
      svn_revnum_t VAR_18;
      const char *VAR_19;
      const char *VAR_20;


      apr_hash_t *VAR_21 = VAR_10;

      VAR_19 = FUNC_10(VAR_16, VAR_13);
      VAR_20 = FUNC_11(VAR_14->target->abspath, VAR_16, ((void*)0));
      FUNC_1(VAR_20 != ((void*)0));

      VAR_17 = FUNC_15(VAR_14->merge_source.loc2->url,
                                                 VAR_20, VAR_13);
      VAR_18 = VAR_8->revision;

      FUNC_0(FUNC_4(VAR_14->target, VAR_19, VAR_17,
                                VAR_13));

      if (!VAR_14->dry_run)
        {
          FUNC_0(FUNC_18(VAR_14->ctx->wc_ctx,
                                                VAR_16,
                                                VAR_21,
                                                VAR_17, VAR_18,
                                                VAR_13));
        }

      if (FUNC_13(VAR_21, VAR_2))
        {
          FUNC_2(&VAR_14->paths_with_new_mergeinfo,
                               VAR_16, VAR_14->pool);
        }
    }
  else
    {
      apr_array_header_t *VAR_22;
      apr_hash_t *VAR_23;
      svn_wc_notify_state_t VAR_24;

      FUNC_0(FUNC_9(FUNC_17(VAR_10,
                                                          VAR_13),
                                   ((void*)0), ((void*)0), &VAR_22, VAR_13));

      VAR_23 = FUNC_16(VAR_22, VAR_13);

      FUNC_14(VAR_23, VAR_2, ((void*)0));






      FUNC_0(FUNC_19(&VAR_24, VAR_14->ctx->wc_ctx,
                                  VAR_16,
                                  ((void*)0), ((void*)0),
                                  FUNC_3(VAR_13),
                                  FUNC_17(VAR_23,
                                                         VAR_13),
                                  VAR_14->dry_run,
                                  ((void*)0), ((void*)0),
                                  VAR_14->ctx->cancel_func,
                                  VAR_14->ctx->cancel_baton,
                                  VAR_13));
      if (VAR_24 == VAR_4)
        {
          FUNC_2(&VAR_14->conflicted_paths, VAR_16,
                               VAR_14->pool);
        }
    }

  return VAR_1;
}
