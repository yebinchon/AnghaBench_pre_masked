
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_client__pathrev_t ;
struct TYPE_4__ {int history; } ;
typedef TYPE_1__ branch_history_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (TYPE_1__ const*,scalar_t__,int *,int *) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_client__pathrev_t **VAR_1,
                             svn_client__pathrev_t **VAR_2,
                             const branch_history_t *VAR_3,
                             apr_pool_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  svn_revnum_t VAR_6, VAR_7;

  FUNC_0(FUNC_2(
            &VAR_6, &VAR_7,
            VAR_3->history, VAR_5));
  if (VAR_1)
    *VAR_1 = FUNC_1(
                  VAR_3, VAR_7 + 1, VAR_4, VAR_5);
  if (VAR_2)
    *VAR_2 = FUNC_1(
                    VAR_3, VAR_6, VAR_4, VAR_5);
  return VAR_0;
}
