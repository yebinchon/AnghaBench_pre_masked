
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_chw_task; int ic_curchan; } ;


 int FUNC_0 (struct ieee80211com*,int *) ;
 int FUNC_1 (struct ieee80211com*,int ) ;

void
FUNC_2(struct ieee80211com *VAR_0)
{

 FUNC_1(VAR_0, VAR_0->ic_curchan);
 FUNC_0(VAR_0, &VAR_0->ic_chw_task);
}
