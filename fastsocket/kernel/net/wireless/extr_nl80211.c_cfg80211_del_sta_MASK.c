
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
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_2__ VAR_5 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct net_device*,int const*) ;
 int FUNC_9 (int *) ;
 struct cfg80211_registered_device* FUNC_10 (struct wiphy*) ;

void FUNC_11(struct net_device *VAR_6, const u8 *VAR_7, gfp_t VAR_8)
{
 struct wiphy *VAR_9 = VAR_6->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_10 = FUNC_10(VAR_9);
 struct sk_buff *VAR_11;
 void *VAR_12;

 FUNC_8(VAR_6, VAR_7);

 VAR_11 = FUNC_7(VAR_4, VAR_8);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_3(VAR_11, 0, 0, 0, VAR_3);
 if (!VAR_12) {
  FUNC_6(VAR_11);
  return;
 }

 if (FUNC_5(VAR_11, VAR_1, VAR_6->ifindex) ||
     FUNC_4(VAR_11, VAR_2, VAR_0, VAR_7))
  goto nla_put_failure;

 FUNC_1(VAR_11, VAR_12);

 FUNC_2(FUNC_9(&VAR_10->wiphy), VAR_11, 0,
    VAR_5.id, VAR_8);
 return;

 nla_put_failure:
 FUNC_0(VAR_11, VAR_12);
 FUNC_6(VAR_11);
}
