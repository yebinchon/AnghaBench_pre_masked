
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ svn_wc_notify_state_t ;
struct TYPE_16__ {scalar_t__ reason; TYPE_4__* src_left_version; int node_kind; } ;
typedef TYPE_5__ svn_wc_conflict_description2_t ;
typedef int svn_error_t ;
typedef int svn_diff_source_t ;
typedef scalar_t__ svn_depth_t ;
typedef void* svn_boolean_t ;
struct svn_diff_tree_processor_t {TYPE_6__* baton; } ;
struct merge_file_baton_t {scalar_t__ tree_conflict_reason; scalar_t__ tree_conflict_local_node_kind; void* shadowed; scalar_t__ skip_reason; void* add_is_replace; void* tree_conflict_action; void* added; struct merge_dir_baton_t* parent_baton; scalar_t__ tree_conflict_merge_right_node_kind; scalar_t__ tree_conflict_merge_left_node_kind; } ;
struct merge_dir_baton_t {scalar_t__ added; scalar_t__ new_tree_conflicts; scalar_t__ pending_deletes; TYPE_3__* delete_state; scalar_t__ skip_reason; void* shadowed; } ;
struct TYPE_17__ {TYPE_2__* ctx; scalar_t__ dry_run; TYPE_1__* target; } ;
typedef TYPE_6__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_15__ {int node_kind; } ;
struct TYPE_14__ {scalar_t__ found_edit; } ;
struct TYPE_13__ {int wc_ctx; } ;
struct TYPE_12__ {int abspath; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 void* VAR_4 ;
 struct merge_file_baton_t* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_6__*,struct merge_file_baton_t*,char const*,int *) ;
 int FUNC_3 (scalar_t__*,void**,void**,scalar_t__*,scalar_t__*,TYPE_6__*,char const*,int *) ;
 int FUNC_4 (TYPE_6__*,char const*,struct merge_dir_baton_t*,int ,int ,scalar_t__,void*,scalar_t__,TYPE_5__ const*,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_5 (int ,char const*,int *) ;
 TYPE_5__* FUNC_6 (scalar_t__,char const*) ;
 int FUNC_7 (scalar_t__,char const*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (void**,int ,char const*,int *) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static svn_error_t *
FUNC_9(void **VAR_21,
                  svn_boolean_t *VAR_22,
                  const char *VAR_23,
                  const svn_diff_source_t *VAR_24,
                  const svn_diff_source_t *VAR_25,
                  const svn_diff_source_t *VAR_26,
                  void *VAR_27,
                  const struct svn_diff_tree_processor_t *VAR_28,
                  apr_pool_t *VAR_29,
                  apr_pool_t *VAR_30)
{
  merge_cmd_baton_t *VAR_31 = VAR_28->baton;
  struct merge_dir_baton_t *VAR_32 = VAR_27;
  struct merge_file_baton_t *VAR_33;
  const char *VAR_34 = FUNC_5(VAR_31->target->abspath,
                                              VAR_23, VAR_30);

  VAR_33 = FUNC_1(VAR_29, sizeof(*VAR_33));
  VAR_33->tree_conflict_reason = VAR_0;
  VAR_33->tree_conflict_action = VAR_11;
  VAR_33->skip_reason = VAR_20;

  if (VAR_24)
    VAR_33->tree_conflict_merge_left_node_kind = VAR_7;
  else
    VAR_33->tree_conflict_merge_left_node_kind = VAR_8;

  if (VAR_25)
    VAR_33->tree_conflict_merge_right_node_kind = VAR_7;
  else
    VAR_33->tree_conflict_merge_right_node_kind = VAR_8;

  *VAR_21 = VAR_33;

  if (VAR_32)
    {
      VAR_33->parent_baton = VAR_32;
      VAR_33->shadowed = VAR_32->shadowed;
      VAR_33->skip_reason = VAR_32->skip_reason;
    }

  if (VAR_33->shadowed)
    {

    }
  else if (VAR_24 != ((void*)0))
    {

      svn_boolean_t VAR_35;
      svn_boolean_t VAR_36;
      svn_depth_t VAR_37;

      if (! VAR_25)
        VAR_33->tree_conflict_action = VAR_10;

      {
        svn_wc_notify_state_t VAR_38;

        FUNC_0(FUNC_3(&VAR_38, &VAR_35, &VAR_36,
                                          &VAR_33->tree_conflict_local_node_kind,
                                          &VAR_37,
                                          VAR_31, VAR_34,
                                          VAR_30));

        if (VAR_38 != VAR_18)
          {
            VAR_33->shadowed = VAR_4;
            VAR_33->tree_conflict_reason = VAR_1;
            VAR_33->skip_reason = VAR_38;
            return VAR_3;
          }

        if (VAR_35)
          VAR_33->tree_conflict_local_node_kind = VAR_8;
      }

      if (VAR_33->tree_conflict_local_node_kind == VAR_8)
        {
          VAR_33->shadowed = VAR_4;
          if (VAR_32 && (VAR_36
                      || (VAR_37 != VAR_6 &&
                          VAR_37 < VAR_5)))
            {
                VAR_33->shadowed = VAR_4;

                VAR_33->tree_conflict_reason = VAR_1;
                VAR_33->skip_reason = VAR_19;
                return VAR_3;
            }

          if (VAR_35)
            VAR_33->tree_conflict_reason = VAR_14;
          else
            VAR_33->tree_conflict_reason = VAR_15;


          *VAR_22 = VAR_4;
          FUNC_0(FUNC_2(VAR_31, VAR_33, VAR_34, VAR_30));
          return VAR_3;

        }
      else if (VAR_33->tree_conflict_local_node_kind != VAR_7)
        {
          svn_boolean_t VAR_39;
          VAR_33->shadowed = VAR_4;

          FUNC_0(FUNC_8(&VAR_39, VAR_31->ctx->wc_ctx,
                                        VAR_34, VAR_30));

          VAR_33->tree_conflict_reason = VAR_39 ? VAR_13
                                           : VAR_17;


          *VAR_22 = VAR_4;
          FUNC_0(FUNC_2(VAR_31, VAR_33, VAR_34, VAR_30));
          return VAR_3;

        }

      if (! VAR_25)
        {

          VAR_33->tree_conflict_action = VAR_10;
          FUNC_0(FUNC_2(VAR_31, VAR_33, VAR_34, VAR_30));

          if (VAR_33->shadowed)
            {
              return VAR_3;
            }


          if (VAR_32 && VAR_32->delete_state
              && VAR_32->delete_state->found_edit)
            {

              *VAR_22 = VAR_4;
            }
        }
    }
  else
    {
      const svn_wc_conflict_description2_t *VAR_40 = ((void*)0);


      VAR_33->added = VAR_4;
      VAR_33->tree_conflict_action = VAR_9;

      if (VAR_32 && VAR_32->pending_deletes
          && FUNC_6(VAR_32->pending_deletes, VAR_34))
        {
          VAR_33->add_is_replace = VAR_4;
          VAR_33->tree_conflict_action = VAR_12;

          FUNC_7(VAR_32->pending_deletes, VAR_34, ((void*)0));
        }

      if (VAR_32
          && VAR_32->new_tree_conflicts
          && (VAR_40 = FUNC_6(VAR_32->new_tree_conflicts, VAR_34)))
        {
          VAR_33->tree_conflict_action = VAR_12;
          VAR_33->tree_conflict_reason = VAR_40->reason;


          FUNC_0(FUNC_4(VAR_31, VAR_34, VAR_32,
                                       VAR_40->node_kind,
                                       VAR_40->src_left_version->node_kind,
                                       VAR_7,
                                       VAR_33->tree_conflict_action,
                                       VAR_33->tree_conflict_reason,
                                       VAR_40, VAR_2,
                                       VAR_30));

          if (VAR_40->reason == VAR_14
              || VAR_40->reason == VAR_16)
            {





            }
          else
            {
              *VAR_22 = VAR_4;

              return VAR_3;
            }
        }
      else if (! (VAR_31->dry_run
                  && ((VAR_32 && VAR_32->added) || VAR_33->add_is_replace)))
        {
          svn_wc_notify_state_t VAR_41;
          svn_boolean_t VAR_42;

          FUNC_0(FUNC_3(&VAR_41, &VAR_42, ((void*)0),
                                            &VAR_33->tree_conflict_local_node_kind,
                                            ((void*)0), VAR_31, VAR_34,
                                            VAR_30));

          if (VAR_41 != VAR_18)
            {

              VAR_33->shadowed = VAR_4;
              VAR_33->tree_conflict_reason = VAR_1;
              VAR_33->skip_reason = VAR_41;
            }
          else if (VAR_33->tree_conflict_local_node_kind != VAR_8
                   && !VAR_42)
            {

              svn_boolean_t VAR_43;

              VAR_33->shadowed = VAR_4;
              FUNC_0(FUNC_8(&VAR_43, VAR_31->ctx->wc_ctx,
                                            VAR_34, VAR_30));

              VAR_33->tree_conflict_reason = VAR_43 ? VAR_13
                                               : VAR_17;
            }
        }


      FUNC_0(FUNC_2(VAR_31, VAR_33, VAR_34, VAR_30));
    }

  return VAR_3;
}
