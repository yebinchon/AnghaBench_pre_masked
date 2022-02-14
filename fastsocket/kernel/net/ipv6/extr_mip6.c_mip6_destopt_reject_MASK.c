
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct xfrm_state {int dummy; } ;
struct xfrm_selector {int prefixlen_d; int prefixlen_s; scalar_t__ proto; int ifindex; void* sport_mask; scalar_t__ sport; void* dport_mask; scalar_t__ dport; int family; int saddr; int daddr; } ;
struct timeval {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct net {int dummy; } ;
struct ipv6_destopt_hao {int addr; } ;
struct inet6_skb_parm {int dsthao; int iif; } ;
struct flowi {scalar_t__ proto; scalar_t__ fl_mh_type; int oif; } ;
typedef int sel ;
struct TYPE_2__ {int saddr; int daddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int,int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net*,int ,struct xfrm_selector*,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct xfrm_selector*,int ,int) ;
 int FUNC_7 (struct timeval*,int *,int *,int ) ;
 int FUNC_8 (struct sk_buff*,struct timeval*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct flowi*) ;
 scalar_t__ FUNC_12 (struct flowi*) ;
 struct net* FUNC_13 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_14(struct xfrm_state *VAR_5, struct sk_buff *VAR_6, struct flowi *VAR_7)
{
 struct net *VAR_8 = FUNC_13(VAR_5);
 struct inet6_skb_parm *VAR_9 = (struct inet6_skb_parm *)VAR_6->cb;
 struct ipv6_destopt_hao *VAR_10 = ((void*)0);
 struct xfrm_selector VAR_11;
 int VAR_12;
 struct timeval VAR_13;
 int VAR_14 = 0;

 if (FUNC_10(VAR_7->proto == VAR_3 &&
       VAR_7->fl_mh_type <= VAR_1))
  goto out;

 if (FUNC_4(VAR_9->dsthao)) {
  VAR_12 = FUNC_1(VAR_6, VAR_9->dsthao, VAR_4);
  if (FUNC_4(VAR_12 >= 0))
   VAR_10 = (struct ipv6_destopt_hao *)
     (FUNC_9(VAR_6) + VAR_12);
 }

 FUNC_8(VAR_6, &VAR_13);

 if (!FUNC_7(&VAR_13, &FUNC_2(VAR_6)->daddr,
      VAR_10 ? &VAR_10->addr : &FUNC_2(VAR_6)->saddr,
      VAR_9->iif))
  goto out;

 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 FUNC_5(&VAR_11.daddr, (xfrm_address_t *)&FUNC_2(VAR_6)->daddr,
        sizeof(VAR_11.daddr));
 VAR_11.prefixlen_d = 128;
 FUNC_5(&VAR_11.saddr, (xfrm_address_t *)&FUNC_2(VAR_6)->saddr,
        sizeof(VAR_11.saddr));
 VAR_11.prefixlen_s = 128;
 VAR_11.family = VAR_0;
 VAR_11.proto = VAR_7->proto;
 VAR_11.dport = FUNC_11(VAR_7);
 if (VAR_11.dport)
  VAR_11.dport_mask = FUNC_0(~0);
 VAR_11.sport = FUNC_12(VAR_7);
 if (VAR_11.sport)
  VAR_11.sport_mask = FUNC_0(~0);
 VAR_11.ifindex = VAR_7->oif;

 VAR_14 = FUNC_3(VAR_8, VAR_2, &VAR_11,
   (VAR_10 ? (xfrm_address_t *)&VAR_10->addr : ((void*)0)));

 out:
 return VAR_14;
}
