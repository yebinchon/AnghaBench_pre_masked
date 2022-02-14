
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_psq {int psq_maxlen; } ;


 int FUNC_0 (struct ieee80211_psq*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_psq*,int ,int) ;

void
FUNC_2(struct ieee80211_psq *VAR_1, const char *VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->psq_maxlen = VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
