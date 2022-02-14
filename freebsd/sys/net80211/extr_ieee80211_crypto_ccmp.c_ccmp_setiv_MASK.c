
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_key {int wk_keytsc; struct ccmp_ctx* wk_private; } ;
struct ccmp_ctx {struct ieee80211vap* cc_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,struct ieee80211_key*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_key *VAR_1, uint8_t *VAR_2)
{
 struct ccmp_ctx *VAR_3 = VAR_1->wk_private;
 struct ieee80211vap *VAR_4 = VAR_3->cc_vap;
 uint8_t VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1) << 6;

 VAR_1->wk_keytsc++;
 VAR_2[0] = VAR_1->wk_keytsc >> 0;
 VAR_2[1] = VAR_1->wk_keytsc >> 8;
 VAR_2[2] = 0;
 VAR_2[3] = VAR_5 | VAR_0;
 VAR_2[4] = VAR_1->wk_keytsc >> 16;
 VAR_2[5] = VAR_1->wk_keytsc >> 24;
 VAR_2[6] = VAR_1->wk_keytsc >> 32;
 VAR_2[7] = VAR_1->wk_keytsc >> 40;
}
