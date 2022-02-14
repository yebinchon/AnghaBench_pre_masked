
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; int tail; int network_header; int transport_header; TYPE_2__* dev; } ;
struct TYPE_6__ {int igmp_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct mld2_report {int mld2r_cksum; } ;
struct ipv6hdr {int daddr; int saddr; int payload_len; } ;
struct inet6_dev {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_3 (struct net*,struct inet6_dev*,int ,int) ;
 int FUNC_4 (struct net*,struct inet6_dev*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,struct sk_buff*,int *,TYPE_2__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int *,int,int ,int ) ;
 int FUNC_7 (scalar_t__,int,int ) ;
 struct net* FUNC_8 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_9 (int) ;
 struct dst_entry* FUNC_10 (TYPE_2__*,int *,int *) ;
 int FUNC_11 (int ,struct flowi*,int ,int *,int *,int ) ;
 struct inet6_dev* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct inet6_dev*) ;
 struct ipv6hdr* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct net*,struct dst_entry**,struct flowi*,int *,int ) ;

__attribute__((used)) static void FUNC_20(struct sk_buff *VAR_10)
{
 struct ipv6hdr *VAR_11 = FUNC_14(VAR_10);
 struct mld2_report *VAR_12 =
         (struct mld2_report *)FUNC_18(VAR_10);
 int VAR_13, VAR_14;
 struct inet6_dev *VAR_15 = FUNC_12(VAR_10->dev);
 struct net *VAR_16 = FUNC_8(VAR_10->dev);
 int VAR_17;
 struct flowi VAR_18;
 struct dst_entry *VAR_19;

 FUNC_3(VAR_16, VAR_15, VAR_4, VAR_10->len);

 VAR_13 = (VAR_10->tail - VAR_10->network_header) - sizeof(*VAR_11);
 VAR_14 = VAR_10->tail - VAR_10->transport_header;
 VAR_11->payload_len = FUNC_9(VAR_13);

 VAR_12->mld2r_cksum = FUNC_6(&VAR_11->saddr, &VAR_11->daddr, VAR_14,
        VAR_3,
        FUNC_7(FUNC_18(VAR_10),
       VAR_14, 0));

 VAR_19 = FUNC_10(VAR_10->dev, ((void*)0), &FUNC_14(VAR_10)->daddr);

 if (!VAR_19) {
  VAR_17 = -VAR_0;
  goto err_out;
 }

 FUNC_11(VAR_16->ipv6.igmp_sk, &VAR_18, VAR_2,
    &FUNC_14(VAR_10)->saddr, &FUNC_14(VAR_10)->daddr,
    VAR_10->dev->ifindex);

 VAR_17 = FUNC_19(VAR_16, &VAR_19, &VAR_18, ((void*)0), 0);
 FUNC_17(VAR_10, VAR_19);
 if (VAR_17)
  goto err_out;

 VAR_13 = VAR_10->len;

 VAR_17 = FUNC_5(VAR_8, VAR_7, VAR_10, ((void*)0), VAR_10->dev,
        VAR_9);
out:
 if (!VAR_17) {
  FUNC_0(VAR_16, VAR_15, VAR_2);
  FUNC_1(VAR_16, VAR_15, VAR_1);
  FUNC_4(VAR_16, VAR_15, VAR_6, VAR_13);
 } else
  FUNC_2(VAR_16, VAR_15, VAR_5);

 if (FUNC_16(VAR_15 != ((void*)0)))
  FUNC_13(VAR_15);
 return;

err_out:
 FUNC_15(VAR_10);
 goto out;
}
