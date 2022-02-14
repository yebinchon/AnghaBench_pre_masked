
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_source_t ;
typedef void* svn_boolean_t ;
struct svn_diff_tree_processor_t {TYPE_4__* baton; } ;
struct merge_file_baton_t {scalar_t__ tree_conflict_reason; TYPE_6__* parent_baton; int skip_reason; scalar_t__ shadowed; } ;
struct TYPE_15__ {int pool; int paths_with_deleted_mergeinfo; TYPE_3__* ctx; int dry_run; scalar_t__ force_delete; scalar_t__ record_only; TYPE_1__* target; } ;
typedef TYPE_4__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_16__ {TYPE_2__* delete_state; } ;
struct TYPE_14__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
struct TYPE_13__ {void* found_edit; int compared_abspaths; } ;
struct TYPE_12__ {int abspath; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (void**,char const*,int *,char const*,int ,int *) ;
 int FUNC_3 (TYPE_4__*,struct merge_file_baton_t*,char const*,int *) ;
 int FUNC_4 (TYPE_4__*,char const*,int ,int ,int ,TYPE_6__*,int *) ;
 int FUNC_5 (TYPE_4__*,char const*,TYPE_6__*,int ,int ,int ,int ,int ,int *,void*,int *) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*,char const*,int ,int *) ;
 int FUNC_7 (int ,char const*) ;
 char* FUNC_8 (int ,char const*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,char const*,int ,int ,int ,int ,int *,int *,int *) ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_9,
                   const svn_diff_source_t *VAR_10,
                   const char *VAR_11,
                             apr_hash_t *VAR_12,
                   void *VAR_13,
                   const struct svn_diff_tree_processor_t *VAR_14,
                   apr_pool_t *VAR_15)
{
  merge_cmd_baton_t *VAR_16 = VAR_14->baton;
  struct merge_file_baton_t *VAR_17 = VAR_13;
  const char *VAR_18 = FUNC_8(VAR_16->target->abspath,
                                              VAR_9, VAR_15);
  svn_boolean_t VAR_19;

  FUNC_0(FUNC_3(VAR_16, VAR_17, VAR_18, VAR_15));

  if (VAR_17->shadowed)
    {
      if (VAR_17->tree_conflict_reason == VAR_0)
        {

          FUNC_0(FUNC_4(VAR_16, VAR_18, VAR_4,
                              VAR_8,
                              VAR_17->skip_reason, VAR_17->parent_baton,
                              VAR_15));
        }

      return VAR_2;
    }


  if (VAR_16->record_only)
    {
      return VAR_2;
    }


  if (VAR_16->force_delete)
    VAR_19 = VAR_3;
  else
    FUNC_0(FUNC_2(&VAR_19, VAR_11, VAR_12,
                         VAR_18, VAR_16->ctx->wc_ctx,
                         VAR_15));

  if (VAR_17->parent_baton
      && VAR_17->parent_baton->delete_state)
    {
      if (VAR_19)
        {

          FUNC_7(VAR_17->parent_baton->delete_state->compared_abspaths,
                     VAR_18);
        }
      else
        {

          VAR_17->parent_baton->delete_state->found_edit = VAR_3;
        }

      return VAR_2;
    }
  else if (VAR_19)
    {
      if (!VAR_16->dry_run)
        FUNC_0(FUNC_9(VAR_16->ctx->wc_ctx, VAR_18,
                               VAR_1 , VAR_1 ,
                               VAR_16->ctx->cancel_func,
                               VAR_16->ctx->cancel_baton,
                               ((void*)0), ((void*)0) ,
                               VAR_15));


      FUNC_1(&VAR_16->paths_with_deleted_mergeinfo,
                           VAR_18, VAR_16->pool);


      FUNC_0(FUNC_6(VAR_16, VAR_17->parent_baton, VAR_18,
                                   VAR_4, VAR_15));
    }
  else
    {





      FUNC_0(FUNC_5(VAR_16, VAR_18, VAR_17->parent_baton,
                                   VAR_4,
                                   VAR_4,
                                   VAR_5,
                                   VAR_6,
                                   VAR_7,
                                   ((void*)0), VAR_3,
                                   VAR_15));
    }

  return VAR_2;
}
