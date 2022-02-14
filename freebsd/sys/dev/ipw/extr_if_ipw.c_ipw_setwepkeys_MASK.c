
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_wep_key {int idx; int len; int key; } ;
struct ieee80211com {int ic_vaps; } ;
struct ipw_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {struct ieee80211_key* iv_nw_keys; } ;
struct ieee80211_key {int wk_keylen; int wk_key; TYPE_1__* wk_cipher; } ;
struct TYPE_2__ {scalar_t__ ic_cipher; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211vap* FUNC_1 (int *) ;
 int FUNC_2 (struct ipw_softc*,int ,struct ipw_wep_key*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ipw_softc *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 struct ieee80211vap *VAR_5 = FUNC_1(&VAR_4->ic_vaps);
 struct ipw_wep_key VAR_6;
 struct ieee80211_key *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_7 = &VAR_5->iv_nw_keys[VAR_9];

  if (VAR_7->wk_cipher == ((void*)0) ||
      VAR_7->wk_cipher->ic_cipher != VAR_0)
   continue;

  VAR_6.idx = VAR_9;
  VAR_6.len = VAR_7->wk_keylen;
  FUNC_4(VAR_6.key, 0, sizeof VAR_6.key);
  FUNC_3(VAR_6.key, VAR_7->wk_key, VAR_7->wk_keylen);
  FUNC_0(("Setting wep key index %u len %u\n", VAR_6.idx,
      VAR_6.len));
  VAR_8 = FUNC_2(VAR_3, VAR_2, &VAR_6,
      sizeof VAR_6);
  if (VAR_8 != 0)
   return VAR_8;
 }
 return 0;
}
