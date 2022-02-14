
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int rfkill; } ;


 int FUNC_0 (int ) ;
 struct cfg80211_registered_device* FUNC_1 (struct wiphy*) ;

void FUNC_2(struct wiphy *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->rfkill);
}
