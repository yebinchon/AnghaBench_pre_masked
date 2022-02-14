
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {char* rx_led_name; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;

char *FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct ieee80211_local *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rx_led_name;
}
