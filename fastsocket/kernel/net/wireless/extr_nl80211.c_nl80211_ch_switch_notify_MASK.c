
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct cfg80211_chan_def*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct cfg80211_registered_device *VAR_4,
         struct net_device *VAR_5,
         struct cfg80211_chan_def *VAR_6,
         gfp_t VAR_7)
{
 struct sk_buff *VAR_8;
 void *VAR_9;

 VAR_8 = FUNC_7(VAR_2, VAR_7);
 if (!VAR_8)
  return;

 VAR_9 = FUNC_4(VAR_8, 0, 0, 0, VAR_1);
 if (!VAR_9) {
  FUNC_6(VAR_8);
  return;
 }

 if (FUNC_5(VAR_8, VAR_0, VAR_5->ifindex))
  goto nla_put_failure;

 if (FUNC_3(VAR_8, VAR_6))
  goto nla_put_failure;

 FUNC_1(VAR_8, VAR_9);

 FUNC_2(FUNC_8(&VAR_4->wiphy), VAR_8, 0,
    VAR_3.id, VAR_7);
 return;

 nla_put_failure:
 FUNC_0(VAR_8, VAR_9);
 FUNC_6(VAR_8);
}
