
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int tree_conflict_get_local_details_func; int tree_conflict_get_local_description_func; int tree_conflict_get_incoming_details_func; int tree_conflict_get_incoming_description_func; } ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_client_conflict_t *VAR_16,
                             apr_pool_t *VAR_17)
{
  svn_boolean_t VAR_18;
  svn_wc_conflict_action_t VAR_19;
  svn_wc_conflict_reason_t VAR_20;


  FUNC_0(FUNC_1(((void*)0), ((void*)0), &VAR_18,
                                             VAR_16, VAR_17,
                                             VAR_17));
  if (!VAR_18)
    return VAR_0;


  VAR_16->tree_conflict_get_incoming_description_func =
    VAR_9;
  VAR_16->tree_conflict_get_local_description_func =
    VAR_10;

  VAR_19 = FUNC_2(VAR_16);
  VAR_20 = FUNC_3(VAR_16);


  if (VAR_19 == VAR_12 ||
      VAR_19 == VAR_14)
    {
      VAR_16->tree_conflict_get_incoming_description_func =
        VAR_2;
      VAR_16->tree_conflict_get_incoming_details_func =
        VAR_6;
    }
  else if (VAR_19 == VAR_11)
    {
      VAR_16->tree_conflict_get_incoming_description_func =
        VAR_1;
      VAR_16->tree_conflict_get_incoming_details_func =
        VAR_5;
    }
  else if (VAR_19 == VAR_13)
    {
      VAR_16->tree_conflict_get_incoming_description_func =
        VAR_3;
      VAR_16->tree_conflict_get_incoming_details_func =
        VAR_7;
    }

  if (VAR_20 == VAR_15)
    {
      VAR_16->tree_conflict_get_local_description_func =
        VAR_4;
      VAR_16->tree_conflict_get_local_details_func =
        VAR_8;
    }

  return VAR_0;
}
