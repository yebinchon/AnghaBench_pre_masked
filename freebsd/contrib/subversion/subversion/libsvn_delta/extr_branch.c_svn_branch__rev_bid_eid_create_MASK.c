
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int eid; int rev; int bid; } ;
typedef TYPE_1__ svn_branch__rev_bid_eid_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;

svn_branch__rev_bid_eid_t *
FUNC_2(svn_revnum_t VAR_0,
                               const char *VAR_1,
                               int VAR_2,
                               apr_pool_t *VAR_3)
{
  svn_branch__rev_bid_eid_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->bid = FUNC_1(VAR_3, VAR_1);
  VAR_4->eid = VAR_2;
  VAR_4->rev = VAR_0;
  return VAR_4;
}
