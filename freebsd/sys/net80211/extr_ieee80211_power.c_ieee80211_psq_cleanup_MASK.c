
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_psq {scalar_t__ psq_len; } ;


 int FUNC_0 (struct ieee80211_psq*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ieee80211_psq*) ;

void
FUNC_3(struct ieee80211_psq *VAR_0)
{



 FUNC_1(VAR_0->psq_len == 0, ("%d frames on ps q", VAR_0->psq_len));

 FUNC_0(VAR_0);
}
