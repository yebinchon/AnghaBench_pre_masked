
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct rtmsg {int rtm_flags; } ;
struct rtable {int rt_dst; int rt_src; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct mr_table {int dummy; } ;
struct mfc_cache {int mfc_flags; } ;
struct iphdr {int ihl; scalar_t__ version; int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mr_table*,struct sk_buff*,struct mfc_cache*,struct rtmsg*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 struct mfc_cache* FUNC_2 (struct mr_table*,int ,int ) ;
 int FUNC_3 (struct mr_table*,int,struct sk_buff*) ;
 int FUNC_4 (struct mr_table*,struct net_device*) ;
 struct mr_table* FUNC_5 (struct net*,int ) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 struct rtable* FUNC_11 (struct sk_buff*) ;

int FUNC_12(struct net *VAR_9,
     struct sk_buff *VAR_10, struct rtmsg *VAR_11, int VAR_12)
{
 int VAR_13;
 struct mr_table *VAR_14;
 struct mfc_cache *VAR_15;
 struct rtable *VAR_16 = FUNC_11(VAR_10);

 VAR_14 = FUNC_5(VAR_9, VAR_7);
 if (VAR_14 == ((void*)0))
  return -VAR_2;

 FUNC_6(&VAR_8);
 VAR_15 = FUNC_2(VAR_14, VAR_16->rt_src, VAR_16->rt_dst);

 if (VAR_15 == ((void*)0)) {
  struct sk_buff *VAR_17;
  struct iphdr *VAR_18;
  struct net_device *VAR_19;
  int VAR_20;

  if (VAR_12) {
   FUNC_7(&VAR_8);
   return -VAR_0;
  }

  VAR_19 = VAR_10->dev;
  if (VAR_19 == ((void*)0) || (VAR_20 = FUNC_4(VAR_14, VAR_19)) < 0) {
   FUNC_7(&VAR_8);
   return -VAR_1;
  }
  VAR_17 = FUNC_8(VAR_10, VAR_4);
  if (!VAR_17) {
   FUNC_7(&VAR_8);
   return -VAR_3;
  }

  FUNC_9(VAR_17, sizeof(struct iphdr));
  FUNC_10(VAR_17);
  VAR_18 = FUNC_1(VAR_17);
  VAR_18->ihl = sizeof(struct iphdr) >> 2;
  VAR_18->saddr = VAR_16->rt_src;
  VAR_18->daddr = VAR_16->rt_dst;
  VAR_18->version = 0;
  VAR_13 = FUNC_3(VAR_14, VAR_20, VAR_17);
  FUNC_7(&VAR_8);
  return VAR_13;
 }

 if (!VAR_12 && (VAR_11->rtm_flags&VAR_6))
  VAR_15->mfc_flags |= VAR_5;
 VAR_13 = FUNC_0(VAR_14, VAR_10, VAR_15, VAR_11);
 FUNC_7(&VAR_8);
 return VAR_13;
}
