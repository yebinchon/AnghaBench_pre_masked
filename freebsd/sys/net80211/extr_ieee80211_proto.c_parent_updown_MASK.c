
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int (* ic_parent ) (struct ieee80211com*) ;} ;


 int FUNC_0 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_0;

 VAR_2->ic_parent(VAR_2);
}
