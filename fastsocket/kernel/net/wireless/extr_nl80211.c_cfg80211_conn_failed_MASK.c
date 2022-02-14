
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; } ;
typedef int gfp_t ;
typedef enum nl80211_connect_failed_reason { ____Placeholder_nl80211_connect_failed_reason } nl80211_connect_failed_reason ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_2__ VAR_6 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 struct cfg80211_registered_device* FUNC_9 (struct wiphy*) ;

void FUNC_10(struct net_device *VAR_7, const u8 *VAR_8,
     enum nl80211_connect_failed_reason VAR_9,
     gfp_t VAR_10)
{
 struct wiphy *VAR_11 = VAR_7->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_12 = FUNC_9(VAR_11);
 struct sk_buff *VAR_13;
 void *VAR_14;

 VAR_13 = FUNC_7(VAR_5, VAR_10);
 if (!VAR_13)
  return;

 VAR_14 = FUNC_3(VAR_13, 0, 0, 0, VAR_4);
 if (!VAR_14) {
  FUNC_6(VAR_13);
  return;
 }

 if (FUNC_5(VAR_13, VAR_2, VAR_7->ifindex) ||
     FUNC_4(VAR_13, VAR_3, VAR_0, VAR_8) ||
     FUNC_5(VAR_13, VAR_1, VAR_9))
  goto nla_put_failure;

 FUNC_1(VAR_13, VAR_14);

 FUNC_2(FUNC_8(&VAR_12->wiphy), VAR_13, 0,
    VAR_6.id, VAR_10);
 return;

 nla_put_failure:
 FUNC_0(VAR_13, VAR_14);
 FUNC_6(VAR_13);
}
