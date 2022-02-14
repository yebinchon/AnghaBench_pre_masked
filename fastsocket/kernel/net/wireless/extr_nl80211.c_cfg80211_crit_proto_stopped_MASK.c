
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wireless_dev {int wiphy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; scalar_t__ crit_proto_nlportid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,scalar_t__) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (int *) ;
 struct cfg80211_registered_device* FUNC_10 (int ) ;

void FUNC_11(struct wireless_dev *VAR_4, gfp_t VAR_5)
{
 struct cfg80211_registered_device *VAR_6;
 struct sk_buff *VAR_7;
 void *VAR_8;
 u32 VAR_9;

 VAR_6 = FUNC_10(VAR_4->wiphy);
 if (!VAR_6->crit_proto_nlportid)
  return;

 VAR_9 = VAR_6->crit_proto_nlportid;
 VAR_6->crit_proto_nlportid = 0;

 VAR_7 = FUNC_7(VAR_3, VAR_5);
 if (!VAR_7)
  return;

 VAR_8 = FUNC_3(VAR_7, 0, 0, 0, VAR_2);
 if (!VAR_8)
  goto nla_put_failure;

 if (FUNC_4(VAR_7, VAR_1, VAR_6->wiphy_idx) ||
     FUNC_5(VAR_7, VAR_0, FUNC_8(VAR_4)))
  goto nla_put_failure;

 FUNC_1(VAR_7, VAR_8);

 FUNC_2(FUNC_9(&VAR_6->wiphy), VAR_7, VAR_9);
 return;

 nla_put_failure:
 if (VAR_8)
  FUNC_0(VAR_7, VAR_8);
 FUNC_6(VAR_7);

}
