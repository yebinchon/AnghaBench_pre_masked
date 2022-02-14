
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_8__ {struct conflict_tree_incoming_add_details* tree_conflict_incoming_details; } ;
typedef TYPE_1__ svn_client_conflict_t ;
struct conflict_tree_incoming_add_details {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const**,TYPE_1__*,int *,int *,int *) ;
 char* FUNC_3 (struct conflict_tree_incoming_add_details*,int ,scalar_t__,char const*,scalar_t__,int *) ;
 char* FUNC_4 (struct conflict_tree_incoming_add_details*,int ,char const*,scalar_t__,int *) ;
 char* FUNC_5 (struct conflict_tree_incoming_add_details*,int ,scalar_t__,int *) ;
 char* FUNC_6 (struct conflict_tree_incoming_add_details*,int ,char const*,scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (char const**,scalar_t__*,int *,TYPE_1__*,int *,int *) ;
 int FUNC_8 (char const**,scalar_t__*,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int * FUNC_11 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_12(
  const char **VAR_4,
  svn_client_conflict_t *VAR_5,
  svn_client_ctx_t *VAR_6,
  apr_pool_t *VAR_7,
  apr_pool_t *VAR_8)
{
  const char *VAR_9;
  svn_node_kind_t VAR_10;
  svn_wc_operation_t VAR_11;
  const char *VAR_12;
  svn_revnum_t VAR_13;
  svn_node_kind_t VAR_14;
  const char *VAR_15;
  svn_revnum_t VAR_16;
  svn_node_kind_t VAR_17;
  struct conflict_tree_incoming_add_details *VAR_18;

  if (VAR_5->tree_conflict_incoming_details == ((void*)0))
    return FUNC_11(FUNC_2(
                             VAR_4, VAR_5, VAR_6,
                             VAR_7, VAR_8));

  VAR_11 = FUNC_9(VAR_5);
  VAR_10 = FUNC_10(VAR_5);

  FUNC_0(FUNC_8(
            &VAR_12, &VAR_13, &VAR_14, VAR_5,
            VAR_8, VAR_8));
  FUNC_0(FUNC_7(
            &VAR_15, &VAR_16, &VAR_17, VAR_5,
            VAR_8, VAR_8));

  VAR_18 = VAR_5->tree_conflict_incoming_details;

  if (VAR_11 == VAR_3)
    {
      VAR_9 = FUNC_5(VAR_18,
                                                 VAR_17,
                                                 VAR_16,
                                                 VAR_7);
    }
  else if (VAR_11 == VAR_2)
    {
      VAR_9 = FUNC_4(VAR_18,
                                                 VAR_10,
                                                 VAR_15,
                                                 VAR_16,
                                                 VAR_7);
    }
  else if (VAR_11 == VAR_1)
    {
      if (VAR_13 < VAR_16)
        VAR_9 = FUNC_3(VAR_18,
                                                  VAR_17,
                                                  VAR_13,
                                                  VAR_15,
                                                  VAR_16,
                                                  VAR_7);
      else
        VAR_9 = FUNC_6(
                   VAR_18, VAR_17, VAR_12,
                   VAR_13, VAR_16, VAR_7);
    }

  *VAR_4 = FUNC_1(VAR_7, VAR_9);

  return VAR_0;
}
