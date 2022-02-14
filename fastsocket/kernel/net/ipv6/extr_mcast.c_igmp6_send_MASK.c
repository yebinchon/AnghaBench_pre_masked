
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {TYPE_3__* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {struct sock* igmp_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct mld_msg {int mld_type; int mld_cksum; int mld_mca; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef int ra ;
struct TYPE_8__ {int ifindex; } ;
struct TYPE_7__ {int daddr; int saddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct inet6_dev*,int) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_3 (struct net*,struct inet6_dev*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,struct sk_buff*,int *,TYPE_3__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 struct inet6_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct in6_addr const*,struct in6_addr const*,int,int,int ) ;
 int FUNC_9 (struct mld_msg*,int,int ) ;
 struct net* FUNC_10 (struct net_device*) ;
 int VAR_13 ;
 struct dst_entry* FUNC_11 (TYPE_3__*,int *,int *) ;
 int FUNC_12 (struct sock*,struct flowi*,int,int *,int *,int ) ;
 struct inet6_dev* FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct inet6_dev*) ;
 struct in6_addr VAR_14 ;
 struct in6_addr VAR_15 ;
 int FUNC_15 (struct sock*,struct sk_buff*,struct net_device*,struct in6_addr const*,struct in6_addr const*,int ,int) ;
 int FUNC_16 (int *,struct in6_addr*) ;
 scalar_t__ FUNC_17 (struct net_device*,struct in6_addr*,int ) ;
 TYPE_2__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (scalar_t__,int*,int) ;
 int FUNC_22 (struct mld_msg*,int ,int) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_26 (struct sk_buff*,int) ;
 int FUNC_27 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_28 (struct sock*,scalar_t__,int,int*) ;
 int FUNC_29 (struct net*,struct dst_entry**,struct flowi*,int *,int ) ;

__attribute__((used)) static void FUNC_30(struct in6_addr *VAR_16, struct net_device *VAR_17, int VAR_18)
{
 struct net *VAR_19 = FUNC_10(VAR_17);
 struct sock *VAR_20 = VAR_19->ipv6.igmp_sk;
 struct inet6_dev *VAR_21;
 struct sk_buff *VAR_22;
 struct mld_msg *VAR_23;
 const struct in6_addr *VAR_24, *VAR_25;
 struct in6_addr VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 u8 VAR_31[8] = { VAR_4, 0,
       VAR_9, 2, 0, 0,
       VAR_8, 0 };
 struct flowi VAR_32;
 struct dst_entry *VAR_33;

 if (VAR_18 == VAR_2)
  VAR_24 = &VAR_15;
 else
  VAR_24 = VAR_16;

 VAR_28 = sizeof(struct icmp6hdr) + sizeof(struct in6_addr);
 VAR_29 = VAR_28 + sizeof(VAR_31);
 VAR_30 = sizeof(struct ipv6hdr) + VAR_29;

 FUNC_23();
 FUNC_3(VAR_19, FUNC_7(VAR_17),
        VAR_5, VAR_30);
 FUNC_24();

 VAR_22 = FUNC_28(VAR_20, FUNC_4(VAR_17) + VAR_30, 1, &VAR_27);

 if (VAR_22 == ((void*)0)) {
  FUNC_23();
  FUNC_2(VAR_19, FUNC_7(VAR_17),
         VAR_6);
  FUNC_24();
  return;
 }

 FUNC_27(VAR_22, FUNC_5(VAR_17));

 if (FUNC_17(VAR_17, &VAR_26, VAR_3)) {




  VAR_25 = &VAR_14;
 } else
  VAR_25 = &VAR_26;

 FUNC_15(VAR_20, VAR_22, VAR_17, VAR_25, VAR_24, VAR_10, VAR_29);

 FUNC_21(FUNC_26(VAR_22, sizeof(VAR_31)), VAR_31, sizeof(VAR_31));

 VAR_23 = (struct mld_msg *) FUNC_26(VAR_22, sizeof(struct mld_msg));
 FUNC_22(VAR_23, 0, sizeof(struct mld_msg));
 VAR_23->mld_type = VAR_18;
 FUNC_16(&VAR_23->mld_mca, VAR_16);

 VAR_23->mld_cksum = FUNC_8(VAR_25, VAR_24, VAR_28,
      VAR_4,
      FUNC_9(VAR_23, VAR_28, 0));

 VAR_21 = FUNC_13(VAR_22->dev);

 VAR_33 = FUNC_11(VAR_22->dev, ((void*)0), &FUNC_18(VAR_22)->daddr);
 if (!VAR_33) {
  VAR_27 = -VAR_0;
  goto err_out;
 }

 FUNC_12(VAR_20, &VAR_32, VAR_18,
    &FUNC_18(VAR_22)->saddr, &FUNC_18(VAR_22)->daddr,
    VAR_22->dev->ifindex);

 VAR_27 = FUNC_29(VAR_19, &VAR_33, &VAR_32, ((void*)0), 0);
 if (VAR_27)
  goto err_out;

 FUNC_25(VAR_22, VAR_33);
 VAR_27 = FUNC_6(VAR_12, VAR_11, VAR_22, ((void*)0), VAR_22->dev,
        VAR_13);
out:
 if (!VAR_27) {
  FUNC_0(VAR_19, VAR_21, VAR_18);
  FUNC_1(VAR_19, VAR_21, VAR_1);
  FUNC_3(VAR_19, VAR_21, VAR_7, VAR_30);
 } else
  FUNC_2(VAR_19, VAR_21, VAR_6);

 if (FUNC_20(VAR_21 != ((void*)0)))
  FUNC_14(VAR_21);
 return;

err_out:
 FUNC_19(VAR_22);
 goto out;
}
