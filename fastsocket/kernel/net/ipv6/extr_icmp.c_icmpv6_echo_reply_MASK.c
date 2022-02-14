
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp_hdr ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; TYPE_2__* dev; } ;
struct rt6_info {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {int mcast_hops; int hop_limit; int tclass; scalar_t__ mcast_oif; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmpv6_msg {void* type; scalar_t__ offset; struct sk_buff* skb; } ;
struct icmp6hdr {void* icmp6_type; } ;
struct flowi {int fl6_dst; scalar_t__ oif; void* fl_icmp_type; int fl6_src; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
struct TYPE_5__ {scalar_t__ ifindex; } ;
struct TYPE_4__ {struct in6_addr saddr; struct in6_addr daddr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct icmp6hdr* FUNC_2 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_3 (struct sock*,struct flowi*,struct icmp6hdr*,scalar_t__) ;
 struct sock* FUNC_4 (struct net*) ;
 int FUNC_5 (struct sock*) ;
 struct inet6_dev* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct inet6_dev*) ;
 struct ipv6_pinfo* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ,struct icmpv6_msg*,scalar_t__,int,int,int ,int *,struct flowi*,struct rt6_info*,int ) ;
 int FUNC_10 (struct dst_entry*) ;
 int FUNC_11 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (int *,struct in6_addr*) ;
 scalar_t__ FUNC_14 (int *) ;
 TYPE_1__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct icmp6hdr*,struct icmp6hdr*,int) ;
 int FUNC_19 (struct flowi*,int ,int) ;
 int FUNC_20 (struct sk_buff*,struct flowi*) ;
 int FUNC_21 (struct net*,struct dst_entry**,struct flowi*,struct sock*,int ) ;

__attribute__((used)) static void FUNC_22(struct sk_buff *VAR_4)
{
 struct net *VAR_5 = FUNC_0(VAR_4->dev);
 struct sock *VAR_6;
 struct inet6_dev *VAR_7;
 struct ipv6_pinfo *VAR_8;
 struct in6_addr *VAR_9 = ((void*)0);
 struct icmp6hdr *VAR_10 = FUNC_2(VAR_4);
 struct icmp6hdr VAR_11;
 struct flowi VAR_12;
 struct icmpv6_msg VAR_13;
 struct dst_entry *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 VAR_9 = &FUNC_15(VAR_4)->daddr;

 if (!FUNC_16(VAR_4))
  VAR_9 = ((void*)0);

 FUNC_18(&VAR_11, VAR_10, sizeof(VAR_11));
 VAR_11.icmp6_type = VAR_0;

 FUNC_19(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.proto = VAR_1;
 FUNC_13(&VAR_12.fl6_dst, &FUNC_15(VAR_4)->saddr);
 if (VAR_9)
  FUNC_13(&VAR_12.fl6_src, VAR_9);
 VAR_12.oif = VAR_4->dev->ifindex;
 VAR_12.fl_icmp_type = VAR_0;
 FUNC_20(VAR_4, &VAR_12);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == ((void*)0))
  return;
 VAR_8 = FUNC_8(VAR_6);

 if (!VAR_12.oif && FUNC_14(&VAR_12.fl6_dst))
  VAR_12.oif = VAR_8->mcast_oif;

 VAR_15 = FUNC_11(VAR_6, &VAR_14, &VAR_12);
 if (VAR_15)
  goto out;
 if ((VAR_15 = FUNC_21(VAR_5, &VAR_14, &VAR_12, VAR_6, 0)) < 0)
  goto out;

 if (FUNC_14(&VAR_12.fl6_dst))
  VAR_16 = VAR_8->mcast_hops;
 else
  VAR_16 = VAR_8->hop_limit;
 if (VAR_16 < 0)
  VAR_16 = FUNC_10(VAR_14);

 VAR_7 = FUNC_6(VAR_4->dev);

 VAR_13.skb = VAR_4;
 VAR_13.offset = 0;
 VAR_13.type = VAR_0;

 VAR_15 = FUNC_9(VAR_6, VAR_3, &VAR_13, VAR_4->len + sizeof(struct icmp6hdr),
    sizeof(struct icmp6hdr), VAR_16, VAR_8->tclass, ((void*)0), &VAR_12,
    (struct rt6_info*)VAR_14, VAR_2);

 if (VAR_15) {
  FUNC_12(VAR_6);
  goto out_put;
 }
 VAR_15 = FUNC_3(VAR_6, &VAR_12, &VAR_11, VAR_4->len + sizeof(struct icmp6hdr));

out_put:
 if (FUNC_17(VAR_7 != ((void*)0)))
  FUNC_7(VAR_7);
 FUNC_1(VAR_14);
out:
 FUNC_5(VAR_6);
}
