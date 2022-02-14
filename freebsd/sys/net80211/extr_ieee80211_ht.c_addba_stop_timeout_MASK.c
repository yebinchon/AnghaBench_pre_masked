
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_flags; int txa_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_tx_ampdu *VAR_1)
{

 if (VAR_1->txa_flags & VAR_0) {
  FUNC_0(&VAR_1->txa_timer);
  VAR_1->txa_flags &= ~VAR_0;
 }
}
