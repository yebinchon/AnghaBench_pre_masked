
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int dummy; } ;
struct otus_node {scalar_t__ tx_retries; scalar_t__ tx_err; scalar_t__ tx_done; } ;
struct ieee80211com {struct otus_softc* ic_softc; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211com* ni_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct otus_softc*,int ,char*,int,int ) ;
 struct otus_node* FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct ieee80211_node *VAR_1, int VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_1->ni_ic;
 struct otus_softc *VAR_4 = VAR_3->ic_softc;
 struct otus_node *VAR_5 = FUNC_1(VAR_1);

 FUNC_0(VAR_4, VAR_0, "new assoc isnew=%d addr=%s\n",
     VAR_2, FUNC_2(VAR_1->ni_macaddr));

 VAR_5->tx_done = 0;
 VAR_5->tx_err = 0;
 VAR_5->tx_retries = 0;
}
