
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; int radio_led_name; int assoc_led_name; int tx_led_name; int rx_led_name; } ;


 int FUNC_0 (int ,int,char*,char*) ;
 char* FUNC_1 (int ) ;

void FUNC_2(struct ieee80211_local *VAR_0)
{
 FUNC_0(VAR_0->rx_led_name, sizeof(VAR_0->rx_led_name),
   "%srx", FUNC_1(VAR_0->hw.wiphy));
 FUNC_0(VAR_0->tx_led_name, sizeof(VAR_0->tx_led_name),
   "%stx", FUNC_1(VAR_0->hw.wiphy));
 FUNC_0(VAR_0->assoc_led_name, sizeof(VAR_0->assoc_led_name),
   "%sassoc", FUNC_1(VAR_0->hw.wiphy));
 FUNC_0(VAR_0->radio_led_name, sizeof(VAR_0->radio_led_name),
   "%sradio", FUNC_1(VAR_0->hw.wiphy));
}
