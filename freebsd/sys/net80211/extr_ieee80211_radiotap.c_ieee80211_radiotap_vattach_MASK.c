
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_rawbpf; int iv_ifp; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int * ic_rh; struct ieee80211_radiotap_header* ic_th; } ;
struct ieee80211_radiotap_header {int it_len; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(struct ieee80211vap *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->iv_ic;
 struct ieee80211_radiotap_header *VAR_3 = VAR_2->ic_th;

 if (VAR_3 != ((void*)0) && VAR_2->ic_rh != ((void*)0)) {

  FUNC_0(VAR_1->iv_ifp, VAR_0,
      sizeof(struct ieee80211_frame) + FUNC_1(VAR_3->it_len),
      &VAR_1->iv_rawbpf);
 }
}
