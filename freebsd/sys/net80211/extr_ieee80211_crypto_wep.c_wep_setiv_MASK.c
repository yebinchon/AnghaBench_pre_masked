
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct wep_ctx {int wc_iv; struct ieee80211vap* wc_vap; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_key {struct wep_ctx* wk_private; } ;


 int FUNC_0 (struct ieee80211vap*,struct ieee80211_key*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_key *VAR_0, uint8_t *VAR_1)
{
 struct wep_ctx *VAR_2 = VAR_0->wk_private;
 struct ieee80211vap *VAR_3 = VAR_2->wc_vap;
 uint32_t VAR_4;
 uint8_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0) << 6;
 VAR_4 = VAR_2->wc_iv;
 if ((VAR_4 & 0xff00) == 0xff00) {
  int VAR_6 = (VAR_4 & 0xff0000) >> 16;
  if (3 <= VAR_6 && VAR_6 < 16)
   VAR_4 += 0x0100;
 }
 VAR_2->wc_iv = VAR_4 + 1;






 VAR_1[0] = VAR_4 >> 0;
 VAR_1[1] = VAR_4 >> 8;
 VAR_1[2] = VAR_4 >> 16;





 VAR_1[3] = VAR_5;
}
