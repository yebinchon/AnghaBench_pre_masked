
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {void* wep_rx_tfm; void* wep_tx_tfm; int wep_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 void* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct ieee80211_local *VAR_3)
{

 FUNC_5(&VAR_3->wep_iv, VAR_2);

 VAR_3->wep_tx_tfm = FUNC_3("arc4", 0, VAR_0);
 if (FUNC_1(VAR_3->wep_tx_tfm)) {
  VAR_3->wep_rx_tfm = FUNC_0(-VAR_1);
  return FUNC_2(VAR_3->wep_tx_tfm);
 }

 VAR_3->wep_rx_tfm = FUNC_3("arc4", 0, VAR_0);
 if (FUNC_1(VAR_3->wep_rx_tfm)) {
  FUNC_4(VAR_3->wep_tx_tfm);
  VAR_3->wep_tx_tfm = FUNC_0(-VAR_1);
  return FUNC_2(VAR_3->wep_rx_tfm);
 }

 return 0;
}
