
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rum_softc {int dummy; } ;
struct ieee80211vap {struct ieee80211_key const* iv_nw_keys; TYPE_1__* iv_ic; } ;
struct ieee80211_key {int wk_flags; } ;
struct TYPE_2__ {struct rum_softc* ic_softc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct rum_softc*,struct ieee80211_key const*,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_4, const struct ieee80211_key *VAR_5)
{
 struct rum_softc *VAR_6 = VAR_4->iv_ic->ic_softc;
 int VAR_7;

 if (VAR_5->wk_flags & VAR_0) {

  return 1;
 }

 VAR_7 = VAR_5 >= &VAR_4->iv_nw_keys[0] && VAR_5 < &VAR_4->iv_nw_keys[VAR_1];

 return !FUNC_0(VAR_6, VAR_5, sizeof(*VAR_5), 0,
     VAR_7 ? VAR_2 : VAR_3);
}
