
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct tsec_softc {size_t tx_idx_tail; size_t tx_idx_head; scalar_t__ tsec_watchdog; int tsec_tx_dmap; int tsec_tx_dtag; int tsec_tx_mtag; struct tsec_bufmap* tx_bufmap; struct tsec_desc* tsec_tx_vaddr; struct ifnet* tsec_ifp; } ;
struct tsec_desc {int flags; } ;
struct tsec_bufmap {int * mbuf; int map; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tsec_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct tsec_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct tsec_softc*,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_8(struct tsec_softc *VAR_14)
{
 struct ifnet *VAR_15;
 uint32_t VAR_16;

 FUNC_1(VAR_14);

 VAR_15 = VAR_14->tsec_ifp;


 FUNC_5(VAR_15, VAR_4, FUNC_0(VAR_14, VAR_9));


 FUNC_2(VAR_14, VAR_10, 0);
 FUNC_2(VAR_14, VAR_8, 0);
 FUNC_2(VAR_14, VAR_7, 0);
 FUNC_2(VAR_14, VAR_11, 0);
 FUNC_2(VAR_14, VAR_9, 0);

 FUNC_3(VAR_14->tsec_tx_dtag, VAR_14->tsec_tx_dmap,
     VAR_0 | VAR_1);

 VAR_16 = VAR_14->tx_idx_tail;
 while (VAR_16 != VAR_14->tx_idx_head) {
  struct tsec_desc *VAR_17;
  struct tsec_bufmap *VAR_18;

  VAR_17 = &VAR_14->tsec_tx_vaddr[VAR_16];
  if (VAR_17->flags & VAR_12) {
   break;
  }

  VAR_18 = &VAR_14->tx_bufmap[VAR_16];
  VAR_16 = (VAR_16 + 1) & (VAR_13 - 1);
  if (VAR_18->mbuf == ((void*)0))
   continue;




  FUNC_3(VAR_14->tsec_tx_mtag, VAR_18->map,
      VAR_1);
  FUNC_4(VAR_14->tsec_tx_mtag, VAR_18->map);
  FUNC_6(VAR_18->mbuf);
  VAR_18->mbuf = ((void*)0);

  FUNC_5(VAR_15, VAR_5, 1);
 }
 VAR_14->tx_idx_tail = VAR_16;
 FUNC_3(VAR_14->tsec_tx_dtag, VAR_14->tsec_tx_dmap,
     VAR_2 | VAR_3);

 VAR_15->if_drv_flags &= ~VAR_6;
 FUNC_7(VAR_15);

 if (VAR_14->tx_idx_tail == VAR_14->tx_idx_head)
  VAR_14->tsec_watchdog = 0;
}
