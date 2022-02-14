
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef scalar_t__ svn_wc_notify_state_t ;
typedef int svn_wc_conflict_version_t ;
typedef int svn_error_t ;
struct TYPE_19__ {int revision; } ;
typedef TYPE_1__ svn_diff_source_t ;
struct TYPE_20__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_diff_tree_processor_t {TYPE_3__* baton; } ;
struct merge_file_baton_t {scalar_t__ tree_conflict_reason; int parent_baton; int skip_reason; scalar_t__ shadowed; } ;
struct TYPE_21__ {int pool; int conflicted_paths; int merge_options; int diff3_cmd; int dry_run; TYPE_7__* ext_patterns; scalar_t__ record_only; TYPE_17__* target; int merge_source; TYPE_2__* ctx; } ;
typedef TYPE_3__ merge_cmd_baton_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_22__ {scalar_t__ nelts; } ;
typedef TYPE_4__ apr_array_header_t ;
struct TYPE_23__ {scalar_t__ nelts; } ;
struct TYPE_18__ {int abspath; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,int ) ;
 char* FUNC_4 (int *,int ,char*,char const*,...) ;
 int FUNC_5 (int const**,int const**,char const*,int ,int ,int *,TYPE_17__*,int *,int *) ;
 int FUNC_6 (TYPE_3__*,struct merge_file_baton_t*,char const*,int *) ;
 int FUNC_7 (TYPE_4__ const**,char const*,TYPE_4__ const*,TYPE_3__*,int *,int *) ;
 int FUNC_8 (TYPE_3__*,char const*,int ,int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_3__*,char const*,int ,scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (char const*,TYPE_7__*) ;
 scalar_t__ FUNC_11 (char const*) ;
 char* FUNC_12 (int ,char const*,int *) ;
 int VAR_3 ;
 int FUNC_13 (int *,char const**,char const*,int *) ;
 int FUNC_14 (int*,scalar_t__*,int ,char const*,char const*,char const*,char const*,char const*,char const*,int const*,int const*,int ,int ,int ,int *,TYPE_4__ const*,int *,int *,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (scalar_t__*,int ,char const*,int const*,int const*,int *,TYPE_4__ const*,int ,int *,int *,int ,int ,int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (scalar_t__*,int ,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(const char *VAR_14,
                  const svn_diff_source_t *VAR_15,
                  const svn_diff_source_t *VAR_16,
                  const char *VAR_17,
                  const char *VAR_18,
                            apr_hash_t *VAR_19,
                            apr_hash_t *VAR_20,
                  svn_boolean_t VAR_21,
                  const apr_array_header_t *VAR_22,
                  void *VAR_23,
                  const struct svn_diff_tree_processor_t *VAR_24,
                  apr_pool_t *VAR_25)
{
  merge_cmd_baton_t *VAR_26 = VAR_24->baton;
  struct merge_file_baton_t *VAR_27 = VAR_23;
  svn_client_ctx_t *VAR_28 = VAR_26->ctx;
  const char *VAR_29 = FUNC_12(VAR_26->target->abspath,
                                              VAR_14, VAR_25);
  const svn_wc_conflict_version_t *VAR_30;
  const svn_wc_conflict_version_t *VAR_31;
  svn_wc_notify_state_t VAR_32;
  svn_wc_notify_state_t VAR_33;

  FUNC_1(VAR_29 && FUNC_11(VAR_29));
  FUNC_1(!VAR_17 || FUNC_11(VAR_17));
  FUNC_1(!VAR_18 || FUNC_11(VAR_18));

  FUNC_0(FUNC_6(VAR_26, VAR_27, VAR_29, VAR_25));

  if (VAR_27->shadowed)
    {
      if (VAR_27->tree_conflict_reason == VAR_0)
        {

          FUNC_0(FUNC_8(VAR_26, VAR_29, VAR_3,
                              VAR_13,
                              VAR_27->skip_reason, VAR_27->parent_baton,
                              VAR_25));
        }

      return VAR_2;
    }






  VAR_33 = VAR_12;
  VAR_32 = VAR_12;

  FUNC_0(FUNC_7(&VAR_22, VAR_29,
                                      VAR_22, VAR_26,
                                      VAR_25, VAR_25));

  FUNC_0(FUNC_5(&VAR_30, &VAR_31, VAR_29,
                                 VAR_3, VAR_3,
                                 &VAR_26->merge_source, VAR_26->target,
                                 VAR_25, VAR_25));


  if ((VAR_26->record_only || !VAR_17) && VAR_22->nelts)
    {
      FUNC_0(FUNC_15(&VAR_33, VAR_28->wc_ctx, VAR_29,
                                  VAR_30, VAR_31,
                                  VAR_19, VAR_22,
                                  VAR_26->dry_run,
                                  ((void*)0), ((void*)0),
                                  VAR_28->cancel_func, VAR_28->cancel_baton,
                                  VAR_25));
      if (VAR_33 == VAR_9)
        {
          FUNC_3(&VAR_26->conflicted_paths, VAR_29,
                               VAR_26->pool);
        }
    }


  if (VAR_26->record_only)
    {

    }
  else if (VAR_17)
    {
      svn_boolean_t VAR_34;
      enum svn_wc_merge_outcome_t VAR_35;
      const char *VAR_36;
      const char *VAR_37;
      const char *VAR_38;
      const char *VAR_39 = "";

      if (VAR_26->ext_patterns && VAR_26->ext_patterns->nelts)
        {
          FUNC_13(((void*)0), &VAR_39, VAR_29, VAR_25);
          if (! (*VAR_39
                 && FUNC_10(VAR_39,
                                                VAR_26->ext_patterns)))
            {
              VAR_39 = "";
            }
        }





      VAR_36 = FUNC_4(VAR_25, FUNC_2(".working%s%s"),
                                  *VAR_39 ? "." : "", VAR_39);
      VAR_37 = FUNC_4(VAR_25,
                                FUNC_2(".merge-left.r%ld%s%s"),
                                VAR_15->revision,
                                *VAR_39 ? "." : "", VAR_39);
      VAR_38 = FUNC_4(VAR_25,
                                 FUNC_2(".merge-right.r%ld%s%s"),
                                 VAR_16->revision,
                                 *VAR_39 ? "." : "", VAR_39);

      FUNC_0(FUNC_16(&VAR_34, VAR_28->wc_ctx,
                                      VAR_29, VAR_1, VAR_25));



      FUNC_0(FUNC_14(&VAR_35, &VAR_33, VAR_28->wc_ctx,
                            VAR_17, VAR_18, VAR_29,
                            VAR_37, VAR_38, VAR_36,
                            VAR_30, VAR_31,
                            VAR_26->dry_run, VAR_26->diff3_cmd,
                            VAR_26->merge_options,
                            VAR_19, VAR_22,
                            ((void*)0), ((void*)0),
                            VAR_28->cancel_func,
                            VAR_28->cancel_baton,
                            VAR_25));

      if (VAR_35 == VAR_4
          || VAR_33 == VAR_9)
        {
          FUNC_3(&VAR_26->conflicted_paths, VAR_29,
                               VAR_26->pool);
        }

      if (VAR_35 == VAR_4)
        VAR_32 = VAR_9;
      else if (VAR_34
               && VAR_35 != VAR_7)
        VAR_32 = VAR_10;
      else if (VAR_35 == VAR_5)
        VAR_32 = VAR_8;
      else if (VAR_35 == VAR_6)
        VAR_32 = VAR_11;
      else
        VAR_32 = VAR_12;
    }

  if (VAR_32 == VAR_9
      || VAR_32 == VAR_10
      || VAR_32 == VAR_8
      || VAR_33 == VAR_9
      || VAR_33 == VAR_10
      || VAR_33 == VAR_8)
    {
      FUNC_0(FUNC_9(VAR_26, VAR_29, VAR_3,
                                   VAR_32, VAR_33,
                                   VAR_25));
    }

  return VAR_2;
}
