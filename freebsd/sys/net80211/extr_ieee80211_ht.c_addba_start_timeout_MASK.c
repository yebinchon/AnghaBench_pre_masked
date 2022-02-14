
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {scalar_t__ txa_nextrequest; int txa_flags; int txa_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,struct ieee80211_tx_ampdu*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_tx_ampdu *VAR_4)
{

 FUNC_0(&VAR_4->txa_timer, VAR_2,
     VAR_1, VAR_4);
 VAR_4->txa_flags |= VAR_0;
 VAR_4->txa_nextrequest = VAR_3 + VAR_2;
}
