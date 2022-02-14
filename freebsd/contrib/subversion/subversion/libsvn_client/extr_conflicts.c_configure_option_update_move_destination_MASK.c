
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_client_conflict_t *VAR_7,
                                         apr_array_header_t *VAR_8)
{
  svn_wc_operation_t VAR_9;
  svn_wc_conflict_action_t VAR_10;
  svn_wc_conflict_reason_t VAR_11;

  VAR_9 = FUNC_4(VAR_7);
  VAR_10 = FUNC_2(VAR_7);
  VAR_11 = FUNC_3(VAR_7);

  if ((VAR_9 == VAR_6 ||
       VAR_9 == VAR_5) &&
      VAR_10 == VAR_3 &&
      VAR_11 == VAR_4)
    {
      FUNC_1(
        VAR_8, VAR_7,
        VAR_2,
        FUNC_0("Update move destination"),
        FUNC_0("apply incoming changes to move destination"),
        VAR_1);
    }

  return VAR_0;
}
