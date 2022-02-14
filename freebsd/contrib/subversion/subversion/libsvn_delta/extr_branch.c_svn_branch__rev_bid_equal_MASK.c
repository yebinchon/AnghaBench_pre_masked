
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rev; int bid; } ;
typedef TYPE_1__ svn_branch__rev_bid_t ;
typedef int svn_boolean_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

svn_boolean_t
FUNC_1(const svn_branch__rev_bid_t *VAR_0,
                          const svn_branch__rev_bid_t *VAR_1)
{
  return (VAR_0->rev == VAR_1->rev
          && FUNC_0(VAR_0->bid, VAR_1->bid) == 0);
}
