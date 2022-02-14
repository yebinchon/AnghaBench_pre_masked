
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int conflict_option_resolve_func_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_client_conflict_t *VAR_10,
                                         apr_array_header_t *VAR_11)
{
  svn_wc_operation_t VAR_12;
  svn_wc_conflict_action_t VAR_13;
  svn_wc_conflict_reason_t VAR_14;
  conflict_option_resolve_func_t VAR_15;

  VAR_12 = FUNC_4(VAR_10);
  VAR_13 = FUNC_2(VAR_10);
  VAR_14 = FUNC_3(VAR_10);

  if ((VAR_12 == VAR_9 ||
       VAR_12 == VAR_8) &&
      (VAR_14 == VAR_6 ||
       VAR_14 == VAR_5 ||
       VAR_14 == VAR_7) &&
      VAR_13 == VAR_4)
    {




      VAR_15 = VAR_2;
    }
  else
    VAR_15 = VAR_1;

  FUNC_1(VAR_11, VAR_10,
                        VAR_3,
                        FUNC_0("Mark as resolved"),
                        FUNC_0("accept current working copy state"),
                        VAR_15);

  return VAR_0;
}
