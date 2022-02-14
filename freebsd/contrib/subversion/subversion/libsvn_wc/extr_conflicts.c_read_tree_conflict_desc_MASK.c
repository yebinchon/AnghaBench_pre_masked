
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
struct TYPE_9__ {int node_kind; } ;
typedef TYPE_1__ svn_wc_conflict_version_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
struct TYPE_10__ {scalar_t__ action; scalar_t__ reason; } ;
typedef TYPE_2__ svn_wc_conflict_description2_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int *,int *,char const*,int const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_3 (char const*,int ,int ,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc_conflict_description2_t **VAR_10,
                        svn_wc__db_t *VAR_11,
                        const char *VAR_12,
                        svn_node_kind_t VAR_13,
                        const svn_skel_t *VAR_14,
                        svn_wc_operation_t VAR_15,
                        const svn_wc_conflict_version_t *VAR_16,
                        const svn_wc_conflict_version_t *VAR_17,
                        apr_pool_t *VAR_18,
                        apr_pool_t *VAR_19)
{
  svn_node_kind_t VAR_20;
  svn_wc_conflict_reason_t VAR_21;
  svn_wc_conflict_action_t VAR_22;

  FUNC_0(FUNC_2(
            &VAR_21, &VAR_22, ((void*)0),
            VAR_11, VAR_12, VAR_14, VAR_19, VAR_19));

  if (VAR_21 == VAR_4)
    VAR_20 = VAR_1;
  else if (VAR_21 == VAR_7 ||
           VAR_21 == VAR_6)
    FUNC_0(FUNC_1(VAR_12, &VAR_20, VAR_19));
  else if (VAR_22 == VAR_2
           && VAR_16
           && (VAR_15 == VAR_9
               ||VAR_15 == VAR_8)
           && (VAR_21 == VAR_3
               || VAR_21 == VAR_5))
    {

      VAR_20 = VAR_16->node_kind;
    }
  else
    VAR_20 = VAR_13;

  *VAR_10 = FUNC_3(VAR_12, VAR_20,
                                                   VAR_15,
                                                   VAR_16, VAR_17,
                                                   VAR_18);
  (*VAR_10)->reason = VAR_21;
  (*VAR_10)->action = VAR_22;

  return VAR_0;
}
