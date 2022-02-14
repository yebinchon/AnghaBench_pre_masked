
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_10__ {struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; } ;
typedef TYPE_1__ svn_client_conflict_t ;
struct conflict_tree_incoming_delete_details {int wc_move_targets; int * moves; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,char const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const**,TYPE_1__*,int *,struct conflict_tree_incoming_delete_details*,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const**,int *,scalar_t__*,TYPE_1__*,int *,int *) ;
 int FUNC_7 (char const**,int *,scalar_t__*,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_client_conflict_t *VAR_7,
                                    svn_client_ctx_t *VAR_8,
                                    apr_array_header_t *VAR_9,
                                    apr_pool_t *VAR_10)
{
  svn_node_kind_t VAR_11;
  svn_wc_conflict_action_t VAR_12;
  svn_wc_conflict_reason_t VAR_13;
  const char *VAR_14;
  svn_revnum_t VAR_15;
  svn_node_kind_t VAR_16;
  const char *VAR_17;
  svn_revnum_t VAR_18;
  svn_node_kind_t VAR_19;

  VAR_12 = FUNC_5(VAR_7);
  VAR_13 = FUNC_8(VAR_7);
  VAR_11 = FUNC_9(VAR_7);
  FUNC_0(FUNC_7(
            &VAR_14, &VAR_15,
            &VAR_16, VAR_7, VAR_10,
            VAR_10));
  FUNC_0(FUNC_6(
            &VAR_17, &VAR_18,
            &VAR_19, VAR_7, VAR_10,
            VAR_10));

  if (VAR_11 == VAR_3 &&
      VAR_16 == VAR_3 &&
      VAR_19 == VAR_4 &&
      VAR_12 == VAR_5 &&
      VAR_13 == VAR_6)
    {
      struct conflict_tree_incoming_delete_details *VAR_20;
      const char *VAR_21;

      VAR_20 = VAR_7->tree_conflict_incoming_details;
      if (VAR_20 == ((void*)0) || VAR_20->moves == ((void*)0))
        return VAR_0;

      if (FUNC_3(VAR_20->wc_move_targets) == 0)
        return VAR_0;

      FUNC_0(FUNC_4(&VAR_21,
                                                           VAR_7, VAR_8,
                                                           VAR_20,
                                                           VAR_10,
                                                           VAR_10));
      FUNC_2(VAR_9, VAR_7,
                            VAR_2,
                            FUNC_1("Move and merge"), VAR_21,
                            VAR_1);
    }

  return VAR_0;
}
