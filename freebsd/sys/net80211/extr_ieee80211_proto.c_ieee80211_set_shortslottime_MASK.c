
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int (* ic_updateslot ) (struct ieee80211com*) ;int ic_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;

void
FUNC_1(struct ieee80211com *VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_1->ic_flags |= VAR_0;
 else
  VAR_1->ic_flags &= ~VAR_0;

 if (VAR_1->ic_updateslot != ((void*)0))
  VAR_1->ic_updateslot(VAR_1);
}
