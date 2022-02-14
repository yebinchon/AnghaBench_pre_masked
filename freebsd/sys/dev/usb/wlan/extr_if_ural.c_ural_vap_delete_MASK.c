
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_vap {int ratectl_task; int ratectl_ch; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int dummy; } ;


 int VAR_0 ;
 struct ural_vap* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct ural_vap*,int ) ;
 int FUNC_2 (struct ieee80211com*,int *) ;
 int FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211vap *VAR_1)
{
 struct ural_vap *VAR_2 = FUNC_0(VAR_1);
 struct ieee80211com *VAR_3 = VAR_1->iv_ic;

 FUNC_5(&VAR_2->ratectl_ch);
 FUNC_2(VAR_3, &VAR_2->ratectl_task);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_1(VAR_2, VAR_0);
}
