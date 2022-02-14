
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_8__ {struct conflict_tree_local_missing_details* tree_conflict_local_details; struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; } ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int svn_boolean_t ;
struct conflict_tree_local_missing_details {int * moves; } ;
struct conflict_tree_incoming_delete_details {int * moves; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,char const*,int ) ;
 char* FUNC_3 (int *,int ,char const*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const**,int *,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_client_conflict_t *VAR_9,
                                        svn_client_ctx_t *VAR_10,
                                        apr_array_header_t *VAR_11,
                                        apr_pool_t *VAR_12)
{
  svn_wc_operation_t VAR_13;
  svn_wc_conflict_action_t VAR_14;
  svn_wc_conflict_reason_t VAR_15;
  const char *VAR_16;
  svn_revnum_t VAR_17;

  VAR_13 = FUNC_7(VAR_9);
  VAR_14 = FUNC_4(VAR_9);
  VAR_15 = FUNC_6(VAR_9);
  FUNC_0(FUNC_5(
            &VAR_16, &VAR_17,
            ((void*)0), VAR_9, VAR_12,
            VAR_12));

  if (VAR_14 == VAR_3)
    {
      const char *VAR_18;
      struct conflict_tree_incoming_delete_details *VAR_19;
      svn_boolean_t VAR_20;

      VAR_19 = VAR_9->tree_conflict_incoming_details;
      VAR_20 = (VAR_19 != ((void*)0) &&
                          VAR_19->moves != ((void*)0));
      if (VAR_15 == VAR_7 ||
          VAR_15 == VAR_5)
        {


          if (VAR_20)
            return VAR_0;
        }
      else if (VAR_15 == VAR_4)
        {





          if (!VAR_20)
            return VAR_0;
        }
      else if (VAR_15 == VAR_6 &&
               VAR_13 == VAR_8)
        {
          struct conflict_tree_local_missing_details *VAR_21;
          svn_boolean_t VAR_22;

          VAR_21 = VAR_9->tree_conflict_local_details;
          VAR_22 = (VAR_21 != ((void*)0) &&
                           VAR_21->moves != ((void*)0));

          if (!VAR_20 && !VAR_22)
            return VAR_0;
        }

      VAR_18 =
        FUNC_3(VAR_12, FUNC_1("ignore the deletion of '^/%s@%ld'"),
          VAR_16, VAR_17);

      FUNC_2(VAR_11, VAR_9,
                            VAR_2,
                            FUNC_1("Ignore incoming deletion"), VAR_18,
                            VAR_1);
    }

  return VAR_0;
}
