
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_vap {int maxretry; } ;
struct rum_softc {int dummy; } ;
struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct ieee80211_txparam {int maxretry; } ;
struct ieee80211_node {struct ieee80211_txparam* ni_txparms; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rum_vap* FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct rum_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct rum_softc *VAR_3, struct ieee80211vap *VAR_4)
{
 struct ieee80211_node *VAR_5 = VAR_4->iv_bss;
 const struct ieee80211_txparam *VAR_6 = VAR_5->ni_txparms;
 struct rum_vap *VAR_7 = FUNC_3(VAR_4);

 VAR_7->maxretry = FUNC_0(VAR_6->maxretry, 0xf);

 FUNC_4(VAR_3, VAR_2, FUNC_2(VAR_7->maxretry) |
     FUNC_1(VAR_7->maxretry),
     VAR_1 | VAR_0);
}
