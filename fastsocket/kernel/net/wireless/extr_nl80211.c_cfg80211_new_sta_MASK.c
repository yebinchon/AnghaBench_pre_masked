
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,struct cfg80211_registered_device*,struct net_device*,int const*,struct station_info*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct net_device*,int const*,struct station_info*) ;
 int FUNC_5 (int *) ;
 struct cfg80211_registered_device* FUNC_6 (struct wiphy*) ;

void FUNC_7(struct net_device *VAR_2, const u8 *VAR_3,
        struct station_info *VAR_4, gfp_t VAR_5)
{
 struct wiphy *VAR_6 = VAR_2->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_7 = FUNC_6(VAR_6);
 struct sk_buff *VAR_8;

 FUNC_4(VAR_2, VAR_3, VAR_4);

 VAR_8 = FUNC_3(VAR_0, VAR_5);
 if (!VAR_8)
  return;

 if (FUNC_1(VAR_8, 0, 0, 0,
     VAR_7, VAR_2, VAR_3, VAR_4) < 0) {
  FUNC_2(VAR_8);
  return;
 }

 FUNC_0(FUNC_5(&VAR_7->wiphy), VAR_8, 0,
    VAR_1.id, VAR_5);
}
