
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int rx_led; int rx_led_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct ieee80211_local *VAR_2)
{
 if (FUNC_1(!VAR_2->rx_led))
  return;
 if (VAR_2->rx_led_counter++ % 2 == 0)
  FUNC_0(VAR_2->rx_led, VAR_1);
 else
  FUNC_0(VAR_2->rx_led, VAR_0);
}
