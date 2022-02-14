
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_wep_key {int idx; int len; int key; int cmd; } ;
struct iwi_softc {int dummy; } ;
struct ieee80211vap {struct ieee80211_key* iv_nw_keys; } ;
struct ieee80211_key {int wk_keylen; int wk_key; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwi_softc*,int ,struct iwi_wep_key*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct iwi_softc *VAR_3, struct ieee80211vap *VAR_4)
{
 struct iwi_wep_key VAR_5;
 struct ieee80211_key *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = &VAR_4->iv_nw_keys[VAR_8];

  VAR_5.cmd = VAR_2;
  VAR_5.idx = VAR_8;
  VAR_5.len = VAR_6->wk_keylen;
  FUNC_3(VAR_5.key, 0, sizeof VAR_5.key);
  FUNC_2(VAR_5.key, VAR_6->wk_key, VAR_6->wk_keylen);
  FUNC_0(("Setting wep key index %u len %u\n", VAR_5.idx,
      VAR_5.len));
  VAR_7 = FUNC_1(VAR_3, VAR_1, &VAR_5,
      sizeof VAR_5);
  if (VAR_7 != 0)
   return VAR_7;
 }
 return 0;
}
