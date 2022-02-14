
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int rfkill_sync; int rfkill; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 struct cfg80211_registered_device* FUNC_2 (struct wiphy*) ;

void FUNC_3(struct wiphy *VAR_0, bool VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_2->rfkill, VAR_1))
  FUNC_1(&VAR_2->rfkill_sync);
}
