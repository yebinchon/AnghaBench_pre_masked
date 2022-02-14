
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_lastsample; int txa_flags; int txa_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_tx_ampdu *VAR_2)
{
 FUNC_0(&VAR_2->txa_timer, 1);
 VAR_2->txa_flags |= VAR_0;
 VAR_2->txa_lastsample = VAR_1;
}
