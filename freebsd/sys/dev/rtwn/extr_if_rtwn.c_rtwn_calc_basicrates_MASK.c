
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211vap {int * iv_bss; } ;
struct rtwn_vap {scalar_t__ curr_mode; struct ieee80211vap vap; } ;
struct ieee80211com {int ic_flags; } ;
struct rtwn_softc {struct rtwn_vap** vaps; struct ieee80211com sc_ic; } ;
struct ieee80211_node {int ni_rates; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_2 (int *) ;
 int FUNC_3 (struct rtwn_vap**) ;
 int FUNC_4 (struct rtwn_softc*,int *,int *,int *,int *,int) ;
 int FUNC_5 (struct rtwn_softc*,int ) ;

__attribute__((used)) static void
FUNC_6(struct rtwn_softc *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;
 uint32_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_2);

 if (VAR_3->ic_flags & VAR_0)
  return;

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_2->vaps); VAR_5++) {
  struct rtwn_vap *VAR_6;
  struct ieee80211vap *VAR_7;
  struct ieee80211_node *VAR_8;
  uint32_t VAR_9;

  VAR_6 = VAR_2->vaps[VAR_5];
  if (VAR_6 == ((void*)0) || VAR_6->curr_mode == VAR_1)
   continue;

  VAR_7 = &VAR_6->vap;
  if (VAR_7->iv_bss == ((void*)0))
   continue;

  VAR_8 = FUNC_2(VAR_7->iv_bss);
  FUNC_4(VAR_2, &VAR_8->ni_rates, ((void*)0), &VAR_9, ((void*)0), 1);
  VAR_4 |= VAR_9;
  FUNC_1(VAR_8);
 }

 if (VAR_4 == 0)
  return;


 FUNC_5(VAR_2, VAR_4);
}
