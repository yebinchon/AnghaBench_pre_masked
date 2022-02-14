
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsu_softc {int del_key_task; int free_keys_bmap; int sc_running; struct ieee80211_key const** group_keys; } ;
struct ieee80211vap {struct ieee80211_key const* iv_nw_keys; TYPE_1__* iv_ic; } ;
struct ieee80211_key {int wk_flags; size_t wk_keyix; } ;
struct TYPE_2__ {struct rsu_softc* ic_softc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rsu_softc*) ;
 int FUNC_2 (struct rsu_softc*) ;
 int FUNC_3 (struct rsu_softc*) ;
 int FUNC_4 (struct rsu_softc*) ;
 size_t FUNC_5 (struct ieee80211_key const**) ;
 int FUNC_6 (struct rsu_softc*,size_t) ;
 int FUNC_7 (struct rsu_softc*,struct ieee80211_key const*) ;
 int FUNC_8 (struct rsu_softc*,struct ieee80211_key const*) ;
 int FUNC_9 (int ,size_t) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_12(struct ieee80211vap *VAR_3, const struct ieee80211_key *VAR_4,
    int VAR_5)
{
 struct rsu_softc *VAR_6 = VAR_3->iv_ic->ic_softc;
 int VAR_7;

 if (VAR_4->wk_flags & VAR_0) {

  return (1);
 }


 if (&VAR_3->iv_nw_keys[0] <= VAR_4 &&
     VAR_4 < &VAR_3->iv_nw_keys[VAR_1]) {
  FUNC_0(VAR_4->wk_keyix < FUNC_5(VAR_6->group_keys),
      ("keyix %u > %zu\n", VAR_4->wk_keyix, FUNC_5(VAR_6->group_keys)));

  FUNC_3(VAR_6);
  VAR_6->group_keys[VAR_4->wk_keyix] = (VAR_5 ? VAR_4 : ((void*)0));
  if (!VAR_6->sc_running) {

   FUNC_4(VAR_6);
   return (1);
  }

  if (VAR_5)
   VAR_7 = FUNC_7(VAR_6, VAR_4);
  else
   VAR_7 = FUNC_6(VAR_6, VAR_4->wk_keyix);
  FUNC_4(VAR_6);

  return (!VAR_7);
 }

 if (VAR_5) {

  FUNC_10(VAR_2, &VAR_6->del_key_task);

  FUNC_3(VAR_6);
  VAR_7 = FUNC_8(VAR_6, VAR_4);
  FUNC_4(VAR_6);
 } else {
  FUNC_1(VAR_6);
  FUNC_9(VAR_6->free_keys_bmap, VAR_4->wk_keyix);
  FUNC_2(VAR_6);


  FUNC_11(VAR_2, &VAR_6->del_key_task);
  VAR_7 = 0;
 }

 return (!VAR_7);
}
