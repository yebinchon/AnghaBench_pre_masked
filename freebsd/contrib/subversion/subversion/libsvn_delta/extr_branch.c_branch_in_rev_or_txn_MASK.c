
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int repos; } ;
typedef TYPE_1__ svn_branch__txn_t ;
typedef int svn_branch__state_t ;
struct TYPE_7__ {int bid; int rev; } ;
typedef TYPE_2__ svn_branch__rev_bid_eid_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int **,int ,int ,int ,int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_branch__state_t **VAR_1,
                     const svn_branch__rev_bid_eid_t *VAR_2,
                     svn_branch__txn_t *VAR_3,
                     apr_pool_t *VAR_4)
{
  if (FUNC_1(VAR_2->rev))
    {
      FUNC_0(FUNC_2(VAR_1,
                                                 VAR_3->repos,
                                                 VAR_2->rev,
                                                 VAR_2->bid,
                                                 VAR_4));
    }
  else
    {
      *VAR_1
        = FUNC_3(VAR_3, VAR_2->bid, VAR_4);
    }

  return VAR_0;
}
