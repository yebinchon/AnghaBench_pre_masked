
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct cfg80211_registered_device*,struct net_device*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cfg80211_registered_device *VAR_4,
         struct net_device *VAR_5)
{
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_6)
  return;

 if (FUNC_1(VAR_6, VAR_4, VAR_5, 0, 0, 0,
     VAR_1) < 0) {
  FUNC_2(VAR_6);
  return;
 }

 FUNC_0(FUNC_4(&VAR_4->wiphy), VAR_6, 0,
    VAR_3.id, VAR_0);
}
