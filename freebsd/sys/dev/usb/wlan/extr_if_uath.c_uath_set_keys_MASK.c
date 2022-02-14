
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int dummy; } ;
struct ieee80211vap {size_t iv_def_txkey; struct ieee80211_key const* iv_nw_keys; } ;
typedef struct ieee80211_key {int wk_flags; } const ieee80211_key ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uath_softc*,struct ieee80211_key const*,int) ;

__attribute__((used)) static int
FUNC_1(struct uath_softc *VAR_5, struct ieee80211vap *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  const struct ieee80211_key *VAR_9 = &VAR_6->iv_nw_keys[VAR_7];

  if (VAR_9->wk_flags & (VAR_2|VAR_1)) {
   VAR_8 = FUNC_0(VAR_5, VAR_9, VAR_7);
   if (VAR_8)
    return (VAR_8);
  }
 }
 if (VAR_6->iv_def_txkey != VAR_0) {
  VAR_8 = FUNC_0(VAR_5, &VAR_6->iv_nw_keys[VAR_6->iv_def_txkey],
   VAR_4);
 }
 return (VAR_8);
}
