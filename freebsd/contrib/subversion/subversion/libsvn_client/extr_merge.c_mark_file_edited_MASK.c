
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int prop_state; int content_state; int kind; } ;
typedef TYPE_4__ svn_wc_notify_t ;
typedef int svn_error_t ;
struct merge_file_baton_t {scalar_t__ tree_conflict_reason; int tree_conflict_action; int tree_conflict_merge_right_node_kind; int tree_conflict_merge_left_node_kind; int tree_conflict_local_node_kind; TYPE_9__* parent_baton; int skip_reason; int shadowed; void* edited; } ;
struct TYPE_16__ {scalar_t__ ancestral; } ;
struct TYPE_18__ {int skipped_abspaths; scalar_t__ reintegrate_merge; TYPE_3__ merge_source; TYPE_2__* ctx; } ;
typedef TYPE_5__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {TYPE_1__* delete_state; int edited; } ;
struct TYPE_15__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_4__*,int *) ;} ;
struct TYPE_14__ {void* found_edit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (TYPE_5__*,TYPE_9__*,char const*,int *) ;
 int FUNC_2 (TYPE_5__*,char const*,int ,int *) ;
 int FUNC_3 (TYPE_5__*,char const*,TYPE_9__*,int ,int ,int ,int ,scalar_t__,int *,void*,int *) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,TYPE_4__*,int *) ;
 char* FUNC_6 (char const*,int *) ;
 int VAR_6 ;
 TYPE_4__* FUNC_7 (char const*,int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_8(merge_cmd_baton_t *VAR_8,
                 struct merge_file_baton_t *VAR_9,
                 const char *VAR_10,
                 apr_pool_t *VAR_11)
{

  if (VAR_9->edited)
    return VAR_4;

  if (VAR_9->parent_baton && !VAR_9->parent_baton->edited)
    {
      const char *VAR_12 = FUNC_6(VAR_10,
                                                   VAR_11);

      FUNC_0(FUNC_1(VAR_8, VAR_9->parent_baton, VAR_12,
                              VAR_11));
    }

  VAR_9->edited = VAR_5;

  if (! VAR_9->shadowed)
    return VAR_4;

  if (VAR_9->parent_baton
      && VAR_9->parent_baton->delete_state
      && VAR_9->tree_conflict_reason != VAR_0)
    {
      VAR_9->parent_baton->delete_state->found_edit = VAR_5;
    }
  else if (VAR_9->tree_conflict_reason == VAR_1
           || VAR_9->tree_conflict_reason == VAR_2)
    {




      if (VAR_8->ctx->notify_func2)
        {
          svn_wc_notify_t *VAR_13;

          FUNC_0(FUNC_2(VAR_8, VAR_10, VAR_3,
                                     VAR_11));

          VAR_13 = FUNC_7(VAR_10, VAR_7,
                                        VAR_11);
          VAR_13->kind = VAR_6;
          VAR_13->content_state = VAR_13->prop_state = VAR_9->skip_reason;

          VAR_8->ctx->notify_func2(VAR_8->ctx->notify_baton2,
                                     VAR_13,
                                     VAR_11);
        }

      if (VAR_8->merge_source.ancestral
          || VAR_8->reintegrate_merge)
        {
          FUNC_4(VAR_8->skipped_abspaths, VAR_10);
        }
    }
  else if (VAR_9->tree_conflict_reason != VAR_0)
    {


      FUNC_0(FUNC_3(VAR_8, VAR_10, VAR_9->parent_baton,
                                   VAR_9->tree_conflict_local_node_kind,
                                   VAR_9->tree_conflict_merge_left_node_kind,
                                   VAR_9->tree_conflict_merge_right_node_kind,
                                   VAR_9->tree_conflict_action,
                                   VAR_9->tree_conflict_reason,
                                   ((void*)0), VAR_5,
                                   VAR_11));
    }

  return VAR_4;
}
