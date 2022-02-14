
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ageq {scalar_t__ aq_len; } ;


 int FUNC_0 (struct ieee80211_ageq*) ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(struct ieee80211_ageq *VAR_0)
{
 FUNC_1(VAR_0->aq_len == 0, ("%d frames on ageq", VAR_0->aq_len));
 FUNC_0(VAR_0);
}
