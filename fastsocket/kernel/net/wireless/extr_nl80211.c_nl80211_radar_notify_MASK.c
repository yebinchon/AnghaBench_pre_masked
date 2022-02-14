
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;
typedef enum nl80211_radar_event { ____Placeholder_nl80211_radar_event } nl80211_radar_event ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct cfg80211_chan_def*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct wireless_dev*) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct cfg80211_registered_device *VAR_7,
       struct cfg80211_chan_def *VAR_8,
       enum nl80211_radar_event VAR_9,
       struct net_device *VAR_10, gfp_t VAR_11)
{
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_8(VAR_5, VAR_11);
 if (!VAR_12)
  return;

 VAR_13 = FUNC_4(VAR_12, 0, 0, 0, VAR_4);
 if (!VAR_13) {
  FUNC_7(VAR_12);
  return;
 }

 if (FUNC_5(VAR_12, VAR_3, VAR_7->wiphy_idx))
  goto nla_put_failure;


 if (VAR_10) {
  struct wireless_dev *VAR_14 = VAR_10->ieee80211_ptr;

  if (FUNC_5(VAR_12, VAR_0, VAR_10->ifindex) ||
      FUNC_6(VAR_12, VAR_2, FUNC_9(VAR_14)))
   goto nla_put_failure;
 }

 if (FUNC_5(VAR_12, VAR_1, VAR_9))
  goto nla_put_failure;

 if (FUNC_3(VAR_12, VAR_8))
  goto nla_put_failure;

 if (FUNC_1(VAR_12, VAR_13) < 0) {
  FUNC_7(VAR_12);
  return;
 }

 FUNC_2(FUNC_10(&VAR_7->wiphy), VAR_12, 0,
    VAR_6.id, VAR_11);
 return;

 nla_put_failure:
 FUNC_0(VAR_12, VAR_13);
 FUNC_7(VAR_12);
}
