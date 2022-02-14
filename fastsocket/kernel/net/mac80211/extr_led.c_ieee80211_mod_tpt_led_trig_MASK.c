
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpt_led_trigger {unsigned int active; int want; } ;
struct ieee80211_local {struct tpt_led_trigger* tpt_led_trigger; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct ieee80211_local*) ;

void FUNC_3(struct ieee80211_local *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 struct tpt_led_trigger *VAR_4 = VAR_1->tpt_led_trigger;
 bool VAR_5;

 FUNC_0(VAR_2 & VAR_3);

 if (!VAR_4)
  return;

 VAR_4->active &= ~VAR_3;
 VAR_4->active |= VAR_2;







 VAR_5 = VAR_4->active & VAR_0;

 if (!VAR_5 || !(VAR_4->active & VAR_4->want))
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);
}
