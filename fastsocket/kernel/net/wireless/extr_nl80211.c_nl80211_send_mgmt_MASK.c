
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wireless_dev {struct net_device* netdev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct wireless_dev*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct cfg80211_registered_device *VAR_10,
        struct wireless_dev *VAR_11, u32 VAR_12,
        int VAR_13, int VAR_14,
        const u8 *VAR_15, size_t VAR_16, gfp_t VAR_17)
{
 struct net_device *VAR_18 = VAR_11->netdev;
 struct sk_buff *VAR_19;
 void *VAR_20;

 VAR_19 = FUNC_8(VAR_9, VAR_17);
 if (!VAR_19)
  return -VAR_1;

 VAR_20 = FUNC_3(VAR_19, 0, 0, 0, VAR_8);
 if (!VAR_20) {
  FUNC_7(VAR_19);
  return -VAR_1;
 }

 if (FUNC_5(VAR_19, VAR_6, VAR_10->wiphy_idx) ||
     (VAR_18 && FUNC_5(VAR_19, VAR_3,
     VAR_18->ifindex)) ||
     FUNC_6(VAR_19, VAR_5, FUNC_9(VAR_11)) ||
     FUNC_5(VAR_19, VAR_7, VAR_13) ||
     (VAR_14 &&
      FUNC_5(VAR_19, VAR_4, VAR_14)) ||
     FUNC_4(VAR_19, VAR_2, VAR_16, VAR_15))
  goto nla_put_failure;

 FUNC_1(VAR_19, VAR_20);

 return FUNC_2(FUNC_10(&VAR_10->wiphy), VAR_19, VAR_12);

 nla_put_failure:
 FUNC_0(VAR_19, VAR_20);
 FUNC_7(VAR_19);
 return -VAR_0;
}
