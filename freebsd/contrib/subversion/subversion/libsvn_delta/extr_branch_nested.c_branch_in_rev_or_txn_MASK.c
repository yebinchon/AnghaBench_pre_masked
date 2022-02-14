
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int ,int ,int ,int *) ;
 int * FUNC_4 (TYPE_1__*,int ,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_branch__state_t **VAR_2,
                     const svn_branch__rev_bid_eid_t *VAR_3,
                     svn_branch__txn_t *VAR_4,
                     apr_pool_t *VAR_5)
{
  if (FUNC_1(VAR_3->rev))
    {
      FUNC_0(FUNC_3(VAR_2,
                                                 VAR_4->repos,
                                                 VAR_3->rev,
                                                 VAR_3->bid,
                                                 VAR_5));
    }
  else
    {
      *VAR_2
        = FUNC_4(
            VAR_4, VAR_3->bid, VAR_5);
      if (! *VAR_2)
        return FUNC_5(VAR_0, ((void*)0),
                                 FUNC_2("Branch %s not found"),
                                 VAR_3->bid);
    }

  return VAR_1;
}
