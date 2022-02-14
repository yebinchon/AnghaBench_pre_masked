
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bid; } ;
typedef TYPE_1__ svn_branch__rev_bid_eid_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 int FUNC_1 (int *,int ) ;

svn_branch__rev_bid_eid_t *
FUNC_2(const svn_branch__rev_bid_eid_t *VAR_0,
                            apr_pool_t *VAR_1)
{
  svn_branch__rev_bid_eid_t *VAR_2;

  if (! VAR_0)
    return ((void*)0);

  VAR_2 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_2));
  VAR_2->bid = FUNC_1(VAR_1, VAR_0->bid);
  return VAR_2;
}
