
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int tx_led_counter; int tx_led; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct ieee80211_local *VAR_2, int VAR_3)
{
 if (FUNC_1(!VAR_2->tx_led))
  return;

 VAR_2->tx_led_counter += 2*VAR_3-1;
 if (VAR_2->tx_led_counter % 2 == 0)
  FUNC_0(VAR_2->tx_led, VAR_1);
 else
  FUNC_0(VAR_2->tx_led, VAR_0);
}
