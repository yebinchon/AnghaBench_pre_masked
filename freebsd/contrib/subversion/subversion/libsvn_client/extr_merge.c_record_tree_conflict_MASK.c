
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int kind; } ;
typedef TYPE_3__ svn_wc_notify_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_conflict_version_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
struct TYPE_23__ {scalar_t__ reason; scalar_t__ action; int * src_left_version; } ;
typedef TYPE_4__ svn_wc_conflict_description2_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_node_kind_t ;
struct TYPE_24__ {int end; int start; int member_2; int member_1; int member_0; } ;
typedef TYPE_5__ svn_merge_range_t ;
typedef int svn_error_t ;
struct TYPE_25__ {int rev; } ;
typedef TYPE_6__ svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
struct merge_source_t {scalar_t__ ancestral; int loc2; int loc1; } ;
struct merge_dir_baton_t {int new_tree_conflicts; int * pool; } ;
struct TYPE_20__ {int nodes_with_mergeinfo; } ;
struct TYPE_26__ {TYPE_2__* ctx; int target; struct merge_source_t merge_source; TYPE_1__ notify_begin; int dry_run; int pool; int conflicted_paths; int tree_conflicted_abspaths; scalar_t__ reintegrate_merge; scalar_t__ record_only; } ;
typedef TYPE_7__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_21__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_3__*,int *) ;int * wc_ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int *,int ,int,char const*) ;
 int FUNC_6 (int const**,int const**,char const*,int ,int ,struct merge_source_t*,int ,int *,int *) ;
 struct merge_source_t* FUNC_7 (TYPE_6__*,TYPE_6__*,scalar_t__,int *) ;
 int FUNC_8 (TYPE_7__*,char const*,int ,int *) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (int ,TYPE_3__*,int *) ;
 TYPE_6__* FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ,TYPE_4__*) ;
 int FUNC_13 (int *,TYPE_4__*,int *) ;
 int FUNC_14 (int *,char const*,int *) ;
 int FUNC_15 (char const**,int *,int *,char const*,int *,int *) ;
 int FUNC_16 (char const**,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_17 (char const*,int ,int ,int const*,int const*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* FUNC_18 (char const*,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static svn_error_t *
FUNC_19(merge_cmd_baton_t *VAR_11,
                     const char *VAR_12,
                     struct merge_dir_baton_t *VAR_13,
                     svn_node_kind_t VAR_14,
                     svn_node_kind_t VAR_15,
                     svn_node_kind_t VAR_16,
                     svn_wc_conflict_action_t VAR_17,
                     svn_wc_conflict_reason_t VAR_18,
                     const svn_wc_conflict_description2_t *VAR_19,
                     svn_boolean_t VAR_20,
                     apr_pool_t *VAR_21)
{
  svn_wc_context_t *VAR_22 = VAR_11->ctx->wc_ctx;

  if (VAR_11->record_only)
    return VAR_2;

  if (VAR_11->merge_source.ancestral
      || VAR_11->reintegrate_merge)
    {
      FUNC_9(VAR_11->tree_conflicted_abspaths, VAR_12);
    }

  FUNC_2(&VAR_11->conflicted_paths, VAR_12,
                       VAR_11->pool);

  if (!VAR_11->dry_run)
    {
       svn_wc_conflict_description2_t *VAR_23;
       const svn_wc_conflict_version_t *VAR_24;
       const svn_wc_conflict_version_t *VAR_25;
       apr_pool_t *VAR_26 = VAR_13 ? VAR_13->pool
                                              : VAR_21;

      if (VAR_18 == VAR_6)
        {
          const char *VAR_27;

          FUNC_1(FUNC_15(&VAR_27, ((void*)0),
                                              VAR_22, VAR_12,
                                              VAR_21, VAR_21));

          if (VAR_27)
            {


              VAR_18 = VAR_7;
            }
        }
      else if (VAR_18 == VAR_5)
        {
          const char *VAR_28;
          FUNC_1(FUNC_16(&VAR_28, ((void*)0),
                                              VAR_22, VAR_12,
                                              VAR_21, VAR_21));
          if (VAR_28)
            VAR_18 = VAR_8;
        }

      if (FUNC_0(VAR_11) && VAR_11->merge_source.ancestral)
        {
          struct merge_source_t *VAR_29;
          svn_client__pathrev_t *VAR_30;
          svn_client__pathrev_t *VAR_31;
          svn_merge_range_t VAR_32 =
            {VAR_1, VAR_1, VAR_3};






          (void)FUNC_5(
            &(VAR_32.start), &(VAR_32.end),
            VAR_11->notify_begin.nodes_with_mergeinfo,
            VAR_17 != VAR_4,
            VAR_12);
          VAR_30 = FUNC_11(VAR_11->merge_source.loc1,
                                         VAR_21);
          VAR_31 = FUNC_11(VAR_11->merge_source.loc2,
                                         VAR_21);
          VAR_30->rev = VAR_32.start;
          VAR_31->rev = VAR_32.end;
          VAR_29 = FUNC_7(VAR_30, VAR_31,
                                       VAR_11->merge_source.ancestral,
                                       VAR_21);
          FUNC_1(FUNC_6(&VAR_24, &VAR_25, VAR_12,
                                         VAR_15,
                                         VAR_16,
                                         VAR_29, VAR_11->target,
                                         VAR_26, VAR_21));
        }
      else
        FUNC_1(FUNC_6(&VAR_24, &VAR_25, VAR_12,
                                       VAR_15,
                                       VAR_16,
                                       &VAR_11->merge_source, VAR_11->target,
                                       VAR_26, VAR_21));


      if (VAR_19 != ((void*)0) && VAR_19->src_left_version)
          VAR_24 = VAR_19->src_left_version;

      VAR_23 = FUNC_17(
                        VAR_12, VAR_14,
                        VAR_10,
                        VAR_24, VAR_25, VAR_26);

      VAR_23->action = VAR_17;
      VAR_23->reason = VAR_18;


      if (VAR_19)
        FUNC_1(FUNC_14(VAR_22, VAR_12,
                                          VAR_21));

      FUNC_1(FUNC_13(VAR_11->ctx->wc_ctx, VAR_23,
                                        VAR_21));

      if (VAR_13)
        {
          if (! VAR_13->new_tree_conflicts)
            VAR_13->new_tree_conflicts = FUNC_3(VAR_26);

          FUNC_12(VAR_13->new_tree_conflicts,
                        FUNC_4(VAR_26, VAR_12),
                        VAR_23);
        }


    }


  if (VAR_11->ctx->notify_func2 && VAR_20)
    {
      svn_wc_notify_t *VAR_33;

      FUNC_1(FUNC_8(VAR_11, VAR_12, VAR_0, VAR_21));

      VAR_33 = FUNC_18(VAR_12, VAR_9,
                                    VAR_21);
      VAR_33->kind = VAR_14;

      VAR_11->ctx->notify_func2(VAR_11->ctx->notify_baton2, VAR_33,
                                 VAR_21);
    }

  return VAR_2;
}
