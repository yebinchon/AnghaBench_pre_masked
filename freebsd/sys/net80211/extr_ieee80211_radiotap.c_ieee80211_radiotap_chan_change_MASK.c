
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_curchan; int * ic_txchan; struct ieee80211_radiotap_header* ic_th; int * ic_rxchan; struct ieee80211_radiotap_header* ic_rh; } ;
struct ieee80211_radiotap_header {int it_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct ieee80211com *VAR_2)
{
 if (VAR_2->ic_rxchan != ((void*)0)) {
  struct ieee80211_radiotap_header *VAR_3 = VAR_2->ic_rh;

  if (VAR_3->it_present & FUNC_0(1<<VAR_1))
   FUNC_2(VAR_2->ic_rxchan, VAR_2->ic_curchan);
  else if (VAR_3->it_present & FUNC_0(1<<VAR_0))
   FUNC_1(VAR_2->ic_rxchan, VAR_2->ic_curchan);
 }
 if (VAR_2->ic_txchan != ((void*)0)) {
  struct ieee80211_radiotap_header *VAR_4 = VAR_2->ic_th;

  if (VAR_4->it_present & FUNC_0(1<<VAR_1))
   FUNC_2(VAR_2->ic_txchan, VAR_2->ic_curchan);
  else if (VAR_4->it_present & FUNC_0(1<<VAR_0))
   FUNC_1(VAR_2->ic_txchan, VAR_2->ic_curchan);
 }
}
