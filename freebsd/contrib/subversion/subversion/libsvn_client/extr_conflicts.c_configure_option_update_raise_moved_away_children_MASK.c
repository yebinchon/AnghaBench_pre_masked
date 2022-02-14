
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_6(
  svn_client_conflict_t *VAR_9,
  apr_array_header_t *VAR_10)
{
  svn_wc_operation_t VAR_11;
  svn_wc_conflict_action_t VAR_12;
  svn_wc_conflict_reason_t VAR_13;
  svn_node_kind_t VAR_14;

  VAR_11 = FUNC_4(VAR_9);
  VAR_12 = FUNC_2(VAR_9);
  VAR_13 = FUNC_3(VAR_9);
  VAR_14 = FUNC_5(VAR_9);

  if ((VAR_11 == VAR_8 ||
       VAR_11 == VAR_7) &&
      VAR_12 == VAR_4 &&
      (VAR_13 == VAR_5 ||
       VAR_13 == VAR_6) &&
      VAR_14 == VAR_3)
    {
      FUNC_1(
        VAR_10, VAR_9,
        VAR_2,
        FUNC_0("Update any moved-away children"),
        FUNC_0("prepare for updating moved-away children, if any"),
        VAR_1);
    }

  return VAR_0;
}
