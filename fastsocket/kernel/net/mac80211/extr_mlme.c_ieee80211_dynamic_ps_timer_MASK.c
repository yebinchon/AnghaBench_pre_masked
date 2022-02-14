
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int dynamic_ps_enable_work; int hw; scalar_t__ suspended; scalar_t__ quiescing; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(unsigned long VAR_0)
{
 struct ieee80211_local *VAR_1 = (void *) VAR_0;

 if (VAR_1->quiescing || VAR_1->suspended)
  return;

 FUNC_0(&VAR_1->hw, &VAR_1->dynamic_ps_enable_work);
}
