
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;


 struct cfg80211_registered_device* FUNC_0 (struct wiphy*) ;

int FUNC_1(struct wiphy *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->wiphy_idx;
}
