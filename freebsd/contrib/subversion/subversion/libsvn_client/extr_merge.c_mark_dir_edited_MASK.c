
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int prop_state; int content_state; int kind; } ;
typedef TYPE_4__ svn_wc_notify_t ;
typedef int svn_error_t ;
struct merge_dir_baton_t {scalar_t__ tree_conflict_reason; int tree_conflict_action; int tree_conflict_merge_right_node_kind; int tree_conflict_merge_left_node_kind; int tree_conflict_local_node_kind; struct merge_dir_baton_t* parent_baton; int skip_reason; TYPE_1__* delete_state; int shadowed; void* edited; } ;
struct TYPE_13__ {scalar_t__ ancestral; } ;
struct TYPE_15__ {int skipped_abspaths; scalar_t__ reintegrate_merge; TYPE_3__ merge_source; TYPE_2__* ctx; } ;
typedef TYPE_5__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_4__*,int *) ;} ;
struct TYPE_11__ {void* found_edit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * VAR_4 ;
 void* VAR_5 ;
 int * FUNC_1 (TYPE_5__*,char const*,int ,int *) ;
 int * FUNC_2 (TYPE_5__*,char const*,struct merge_dir_baton_t*,int ,int ,int ,int ,scalar_t__,int *,void*,int *) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,TYPE_4__*,int *) ;
 char* FUNC_5 (char const*,int *) ;
 int VAR_6 ;
 TYPE_4__* FUNC_6 (char const*,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_7(merge_cmd_baton_t *VAR_9,
                struct merge_dir_baton_t *VAR_10,
                const char *VAR_11,
                apr_pool_t *VAR_12)
{

  if (VAR_10->edited)
    return VAR_4;

  if (VAR_10->parent_baton && !VAR_10->parent_baton->edited)
    {
      const char *VAR_13 = FUNC_5(VAR_11,
                                                   VAR_12);

      FUNC_0(FUNC_7(VAR_9, VAR_10->parent_baton, VAR_13,
                              VAR_12));
    }

  VAR_10->edited = VAR_5;

  if (! VAR_10->shadowed)
    return VAR_4;

  if (VAR_10->parent_baton
      && VAR_10->parent_baton->delete_state
      && VAR_10->tree_conflict_reason != VAR_0)
    {
      VAR_10->parent_baton->delete_state->found_edit = VAR_5;
    }
  else if (VAR_10->tree_conflict_reason == VAR_1
           || VAR_10->tree_conflict_reason == VAR_2)
    {




      if (VAR_9->ctx->notify_func2)
        {
          svn_wc_notify_t *VAR_14;

          FUNC_0(FUNC_1(VAR_9, VAR_11, VAR_3,
                                     VAR_12));

          VAR_14 = FUNC_6(
                            VAR_11,
                            (VAR_10->tree_conflict_reason == VAR_1)
                                ? VAR_7
                                : VAR_8,
                            VAR_12);
          VAR_14->kind = VAR_6;
          VAR_14->content_state = VAR_14->prop_state = VAR_10->skip_reason;

          VAR_9->ctx->notify_func2(VAR_9->ctx->notify_baton2,
                                     VAR_14,
                                     VAR_12);
        }

      if (VAR_9->merge_source.ancestral
          || VAR_9->reintegrate_merge)
        {
          FUNC_3(VAR_9->skipped_abspaths, VAR_11);
        }
    }
  else if (VAR_10->tree_conflict_reason != VAR_0)
    {


      FUNC_0(FUNC_2(VAR_9, VAR_11, VAR_10->parent_baton,
                                   VAR_10->tree_conflict_local_node_kind,
                                   VAR_10->tree_conflict_merge_left_node_kind,
                                   VAR_10->tree_conflict_merge_right_node_kind,
                                   VAR_10->tree_conflict_action,
                                   VAR_10->tree_conflict_reason,
                                   ((void*)0), VAR_5,
                                   VAR_12));
    }

  return VAR_4;
}
