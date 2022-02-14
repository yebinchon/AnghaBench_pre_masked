
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_selector {int dummy; } ;
struct TYPE_4__ {TYPE_1__* policy_bydst; struct hlist_head* policy_inexact; } ;
struct net {TYPE_2__ xfrm; } ;
struct hlist_head {int dummy; } ;
struct TYPE_3__ {unsigned int hmask; struct hlist_head* table; } ;


 unsigned int FUNC_0 (struct xfrm_selector*,unsigned short,unsigned int) ;

__attribute__((used)) static struct hlist_head *FUNC_1(struct net *VAR_0, struct xfrm_selector *VAR_1, unsigned short VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_0->xfrm.policy_bydst[VAR_3].hmask;
 unsigned int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);

 return (VAR_5 == VAR_4 + 1 ?
  &VAR_0->xfrm.policy_inexact[VAR_3] :
  VAR_0->xfrm.policy_bydst[VAR_3].table + VAR_5);
}
