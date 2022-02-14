
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_branch__txn_t ;
struct TYPE_9__ {int * txn; } ;
typedef TYPE_1__ svn_branch__state_t ;
struct TYPE_10__ {int rev; int eid; } ;
typedef TYPE_2__ svn_branch__rev_bid_eid_t ;
typedef int svn_branch__el_rev_id_t ;
typedef int svn_branch__eid_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,TYPE_2__ const*,int *,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ,char const*,int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_branch__state_t *VAR_1,
                       const svn_branch__rev_bid_eid_t *VAR_2,
                       svn_branch__eid_t VAR_3,
                       const char *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_branch__txn_t *VAR_6 = VAR_1->txn;
  svn_branch__state_t *VAR_7;
  svn_branch__el_rev_id_t *VAR_8;

  FUNC_0(FUNC_1(&VAR_7, VAR_2, VAR_6, VAR_5));
  VAR_8 = FUNC_3(VAR_7, VAR_2->eid,
                                             VAR_2->rev, VAR_5);
  FUNC_0(FUNC_2(VAR_8,
                       VAR_1, VAR_3, VAR_4,
                       VAR_5));

  return VAR_0;
}
