
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_4__ {TYPE_1__* policy_bydst; } ;
struct net {TYPE_2__ xfrm; } ;
struct hlist_head {int dummy; } ;
struct TYPE_3__ {unsigned int hmask; struct hlist_head* table; } ;


 unsigned int FUNC_0 (int *,int *,unsigned short,unsigned int) ;

__attribute__((used)) static struct hlist_head *FUNC_1(struct net *VAR_0, xfrm_address_t *VAR_1, xfrm_address_t *VAR_2, unsigned short VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_0->xfrm.policy_bydst[VAR_4].hmask;
 unsigned int VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);

 return VAR_0->xfrm.policy_bydst[VAR_4].table + VAR_6;
}
