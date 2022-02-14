
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_6__ {scalar_t__ flags; scalar_t__ len; } ;
typedef TYPE_1__ ae_txs_t ;
struct TYPE_7__ {scalar_t__ len; } ;
typedef TYPE_2__ ae_txd_t ;
struct TYPE_8__ {int txs_ack; int flags; int txd_ack; scalar_t__ tx_inproc; int dma_txs_map; int dma_txs_tag; int dma_txd_map; int dma_txd_tag; scalar_t__ wd_timer; int dev; scalar_t__ txd_base; int stats; TYPE_1__* txs_base; struct ifnet* ifp; } ;
typedef TYPE_3__ ae_softc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct ifnet*,char*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(ae_softc_t *VAR_12)
{
 struct ifnet *VAR_13;
 ae_txd_t *VAR_14;
 ae_txs_t *VAR_15;
 uint16_t VAR_16;

 FUNC_0(VAR_12);

 VAR_13 = VAR_12->ifp;
 FUNC_2(VAR_12->dma_txd_tag, VAR_12->dma_txd_map,
     VAR_5 | VAR_6);
 FUNC_2(VAR_12->dma_txs_tag, VAR_12->dma_txs_map,
     VAR_5 | VAR_6);

 for (;;) {
  VAR_15 = VAR_12->txs_base + VAR_12->txs_ack;
  VAR_16 = FUNC_7(VAR_15->flags);
  if ((VAR_16 & VAR_4) == 0)
   break;
  VAR_15->flags = FUNC_4(VAR_16 & ~VAR_4);

  FUNC_1(VAR_16, &VAR_12->stats);




  VAR_12->txs_ack = (VAR_12->txs_ack + 1) % VAR_2;
  VAR_12->flags |= VAR_0;

  VAR_14 = (ae_txd_t *)(VAR_12->txd_base + VAR_12->txd_ack);
  if (VAR_15->len != VAR_14->len)
   FUNC_3(VAR_12->dev, "Size mismatch: TxS:%d TxD:%d\n",
       FUNC_7(VAR_15->len), FUNC_7(VAR_14->len));




  VAR_12->txd_ack = ((VAR_12->txd_ack + FUNC_7(VAR_14->len) +
      sizeof(ae_txs_t) + 3) & ~3) % VAR_1;

  if ((VAR_16 & VAR_3) != 0)
   FUNC_5(VAR_13, VAR_10, 1);
  else
   FUNC_5(VAR_13, VAR_9, 1);

  VAR_12->tx_inproc--;
 }

 if ((VAR_12->flags & VAR_0) != 0)
  VAR_13->if_drv_flags &= ~VAR_11;
 if (VAR_12->tx_inproc < 0) {
  FUNC_6(VAR_13, "Received stray Tx interrupt(s).\n");
  VAR_12->tx_inproc = 0;
 }

 if (VAR_12->tx_inproc == 0)
  VAR_12->wd_timer = 0;




 FUNC_2(VAR_12->dma_txd_tag, VAR_12->dma_txd_map,
     VAR_7 | VAR_8);
 FUNC_2(VAR_12->dma_txs_tag, VAR_12->dma_txs_map,
     VAR_7 | VAR_8);
}
