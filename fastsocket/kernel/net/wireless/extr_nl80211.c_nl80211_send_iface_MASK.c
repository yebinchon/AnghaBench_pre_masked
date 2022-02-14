
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {int iftype; int ssid; scalar_t__ ssid_len; struct net_device* netdev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int name; } ;
struct cfg80211_registered_device {int wiphy_idx; int devlist_generation; TYPE_1__* ops; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {scalar_t__ get_channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct cfg80211_chan_def*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_chan_def*) ;
 int FUNC_9 (struct wireless_dev*) ;
 int FUNC_10 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_12, u32 VAR_13, u32 VAR_14, int VAR_15,
         struct cfg80211_registered_device *VAR_16,
         struct wireless_dev *VAR_17)
{
 struct net_device *VAR_18 = VAR_17->netdev;
 void *VAR_19;

 VAR_19 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15, VAR_10);
 if (!VAR_19)
  return -1;

 if (VAR_18 &&
     (FUNC_6(VAR_12, VAR_3, VAR_18->ifindex) ||
      FUNC_5(VAR_12, VAR_4, VAR_18->name)))
  goto nla_put_failure;

 if (FUNC_6(VAR_12, VAR_9, VAR_16->wiphy_idx) ||
     FUNC_6(VAR_12, VAR_5, VAR_17->iftype) ||
     FUNC_7(VAR_12, VAR_8, FUNC_10(VAR_17)) ||
     FUNC_4(VAR_12, VAR_6, VAR_1, FUNC_9(VAR_17)) ||
     FUNC_6(VAR_12, VAR_2,
   VAR_16->devlist_generation ^
   (VAR_11 << 2)))
  goto nla_put_failure;

 if (VAR_16->ops->get_channel) {
  int VAR_20;
  struct cfg80211_chan_def VAR_21;

  VAR_20 = FUNC_8(VAR_16, VAR_17, &VAR_21);
  if (VAR_20 == 0) {
   if (FUNC_2(VAR_12, &VAR_21))
    goto nla_put_failure;
  }
 }

 if (VAR_17->ssid_len) {
  if (FUNC_4(VAR_12, VAR_7, VAR_17->ssid_len, VAR_17->ssid))
   goto nla_put_failure;
 }

 return FUNC_1(VAR_12, VAR_19);

 nla_put_failure:
 FUNC_0(VAR_12, VAR_19);
 return -VAR_0;
}
