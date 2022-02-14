
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtwn_vap {int id; } ;
struct rtwn_tx_ring {struct rtwn_tx_data* tx_data; } ;
struct rtwn_tx_data {TYPE_1__* ni; } ;
struct rtwn_softc {int dummy; } ;
struct rtwn_pci_softc {struct rtwn_tx_ring* tx_ring; } ;
struct ieee80211vap {scalar_t__ iv_opmode; } ;
struct TYPE_2__ {struct ieee80211vap* ni_vap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtwn_vap* FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct rtwn_softc*,int) ;
 int FUNC_4 (struct rtwn_softc*,int) ;

__attribute__((used)) static void
FUNC_5(struct rtwn_softc *VAR_5, struct ieee80211vap *VAR_6,
    int VAR_7)
{
 int VAR_8;

 if (VAR_6 == ((void*)0)) {
  if (VAR_7 != VAR_2) {



   FUNC_4(VAR_5, VAR_7);
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    FUNC_3(VAR_5, VAR_8);
  }
 } else if (VAR_7 == VAR_2 &&
     (VAR_6->iv_opmode == VAR_0 ||
      VAR_6->iv_opmode == VAR_1)) {
  struct rtwn_vap *VAR_9 = FUNC_1(VAR_6);

  FUNC_3(VAR_5, VAR_9->id);
 } else {
  struct rtwn_pci_softc *VAR_10 = FUNC_0(VAR_5);
  struct rtwn_tx_ring *VAR_11 = &VAR_10->tx_ring[VAR_7];

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   struct rtwn_tx_data *VAR_12 = &VAR_11->tx_data[VAR_8];
   if (VAR_12->ni != ((void*)0) && VAR_12->ni->ni_vap == VAR_6) {






    FUNC_2(VAR_12->ni);
    VAR_12->ni = ((void*)0);
   }
  }
 }
}
