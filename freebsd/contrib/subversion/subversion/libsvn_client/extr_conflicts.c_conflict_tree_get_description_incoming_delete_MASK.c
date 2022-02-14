
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_8__ {struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; } ;
typedef TYPE_1__ svn_client_conflict_t ;
struct conflict_tree_incoming_delete_details {scalar_t__ deleted_rev; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const**,TYPE_1__*,int *,int *,int *) ;
 char* FUNC_3 (struct conflict_tree_incoming_delete_details*,int ,char const*,int ,char const*,int ,int *,int *) ;
 char* FUNC_4 (struct conflict_tree_incoming_delete_details*,int ,char const*,int ,char const*,int ,int *,int *) ;
 char* FUNC_5 (struct conflict_tree_incoming_delete_details*,int ,int ,int ,int *,int *) ;
 char* FUNC_6 (struct conflict_tree_incoming_delete_details*,int ,char const*,int ,char const*,int ,int *) ;
 char* FUNC_7 (struct conflict_tree_incoming_delete_details*,int ,char const*,int ,char const*,int ,int *) ;
 char* FUNC_8 (struct conflict_tree_incoming_delete_details*,int ,int ,int ,int *) ;
 int FUNC_9 (char const**,int *,int *,TYPE_1__*,int *,int *) ;
 int FUNC_10 (char const**,int *,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int * FUNC_13 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_14(
  const char **VAR_5,
  svn_client_conflict_t *VAR_6,
  svn_client_ctx_t *VAR_7,
  apr_pool_t *VAR_8,
  apr_pool_t *VAR_9)
{
  const char *VAR_10;
  svn_node_kind_t VAR_11;
  svn_wc_operation_t VAR_12;
  const char *VAR_13;
  svn_revnum_t VAR_14;
  const char *VAR_15;
  svn_revnum_t VAR_16;
  struct conflict_tree_incoming_delete_details *VAR_17;

  if (VAR_6->tree_conflict_incoming_details == ((void*)0))
    return FUNC_13(FUNC_2(
                             VAR_5,
                             VAR_6, VAR_7, VAR_8, VAR_9));

  VAR_12 = FUNC_11(VAR_6);
  VAR_11 = FUNC_12(VAR_6);
  FUNC_0(FUNC_10(
            &VAR_13, &VAR_14, ((void*)0), VAR_6, VAR_9,
            VAR_9));
  FUNC_0(FUNC_9(
            &VAR_15, &VAR_16, ((void*)0), VAR_6, VAR_9,
            VAR_9));

  VAR_17 = VAR_6->tree_conflict_incoming_details;

  if (VAR_12 == VAR_4)
    {
      if (VAR_17->deleted_rev != VAR_0)
        {
          VAR_10 = FUNC_5(VAR_17,
                                                          VAR_11,
                                                          VAR_14,
                                                          VAR_16,
                                                          VAR_8,
                                                          VAR_9);
        }
      else
        {

          VAR_10 = FUNC_8(
                     VAR_17, VAR_11, VAR_14, VAR_16, VAR_8);
        }
    }
  else if (VAR_12 == VAR_3)
    {
      if (VAR_17->deleted_rev != VAR_0)
        {
          VAR_10 = FUNC_4(VAR_17,
                                                          VAR_11,
                                                          VAR_13,
                                                          VAR_14,
                                                          VAR_15,
                                                          VAR_16,
                                                          VAR_8,
                                                          VAR_9);
        }
      else
        {

          VAR_10 = FUNC_7(
                     VAR_17, VAR_11, VAR_13, VAR_14,
                     VAR_15, VAR_16, VAR_8);

        }
      }
  else if (VAR_12 == VAR_2)
    {
      if (VAR_17->deleted_rev != VAR_0)
        {
          VAR_10 = FUNC_3(VAR_17,
                                                         VAR_11,
                                                         VAR_13,
                                                         VAR_14,
                                                         VAR_15,
                                                         VAR_16,
                                                         VAR_8,
                                                         VAR_9);
        }
      else
        {

          VAR_10 = FUNC_6(
                     VAR_17, VAR_11, VAR_13, VAR_14,
                     VAR_15, VAR_16, VAR_8);
        }
      }

  *VAR_5 = FUNC_1(VAR_8, VAR_10);

  return VAR_1;
}
