
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int wep_rx_tfm; int wep_tx_tfm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ieee80211_local *VAR_0)
{
 if (!FUNC_0(VAR_0->wep_tx_tfm))
  FUNC_1(VAR_0->wep_tx_tfm);
 if (!FUNC_0(VAR_0->wep_rx_tfm))
  FUNC_1(VAR_0->wep_rx_tfm);
}
