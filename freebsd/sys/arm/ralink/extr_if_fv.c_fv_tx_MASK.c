
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct fv_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_4__ {int fv_tx_cons; int fv_tx_prod; int fv_tx_ring_map; int fv_tx_ring_tag; int fv_tx_tag; struct fv_txdesc* fv_txdesc; int fv_tx_cnt; } ;
struct TYPE_3__ {struct fv_desc* fv_tx_ring; } ;
struct fv_softc {TYPE_2__ fv_cdata; TYPE_1__ fv_rdata; struct ifnet* fv_ifp; } ;
struct fv_desc {int fv_stat; int fv_devcs; scalar_t__ fv_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct fv_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct fv_softc *VAR_9)
{
 struct fv_txdesc *VAR_10;
 struct fv_desc *VAR_11;
 struct ifnet *VAR_12;
 uint32_t VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;

 FUNC_2(VAR_9);

 VAR_15 = VAR_9->fv_cdata.fv_tx_cons;
 VAR_16 = VAR_9->fv_cdata.fv_tx_prod;
 if (VAR_15 == VAR_16)
  return;

 FUNC_3(VAR_9->fv_cdata.fv_tx_ring_tag,
     VAR_9->fv_cdata.fv_tx_ring_map,
     VAR_2 | VAR_3);

 VAR_12 = VAR_9->fv_ifp;




 VAR_17 = VAR_15;
 for (; VAR_15 != VAR_16; FUNC_1(VAR_15, VAR_5)) {
  VAR_11 = &VAR_9->fv_rdata.fv_tx_ring[VAR_15];
  VAR_13 = VAR_11->fv_stat;
  VAR_14 = VAR_11->fv_devcs;

  if (FUNC_0(VAR_14) == 0)
   break;

  VAR_9->fv_cdata.fv_tx_cnt--;
  VAR_12->if_drv_flags &= ~VAR_8;

  VAR_10 = &VAR_9->fv_cdata.fv_txdesc[VAR_15];

  if ((VAR_13 & VAR_0) == 0)
   FUNC_5(VAR_12, VAR_7, 1);
  else if (VAR_13 & VAR_1) {
   FUNC_5(VAR_12, VAR_6, 1);
  }

  FUNC_3(VAR_9->fv_cdata.fv_tx_tag, VAR_10->tx_dmamap,
      VAR_3);
  FUNC_4(VAR_9->fv_cdata.fv_tx_tag, VAR_10->tx_dmamap);


  if (VAR_10->tx_m)
   FUNC_6(VAR_10->tx_m);
  VAR_10->tx_m = ((void*)0);


  VAR_11->fv_stat = 0;
  VAR_11->fv_devcs = 0;
  VAR_11->fv_addr = 0;
 }

 VAR_9->fv_cdata.fv_tx_cons = VAR_15;

 FUNC_3(VAR_9->fv_cdata.fv_tx_ring_tag,
     VAR_9->fv_cdata.fv_tx_ring_map, VAR_4);
}
