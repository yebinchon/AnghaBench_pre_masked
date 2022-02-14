
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wireless_dev {scalar_t__ iftype; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;
struct TYPE_2__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_8 ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__,scalar_t__ const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct net_device*,scalar_t__ const*) ;
 int FUNC_10 (int *) ;
 struct cfg80211_registered_device* FUNC_11 (int ) ;

void FUNC_12(struct net_device *VAR_9, const u8 *VAR_10,
     const u8* VAR_11, u8 VAR_12, gfp_t VAR_13)
{
 struct wireless_dev *VAR_14 = VAR_9->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_15 = FUNC_11(VAR_14->wiphy);
 struct sk_buff *VAR_16;
 void *VAR_17;

 if (FUNC_0(VAR_14->iftype != VAR_6))
  return;

 FUNC_9(VAR_9, VAR_10);

 VAR_16 = FUNC_8(VAR_7, VAR_13);
 if (!VAR_16)
  return;

 VAR_17 = FUNC_4(VAR_16, 0, 0, 0, VAR_5);
 if (!VAR_17) {
  FUNC_7(VAR_16);
  return;
 }

 if (FUNC_6(VAR_16, VAR_4, VAR_15->wiphy_idx) ||
     FUNC_6(VAR_16, VAR_2, VAR_9->ifindex) ||
     FUNC_5(VAR_16, VAR_3, VAR_0, VAR_10) ||
     (VAR_12 && VAR_11 &&
      FUNC_5(VAR_16, VAR_1, VAR_12 , VAR_11)))
  goto nla_put_failure;

 FUNC_2(VAR_16, VAR_17);

 FUNC_3(FUNC_10(&VAR_15->wiphy), VAR_16, 0,
    VAR_8.id, VAR_13);
 return;

 nla_put_failure:
 FUNC_1(VAR_16, VAR_17);
 FUNC_7(VAR_16);
}
