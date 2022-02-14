
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int txdesc ;
struct ti_txdesc {int * tx_m; int tx_dmamap; } ;
struct ti_tx_desc {int ti_flags; } ;
struct TYPE_6__ {int ti_txbusyq; int ti_txfreeq; int ti_tx_tag; int ti_tx_ring_map; int ti_tx_ring_tag; } ;
struct TYPE_5__ {struct ti_tx_desc* ti_tx_ring; } ;
struct TYPE_4__ {int ti_idx; } ;
struct ti_softc {int ti_tx_saved_considx; scalar_t__ ti_hwrev; scalar_t__ ti_txcnt; scalar_t__ ti_timer; TYPE_3__ ti_cdata; TYPE_2__ ti_rdata; TYPE_1__ ti_tx_considx; struct ifnet* ti_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ti_txdesc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ti_txdesc*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ti_softc*,scalar_t__,int,struct ti_tx_desc*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_9(struct ti_softc *VAR_8)
{
 struct ti_txdesc *VAR_9;
 struct ti_tx_desc VAR_10;
 struct ti_tx_desc *VAR_11 = ((void*)0);
 struct ifnet *VAR_12;
 int VAR_13;

 VAR_12 = VAR_8->ti_ifp;

 VAR_9 = FUNC_0(&VAR_8->ti_cdata.ti_txbusyq);
 if (VAR_9 == ((void*)0))
  return;

 if (VAR_8->ti_rdata.ti_tx_ring != ((void*)0))
  FUNC_4(VAR_8->ti_cdata.ti_tx_ring_tag,
      VAR_8->ti_cdata.ti_tx_ring_map, VAR_0);




 for (VAR_13 = VAR_8->ti_tx_saved_considx; VAR_13 != VAR_8->ti_tx_considx.ti_idx;
     FUNC_3(VAR_13, VAR_6)) {
  if (VAR_8->ti_hwrev == VAR_4) {
   FUNC_8(VAR_8, VAR_5 + VAR_13 * sizeof(VAR_10),
       sizeof(VAR_10), &VAR_10);
   VAR_11 = &VAR_10;
  } else
   VAR_11 = &VAR_8->ti_rdata.ti_tx_ring[VAR_13];
  VAR_8->ti_txcnt--;
  VAR_12->if_drv_flags &= ~VAR_2;
  if ((VAR_11->ti_flags & VAR_3) == 0)
   continue;
  FUNC_4(VAR_8->ti_cdata.ti_tx_tag, VAR_9->tx_dmamap,
      VAR_0);
  FUNC_5(VAR_8->ti_cdata.ti_tx_tag, VAR_9->tx_dmamap);

  FUNC_6(VAR_12, VAR_1, 1);
  FUNC_7(VAR_9->tx_m);
  VAR_9->tx_m = ((void*)0);
  FUNC_2(&VAR_8->ti_cdata.ti_txbusyq, VAR_7);
  FUNC_1(&VAR_8->ti_cdata.ti_txfreeq, VAR_9, VAR_7);
  VAR_9 = FUNC_0(&VAR_8->ti_cdata.ti_txbusyq);
 }
 VAR_8->ti_tx_saved_considx = VAR_13;
 if (VAR_8->ti_txcnt == 0)
  VAR_8->ti_timer = 0;
}
