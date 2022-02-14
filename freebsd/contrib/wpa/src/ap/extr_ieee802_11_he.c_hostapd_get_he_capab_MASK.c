
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_he_capabilities {int dummy; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (struct ieee80211_he_capabilities*,struct ieee80211_he_capabilities const*,size_t) ;

void FUNC_1(struct hostapd_data *VAR_0,
     const struct ieee80211_he_capabilities *VAR_1,
     struct ieee80211_he_capabilities *VAR_2,
     size_t VAR_3)
{
 if (!VAR_1)
  return;

 if (VAR_3 > sizeof(*VAR_2))
  VAR_3 = sizeof(*VAR_2);


 FUNC_0(VAR_2, VAR_1, VAR_3);
}
