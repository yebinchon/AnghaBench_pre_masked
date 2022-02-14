
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211vap {int iv_flags_ext; int iv_rawbpf; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_montaps; struct ieee80211_radiotap_header* ic_th; } ;
struct ieee80211_radiotap_header {int it_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct ieee80211_radiotap_header*,int,struct mbuf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211vap*,struct mbuf*,struct ieee80211_radiotap_header*,int) ;

void
FUNC_4(struct ieee80211vap *VAR_1, struct mbuf *VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_1->iv_ic;
 struct ieee80211_radiotap_header *VAR_4 = VAR_3->ic_th;
 int VAR_5;

 FUNC_0(VAR_4 != ((void*)0), ("no tx radiotap header"));
 VAR_5 = FUNC_2(VAR_4->it_len);

 if (VAR_1->iv_flags_ext & VAR_0)
  FUNC_1(VAR_1->iv_rawbpf, VAR_4, VAR_5, VAR_2);



 if (VAR_3->ic_montaps != 0)
  FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
}
