
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ageq {int aq_maxlen; } ;


 int FUNC_0 (struct ieee80211_ageq*,char const*) ;
 int FUNC_1 (struct ieee80211_ageq*,int ,int) ;

void
FUNC_2(struct ieee80211_ageq *VAR_0, int VAR_1, const char *VAR_2)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->aq_maxlen = VAR_1;
 FUNC_0(VAR_0, VAR_2);
}
