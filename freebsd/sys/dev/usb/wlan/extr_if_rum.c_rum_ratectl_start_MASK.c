
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_vap {int ratectl_ch; } ;
struct rum_softc {int sta; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 struct rum_vap* FUNC_0 (struct ieee80211vap*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rum_softc*,int ,int ,int) ;
 int FUNC_2 (int *,int ,int ,struct rum_vap*) ;

__attribute__((used)) static void
FUNC_3(struct rum_softc *VAR_3, struct ieee80211_node *VAR_4)
{
 struct ieee80211vap *VAR_5 = VAR_4->ni_vap;
 struct rum_vap *VAR_6 = FUNC_0(VAR_5);


 FUNC_1(VAR_3, VAR_0, VAR_3->sta, sizeof VAR_3->sta);

 FUNC_2(&VAR_6->ratectl_ch, VAR_1, VAR_2, VAR_6);
}
