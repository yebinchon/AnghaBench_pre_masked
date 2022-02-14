
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_17__ {int revision; } ;
typedef TYPE_4__ svn_diff_source_t ;
struct svn_diff_tree_processor_t {TYPE_5__* baton; } ;
struct merge_file_baton_t {scalar_t__ tree_conflict_reason; int add_is_replace; TYPE_8__* parent_baton; int skip_reason; scalar_t__ shadowed; } ;
struct TYPE_15__ {TYPE_1__* loc2; scalar_t__ ancestral; } ;
struct TYPE_18__ {int * use_sleep; TYPE_3__* ctx; int pool; int paths_with_new_mergeinfo; TYPE_12__* target; TYPE_2__ merge_source; scalar_t__ same_repos; int dry_run; int added_abspaths; scalar_t__ reintegrate_merge; scalar_t__ record_only; } ;
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
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char const*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_12__*,char const*,char const*,int *) ;
 int FUNC_5 (TYPE_5__*,struct merge_file_baton_t*,char const*,int *) ;
 int FUNC_6 (TYPE_5__*,char const*,int ,int ,int ,TYPE_8__*,int *) ;
 int FUNC_7 (TYPE_5__*,char const*,int ,int ,int *) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int *,int *,int **,int *) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (int ,char const*,int *) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,int *) ;
 int VAR_5 ;
 char* FUNC_14 (int ,char const*,int *) ;
 int * FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int **,char const*,int *,int *) ;
 int FUNC_19 (int ,char const*,int *,int *,int *,int *,char const*,int ,int ,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_20(const char *VAR_7,
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
  merge_cmd_baton_t *VAR_17 = VAR_15->baton;
  struct merge_file_baton_t *VAR_18 = VAR_14;
  const char *VAR_19 = FUNC_11(VAR_17->target->abspath,
                                              VAR_7, VAR_16);
  apr_hash_t *VAR_20;
  apr_hash_t *VAR_21;

  FUNC_1(FUNC_10(VAR_19));

  FUNC_0(FUNC_5(VAR_17, VAR_18, VAR_19, VAR_16));

  if (VAR_18->shadowed)
    {
      if (VAR_18->tree_conflict_reason == VAR_0)
        {

          FUNC_0(FUNC_6(VAR_17, VAR_19, VAR_5,
                              VAR_6,
                              VAR_18->skip_reason, VAR_18->parent_baton,
                              VAR_16));
        }

      return VAR_2;
    }


  if (VAR_17->record_only)
    {
      return VAR_2;
    }

  if ((VAR_17->merge_source.ancestral || VAR_17->reintegrate_merge)
      && ( !VAR_18->parent_baton || !VAR_18->parent_baton->added))
    {

      FUNC_8(VAR_17->added_abspaths, VAR_19);
    }

  if (!VAR_17->dry_run)
    {
      const char *VAR_22;
      svn_revnum_t VAR_23;
      svn_stream_t *VAR_24, *VAR_25;




      if (VAR_17->same_repos)
        {
          VAR_22 = FUNC_14(
                                       VAR_17->merge_source.loc2->url,
                                       VAR_7, VAR_16);
          VAR_23 = VAR_9->revision;
          FUNC_0(FUNC_4(VAR_17->target, VAR_19,
                                    VAR_22, VAR_16));
          FUNC_0(FUNC_18(&VAR_25,
                                           VAR_11,
                                           VAR_16,
                                           VAR_16));
          VAR_24 = ((void*)0);

          VAR_20 = VAR_13;
          VAR_21 = ((void*)0);

          if (FUNC_12(VAR_20, VAR_3))
            {
              FUNC_2(&VAR_17->paths_with_new_mergeinfo,
                                   VAR_19, VAR_17->pool);
            }
        }
      else
        {
          apr_array_header_t *VAR_26;

          VAR_22 = ((void*)0);
          VAR_23 = VAR_1;

          VAR_25 = FUNC_17(VAR_16);
          FUNC_0(FUNC_18(&VAR_24, VAR_11,
                                           VAR_16, VAR_16));

          VAR_20 = FUNC_3(VAR_16);


          FUNC_0(FUNC_9(FUNC_16(VAR_13,
                                                              VAR_16),
                                       ((void*)0), ((void*)0), &VAR_26,
                                       VAR_16));

          VAR_21 = FUNC_15(VAR_26, VAR_16);


          FUNC_13(VAR_21, VAR_3, ((void*)0));
        }


      FUNC_0(FUNC_19(VAR_17->ctx->wc_ctx,
                                      VAR_19,
                                      VAR_25,
                                      VAR_24,
                                      VAR_20, VAR_21,
                                      VAR_22, VAR_23,
                                      VAR_17->ctx->cancel_func,
                                      VAR_17->ctx->cancel_baton,
                                      VAR_16));


      *VAR_17->use_sleep = VAR_4;
    }

  FUNC_0(FUNC_7(VAR_17, VAR_19, VAR_5,
                            VAR_18->add_is_replace, VAR_16));

  return VAR_2;
}
