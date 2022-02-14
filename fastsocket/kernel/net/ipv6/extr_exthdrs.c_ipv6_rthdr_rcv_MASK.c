
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct sk_buff {scalar_t__ pkt_type; int transport_header; scalar_t__ ip_summed; int data; TYPE_7__* dev; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct TYPE_11__ {TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6_rt_hdr {int segments_left; int type; int hdrlen; int nexthdr; } ;
struct inet6_skb_parm {int * nhoff; scalar_t__ dst1; scalar_t__ dst0; int srcrt; int lastopt; } ;
struct TYPE_12__ {int accept_source_route; } ;
struct inet6_dev {TYPE_3__ cnf; } ;
struct in6_addr {int dummy; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {int hop_limit; struct in6_addr daddr; int saddr; } ;
struct TYPE_13__ {TYPE_7__* dev; scalar_t__ error; } ;
struct TYPE_10__ {int accept_source_route; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 scalar_t__ VAR_11 ;
 struct net* FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,TYPE_7__*) ;
 struct inet6_dev* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (struct inet6_dev*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_11 (struct in6_addr*) ;
 int FUNC_12 (struct net*,struct in6_addr*) ;
 TYPE_5__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 TYPE_4__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,int) ;
 int* FUNC_23 (struct sk_buff*) ;
 scalar_t__ FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_26(struct sk_buff *VAR_12)
{
 struct inet6_skb_parm *VAR_13 = FUNC_0(VAR_12);
 struct in6_addr *VAR_14 = ((void*)0);
 struct in6_addr VAR_15;
 struct inet6_dev *VAR_16;
 int VAR_17, VAR_18;
 struct ipv6_rt_hdr *VAR_19;
 struct rt0_hdr *VAR_20;
 struct net *VAR_21 = FUNC_2(VAR_12->dev);
 int VAR_22 = VAR_21->ipv6.devconf_all->accept_source_route;

 VAR_16 = FUNC_6(VAR_12->dev);
 if (VAR_16) {
  if (VAR_22 > VAR_16->cnf.accept_source_route)
   VAR_22 = VAR_16->cnf.accept_source_route;
  FUNC_7(VAR_16);
 }

 if (!FUNC_16(VAR_12, FUNC_24(VAR_12) + 8) ||
     !FUNC_16(VAR_12, (FUNC_24(VAR_12) +
     ((FUNC_23(VAR_12)[1] + 1) << 3)))) {
  FUNC_1(VAR_21, FUNC_8(FUNC_18(VAR_12)),
     VAR_9);
  FUNC_14(VAR_12);
  return -1;
 }

 VAR_19 = (struct ipv6_rt_hdr *)FUNC_23(VAR_12);

 if (FUNC_11(&FUNC_13(VAR_12)->daddr) ||
     VAR_12->pkt_type != VAR_11) {
  FUNC_1(VAR_21, FUNC_8(FUNC_18(VAR_12)),
     VAR_8);
  FUNC_14(VAR_12);
  return -1;
 }

looped_back:
 if (VAR_19->segments_left == 0) {
  switch (VAR_19->type) {
  default:
   break;
  }

  VAR_13->lastopt = VAR_13->srcrt = FUNC_21(VAR_12);
  VAR_12->transport_header += (VAR_19->hdrlen + 1) << 3;
  VAR_13->dst0 = VAR_13->dst1;
  VAR_13->dst1 = 0;
  VAR_13->nhoff = (&VAR_19->nexthdr) - FUNC_20(VAR_12);
  return 1;
 }

 switch (VAR_19->type) {
 default:
  goto unknown_rh;
 }






 VAR_17 = VAR_19->hdrlen >> 1;

 if (VAR_19->segments_left > VAR_17) {
  FUNC_1(VAR_21, FUNC_8(FUNC_18(VAR_12)),
     VAR_9);
  FUNC_4(VAR_12, VAR_4,
      ((&VAR_19->segments_left) -
       FUNC_20(VAR_12)));
  return -1;
 }




 if (FUNC_17(VAR_12)) {

  if (FUNC_15(VAR_12, 0, 0, VAR_2)) {
   FUNC_1(VAR_21, FUNC_8(FUNC_18(VAR_12)),
      VAR_10);
   FUNC_14(VAR_12);
   return -1;
  }
  VAR_19 = (struct ipv6_rt_hdr *)FUNC_23(VAR_12);
 }

 if (VAR_12->ip_summed == VAR_0)
  VAR_12->ip_summed = VAR_1;

 VAR_18 = VAR_17 - --VAR_19->segments_left;

 VAR_20 = (struct rt0_hdr *) VAR_19;
 VAR_14 = VAR_20->addr;
 VAR_14 += VAR_18 - 1;

 switch (VAR_19->type) {
 default:
  break;
 }

 if (FUNC_11(VAR_14)) {
  FUNC_1(VAR_21, FUNC_8(FUNC_18(VAR_12)),
     VAR_8);
  FUNC_14(VAR_12);
  return -1;
 }

 FUNC_10(&VAR_15, VAR_14);
 FUNC_10(VAR_14, &FUNC_13(VAR_12)->daddr);
 FUNC_10(&FUNC_13(VAR_12)->daddr, &VAR_15);

 FUNC_19(VAR_12);
 FUNC_9(VAR_12);
 if (FUNC_18(VAR_12)->error) {
  FUNC_22(VAR_12, VAR_12->data - FUNC_20(VAR_12));
  FUNC_3(VAR_12);
  return -1;
 }

 if (FUNC_18(VAR_12)->dev->flags&VAR_6) {
  if (FUNC_13(VAR_12)->hop_limit <= 1) {
   FUNC_1(VAR_21, FUNC_8(FUNC_18(VAR_12)),
      VAR_9);
   FUNC_5(VAR_12, VAR_5, VAR_3,
        0, VAR_12->dev);
   FUNC_14(VAR_12);
   return -1;
  }
  FUNC_13(VAR_12)->hop_limit--;
  goto looped_back;
 }

 FUNC_22(VAR_12, VAR_12->data - FUNC_20(VAR_12));
 FUNC_3(VAR_12);
 return -1;

unknown_rh:
 FUNC_1(VAR_21, FUNC_8(FUNC_18(VAR_12)), VAR_9);
 FUNC_4(VAR_12, VAR_4,
     (&VAR_19->type) - FUNC_20(VAR_12));
 return -1;
}
