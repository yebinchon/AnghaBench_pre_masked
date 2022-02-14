
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_9__ {struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; } ;
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
 int VAR_2 ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_client_conflict_t *VAR_6,
                                          svn_client_ctx_t *VAR_7,
                                          apr_array_header_t *VAR_8,
                                          apr_pool_t *VAR_9)
{
  svn_node_kind_t VAR_10;
  svn_wc_conflict_action_t VAR_11;
  const char *VAR_12;
  svn_revnum_t VAR_13;
  svn_node_kind_t VAR_14;
  const char *VAR_15;
  svn_revnum_t VAR_16;
  svn_node_kind_t VAR_17;
  VAR_11 = FUNC_5(VAR_6);
  VAR_10 = FUNC_8(VAR_6);
  FUNC_0(FUNC_7(
            &VAR_12, &VAR_13,
            &VAR_14, VAR_6, VAR_9,
            VAR_9));
  FUNC_0(FUNC_6(
            &VAR_15, &VAR_16,
            &VAR_17, VAR_6, VAR_9,
            VAR_9));

  if (VAR_10 == VAR_3 &&
      VAR_14 == VAR_3 &&
      VAR_17 == VAR_4 &&
      VAR_11 == VAR_5)
    {
      struct conflict_tree_incoming_delete_details *VAR_18;
      const char *VAR_19;

      VAR_18 = VAR_6->tree_conflict_incoming_details;
      if (VAR_18 == ((void*)0) || VAR_18->moves == ((void*)0))
        return VAR_0;

      if (FUNC_3(VAR_18->wc_move_targets) == 0)
        return VAR_0;

      FUNC_0(FUNC_4(&VAR_19,
                                                           VAR_6, VAR_7,
                                                           VAR_18,
                                                           VAR_9,
                                                           VAR_9));
      FUNC_2(
        VAR_8, VAR_6,
        VAR_2,
        FUNC_1("Move and merge"), VAR_19,
        VAR_1);
    }

  return VAR_0;
}
