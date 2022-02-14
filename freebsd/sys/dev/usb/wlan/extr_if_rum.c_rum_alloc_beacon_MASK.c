
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_vap {struct mbuf* bcn_mbuf; } ;
struct rum_softc {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {scalar_t__ ni_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rum_vap* FUNC_0 (struct ieee80211vap*) ;
 struct mbuf* FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct rum_softc*,struct ieee80211vap*) ;

__attribute__((used)) static int
FUNC_4(struct rum_softc *VAR_3, struct ieee80211vap *VAR_4)
{
 struct rum_vap *VAR_5 = FUNC_0(VAR_4);
 struct ieee80211_node *VAR_6 = VAR_4->iv_bss;
 struct mbuf *VAR_7;

 if (VAR_6->ni_chan == VAR_2)
  return VAR_0;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 == ((void*)0))
  return VAR_1;

 if (VAR_5->bcn_mbuf != ((void*)0))
  FUNC_2(VAR_5->bcn_mbuf);

 VAR_5->bcn_mbuf = VAR_7;

 return (FUNC_3(VAR_3, VAR_4));
}
