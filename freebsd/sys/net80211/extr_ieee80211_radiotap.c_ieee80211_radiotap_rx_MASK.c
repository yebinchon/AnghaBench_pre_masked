
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; } ;
struct ieee80211vap {int iv_flags_ext; int iv_rawbpf; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_montaps; struct ieee80211_radiotap_header* ic_rh; } ;
struct ieee80211_radiotap_header {int it_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ieee80211_radiotap_header*,int,struct mbuf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211vap*,struct mbuf*,struct ieee80211_radiotap_header*,int) ;

void
FUNC_4(struct ieee80211vap *VAR_2, struct mbuf *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_2->iv_ic;
 struct ieee80211_radiotap_header *VAR_5 = VAR_4->ic_rh;
 int VAR_6;

 FUNC_0(VAR_5 != ((void*)0), ("no rx radiotap header"));
 VAR_6 = FUNC_2(VAR_5->it_len);

 if (VAR_2->iv_flags_ext & VAR_0)
  FUNC_1(VAR_2->iv_rawbpf, VAR_5, VAR_6, VAR_3);





 if (VAR_4->ic_montaps != 0 && (VAR_3->m_flags & VAR_1) == 0)
  FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6);
}
