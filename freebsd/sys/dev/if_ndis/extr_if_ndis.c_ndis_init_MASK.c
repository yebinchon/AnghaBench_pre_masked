
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {scalar_t__ ic_promisc; } ;
struct ndis_softc {scalar_t__ ndis_iftype; int ndis_filter; int ndis_hang_timer; int ndis_running; struct ieee80211com ndis_ic; scalar_t__ ndis_80211; int ndis_stat_callout; TYPE_1__* ndis_block; scalar_t__ ndis_tx_timer; struct ifnet* ifp; scalar_t__ ndis_link; int ndis_maxpkts; int ndis_txpending; scalar_t__ ndis_txidx; int ndis_dev; } ;
struct ifnet {int if_flags; int if_mtu; int if_drv_flags; } ;
typedef int i ;
struct TYPE_2__ {int nmb_checkforhangsecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ndis_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ndis_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *,int ,int ,struct ndis_softc*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_11 ;
 int FUNC_4 (struct ieee80211com*) ;
 int FUNC_5 (struct ifnet*,int ) ;
 int FUNC_6 (struct ndis_softc*) ;
 int FUNC_7 (struct ndis_softc*,int ,int*,int*) ;
 int FUNC_8 (struct ndis_softc*) ;
 int FUNC_9 (struct ndis_softc*) ;
 int FUNC_10 (struct ndis_softc*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void
FUNC_11(void *VAR_14)
{
 struct ndis_softc *VAR_15 = VAR_14;
 int VAR_16, VAR_17, VAR_18;







 if (VAR_15->ndis_link)
  return;




 FUNC_10(VAR_15);

 if (!(VAR_15->ndis_iftype == VAR_10 && VAR_13 == 0)) {
  VAR_18 = FUNC_6(VAR_15);
  if (VAR_18 != 0) {
   FUNC_3(VAR_15->ndis_dev,
       "failed to initialize the device: %d\n", VAR_18);
   return;
  }
 }


 VAR_15->ndis_filter = VAR_6 |
     VAR_5;

 if (VAR_15->ndis_80211) {
  struct ieee80211com *VAR_19 = &VAR_15->ndis_ic;

  if (VAR_19->ic_promisc > 0)
   VAR_15->ndis_filter |= VAR_7;
 } else {
  struct ifnet *VAR_20 = VAR_15->ifp;

  if (VAR_20->if_flags & VAR_3)
   VAR_15->ndis_filter |= VAR_7;
 }

 VAR_17 = sizeof(VAR_15->ndis_filter);

 VAR_18 = FUNC_7(VAR_15, VAR_9,
     &VAR_15->ndis_filter, &VAR_17);

 if (VAR_18)
  FUNC_3(VAR_15->ndis_dev, "set filter failed: %d\n", VAR_18);




 if (VAR_15->ndis_80211)
  VAR_16 = VAR_0;
 else
  VAR_16 = VAR_15->ifp->if_mtu;
 VAR_17 = sizeof(VAR_16);
 FUNC_7(VAR_15, VAR_8, &VAR_16, &VAR_17);




 FUNC_9(VAR_15);


 FUNC_8(VAR_15);

 FUNC_0(VAR_15);

 VAR_15->ndis_txidx = 0;
 VAR_15->ndis_txpending = VAR_15->ndis_maxpkts;
 VAR_15->ndis_link = 0;

 if (!VAR_15->ndis_80211) {
  FUNC_5(VAR_15->ifp, VAR_4);
  VAR_15->ifp->if_drv_flags |= VAR_2;
  VAR_15->ifp->if_drv_flags &= ~VAR_1;
 }

 VAR_15->ndis_tx_timer = 0;







 if (VAR_15->ndis_block->nmb_checkforhangsecs == 0)
  VAR_15->ndis_block->nmb_checkforhangsecs = 3;

 VAR_15->ndis_hang_timer = VAR_15->ndis_block->nmb_checkforhangsecs;
 FUNC_2(&VAR_15->ndis_stat_callout, VAR_11, VAR_12, VAR_15);
 VAR_15->ndis_running = 1;
 FUNC_1(VAR_15);


 if (VAR_15->ndis_80211)
  FUNC_4(&VAR_15->ndis_ic);
}
