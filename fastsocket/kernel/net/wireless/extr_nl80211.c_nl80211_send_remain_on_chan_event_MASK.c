
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct wireless_dev {TYPE_1__* netdev; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_channel {unsigned int center_freq; } ;
struct cfg80211_registered_device {unsigned int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {unsigned int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_2__ VAR_10 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
 int VAR_11, struct cfg80211_registered_device *VAR_12,
 struct wireless_dev *VAR_13, u64 VAR_14,
 struct ieee80211_channel *VAR_15,
 unsigned int VAR_16, gfp_t VAR_17)
{
 struct sk_buff *VAR_18;
 void *VAR_19;

 VAR_18 = FUNC_7(VAR_9, VAR_17);
 if (!VAR_18)
  return;

 VAR_19 = FUNC_3(VAR_18, 0, 0, 0, VAR_11);
 if (!VAR_19) {
  FUNC_6(VAR_18);
  return;
 }

 if (FUNC_4(VAR_18, VAR_4, VAR_12->wiphy_idx) ||
     (VAR_13->netdev && FUNC_4(VAR_18, VAR_2,
      VAR_13->netdev->ifindex)) ||
     FUNC_5(VAR_18, VAR_3, FUNC_8(VAR_13)) ||
     FUNC_4(VAR_18, VAR_6, VAR_15->center_freq) ||
     FUNC_4(VAR_18, VAR_5,
   VAR_7) ||
     FUNC_5(VAR_18, VAR_0, VAR_14))
  goto nla_put_failure;

 if (VAR_11 == VAR_8 &&
     FUNC_4(VAR_18, VAR_1, VAR_16))
  goto nla_put_failure;

 FUNC_1(VAR_18, VAR_19);

 FUNC_2(FUNC_9(&VAR_12->wiphy), VAR_18, 0,
    VAR_10.id, VAR_17);
 return;

 nla_put_failure:
 FUNC_0(VAR_18, VAR_19);
 FUNC_6(VAR_18);
}
