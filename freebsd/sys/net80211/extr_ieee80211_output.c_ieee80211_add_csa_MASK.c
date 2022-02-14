
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {scalar_t__ iv_csa_count; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_csa_count; int ic_csa_newchan; } ;
struct ieee80211_csa_ie {int csa_len; int csa_mode; scalar_t__ csa_count; int csa_newchan; int csa_ie; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*,int ) ;

__attribute__((used)) static uint8_t *
FUNC_1(uint8_t *VAR_1, struct ieee80211vap *VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;
 struct ieee80211_csa_ie *VAR_4 = (struct ieee80211_csa_ie *) VAR_1;

 VAR_4->csa_ie = VAR_0;
 VAR_4->csa_len = 3;
 VAR_4->csa_mode = 1;
 VAR_4->csa_newchan = FUNC_0(VAR_3, VAR_3->ic_csa_newchan);
 VAR_4->csa_count = VAR_3->ic_csa_count - VAR_2->iv_csa_count;
 return VAR_1 + sizeof(*VAR_4);
}
