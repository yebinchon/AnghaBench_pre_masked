
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_diff_source_t ;
typedef int svn_boolean_t ;
struct svn_diff_tree_processor_t {TYPE_4__* baton; } ;
struct merge_dir_baton_t {scalar_t__ tree_conflict_reason; int parent_baton; struct dir_delete_baton_t* delete_state; int skip_reason; scalar_t__ shadowed; } ;
struct dir_delete_baton_t {void* found_edit; struct merge_dir_baton_t* del_root; int compared_abspaths; } ;
struct TYPE_20__ {int pool; int paths_with_deleted_mergeinfo; TYPE_2__* ctx; int dry_run; scalar_t__ force_delete; scalar_t__ record_only; TYPE_1__* target; } ;
typedef TYPE_4__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_18__ {int cancel_baton; int cancel_func; int wc_ctx; int config; } ;
struct TYPE_17__ {int abspath; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,struct merge_dir_baton_t*,int *) ;
 int FUNC_4 (TYPE_4__*,struct merge_dir_baton_t*,char const*,int *) ;
 int FUNC_5 (int*,int *,int *,int *) ;
 int FUNC_6 (TYPE_4__*,char const*,int ,int ,int ,int ,int *) ;
 int FUNC_7 (TYPE_4__*,char const*,int ,int ,int ,int ,int ,int ,int *,void*,int *) ;
 int FUNC_8 (TYPE_4__*,int ,char const*,int ,int *) ;
 int FUNC_9 (int ,char const*) ;
 int VAR_7 ;
 char* FUNC_10 (int ,char const*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* FUNC_14 (int ,char const*,int,int,int ,int ,int *,int *,int *) ;
 int FUNC_15 (int **,int ,int *) ;
 int VAR_12 ;
 int FUNC_16 (int **,int ,char const*,int *,int *) ;
 TYPE_3__* FUNC_17 (int ,char const*,int ,void*,int,void*,int *,int ,struct dir_delete_baton_t*,int ,int ,int *) ;
 int VAR_13 ;

__attribute__((used)) static svn_error_t *
FUNC_18(const char *VAR_14,
                  const svn_diff_source_t *VAR_15,
                            apr_hash_t *VAR_16,
                  void *VAR_17,
                  const struct svn_diff_tree_processor_t *VAR_18,
                  apr_pool_t *VAR_19)
{
  merge_cmd_baton_t *VAR_20 = VAR_18->baton;
  struct merge_dir_baton_t *VAR_21 = VAR_17;
  const char *VAR_22 = FUNC_10(VAR_20->target->abspath,
                                              VAR_14, VAR_19);
  svn_boolean_t VAR_23;
  apr_hash_t *VAR_24;

  FUNC_0(FUNC_3(VAR_20, VAR_21, VAR_19));
  FUNC_0(FUNC_4(VAR_20, VAR_21, VAR_22, VAR_19));

  if (VAR_21->shadowed)
    {
      if (VAR_21->tree_conflict_reason == VAR_0)
        {

          FUNC_0(FUNC_6(VAR_20, VAR_22, VAR_8,
                              VAR_12,
                              VAR_21->skip_reason, VAR_21->parent_baton,
                              VAR_19));
        }

      return VAR_4;
    }


  if (VAR_20->record_only)
    {
      return VAR_4;
    }

  FUNC_0(FUNC_16(&VAR_24,
                            VAR_20->ctx->wc_ctx, VAR_22,
                            VAR_19, VAR_19));

  if (VAR_20->force_delete)
    {


      VAR_23 = VAR_6;
    }
  else
    {
      struct dir_delete_baton_t *VAR_25;


      FUNC_0(FUNC_5(&VAR_23, VAR_16, VAR_24,
                                VAR_19));
      VAR_25 = VAR_21->delete_state;
      FUNC_2(VAR_25 != ((void*)0));

      if (! VAR_23)
        {
          VAR_25->found_edit = VAR_6;
        }
      else
        {
          FUNC_9(VAR_25->compared_abspaths, VAR_22);
        }

      if (VAR_25->del_root != VAR_21)
        return VAR_4;

      if (VAR_25->found_edit)
        VAR_23 = VAR_1;
      else
        {
          apr_array_header_t *VAR_26;
          svn_error_t *VAR_27;
          VAR_23 = VAR_6;

          FUNC_0(FUNC_15(&VAR_26, VAR_20->ctx->config,
                                             VAR_19));







          VAR_27 = FUNC_17(VAR_20->ctx->wc_ctx, VAR_22,
                                   VAR_7, VAR_6 ,
                                   VAR_1 ,
                                   VAR_6 , VAR_26,
                                   VAR_13, VAR_25,
                                   VAR_20->ctx->cancel_func,
                                   VAR_20->ctx->cancel_baton,
                                   VAR_19);

          if (VAR_27)
            {
              if (VAR_27->apr_err != VAR_2)
                return FUNC_12(VAR_27);

              FUNC_11(VAR_27);
            }

          VAR_23 = ! VAR_25->found_edit;
        }
    }

  if (VAR_23 && !VAR_20->dry_run)
    {
      svn_error_t *VAR_28;

      VAR_28 = FUNC_14(VAR_20->ctx->wc_ctx, VAR_22,
                           VAR_1 , VAR_1 ,
                           VAR_20->ctx->cancel_func,
                           VAR_20->ctx->cancel_baton,
                           ((void*)0), ((void*)0) ,
                           VAR_19);

      if (VAR_28)
        {
          if (VAR_28->apr_err != VAR_3)
            return FUNC_12(VAR_28);

          FUNC_11(VAR_28);
          VAR_23 = VAR_1;
        }
    }

  if (! VAR_23)
    {







      FUNC_0(FUNC_7(VAR_20, VAR_22, VAR_21->parent_baton,
                                   VAR_8,
                                   VAR_8,
                                   VAR_9,
                                   VAR_10,
                                   VAR_11,
                                   ((void*)0), VAR_6,
                                   VAR_19));
    }
  else
    {

      if (VAR_24
          && FUNC_13(VAR_24, VAR_5))
        {
          FUNC_1(&VAR_20->paths_with_deleted_mergeinfo,
                               VAR_22, VAR_20->pool);
        }

      FUNC_0(FUNC_8(VAR_20, VAR_21->parent_baton, VAR_22,
                                   VAR_8, VAR_19));
    }

  return VAR_4;
}
