
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {struct sock* ndisc_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct neighbour {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_type; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dev; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,struct sk_buff*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 struct dst_entry* FUNC_5 (struct net_device*,struct neighbour*,struct in6_addr const*) ;
 int FUNC_6 (struct sock*,struct flowi*,int ,struct in6_addr const*,struct in6_addr const*,int ) ;
 struct inet6_dev* FUNC_7 (int ) ;
 int FUNC_8 (struct inet6_dev*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_12 (struct net*,struct dst_entry**,struct flowi*,int *,int ) ;

void FUNC_13(struct sk_buff *VAR_5,
      struct net_device *VAR_6,
      struct neighbour *VAR_7,
      const struct in6_addr *VAR_8,
      const struct in6_addr *VAR_9,
      struct icmp6hdr *VAR_10)
{
 struct flowi VAR_11;
 struct dst_entry *VAR_12;
 struct net *VAR_13 = FUNC_4(VAR_6);
 struct sock *VAR_14 = VAR_13->ipv6.ndisc_sk;
 struct inet6_dev *VAR_15;
 int VAR_16;
 u8 VAR_17;

 VAR_17 = VAR_10->icmp6_type;

 FUNC_6(VAR_14, &VAR_11, VAR_17, VAR_9, VAR_8, VAR_6->ifindex);

 VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_8);
 if (!VAR_12) {
  FUNC_9(VAR_5);
  return;
 }

 VAR_16 = FUNC_12(VAR_13, &VAR_12, &VAR_11, ((void*)0), 0);
 if (VAR_16 < 0) {
  FUNC_9(VAR_5);
  return;
 }

 FUNC_11(VAR_5, VAR_12);

 VAR_15 = FUNC_7(VAR_12->dev);
 FUNC_2(VAR_13, VAR_15, VAR_1, VAR_5->len);

 VAR_16 = FUNC_3(VAR_3, VAR_2, VAR_5, ((void*)0), VAR_12->dev,
        VAR_4);
 if (!VAR_16) {
  FUNC_0(VAR_13, VAR_15, VAR_17);
  FUNC_1(VAR_13, VAR_15, VAR_0);
 }

 if (FUNC_10(VAR_15 != ((void*)0)))
  FUNC_8(VAR_15);
}
