
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int lock; scalar_t__ coaddr; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int nexthdr; } ;
struct rt2_hdr {int addr; TYPE_1__ rt_hdr; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (int *,struct in6_addr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct xfrm_state *VAR_1, struct sk_buff *VAR_2)
{
 struct rt2_hdr *VAR_3 = (struct rt2_hdr *)VAR_2->data;
 int VAR_4 = VAR_3->rt_hdr.nexthdr;

 FUNC_2(&VAR_1->lock);
 if (!FUNC_1(&VAR_3->addr, (struct in6_addr *)VAR_1->coaddr) &&
     !FUNC_0((struct in6_addr *)VAR_1->coaddr))
  VAR_4 = -VAR_0;
 FUNC_3(&VAR_1->lock);

 return VAR_4;
}
