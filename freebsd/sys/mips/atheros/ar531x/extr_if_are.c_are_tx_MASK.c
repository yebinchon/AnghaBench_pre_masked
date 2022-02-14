
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct are_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_4__ {int are_tx_cons; int are_tx_prod; int are_tx_ring_map; int are_tx_ring_tag; int are_tx_tag; struct are_txdesc* are_txdesc; int are_tx_cnt; } ;
struct TYPE_3__ {struct are_desc* are_tx_ring; } ;
struct are_softc {TYPE_2__ are_cdata; TYPE_1__ are_rdata; struct ifnet* are_ifp; } ;
struct are_desc {int are_stat; int are_devcs; scalar_t__ are_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct are_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct are_softc *VAR_8)
{
 struct are_txdesc *VAR_9;
 struct are_desc *VAR_10;
 struct ifnet *VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_2(VAR_8);

 VAR_14 = VAR_8->are_cdata.are_tx_cons;
 VAR_15 = VAR_8->are_cdata.are_tx_prod;
 if (VAR_14 == VAR_15)
  return;

 FUNC_3(VAR_8->are_cdata.are_tx_ring_tag,
     VAR_8->are_cdata.are_tx_ring_map,
     VAR_2 | VAR_3);

 VAR_11 = VAR_8->are_ifp;




 for (; VAR_14 != VAR_15; FUNC_1(VAR_14, VAR_1)) {
  VAR_10 = &VAR_8->are_rdata.are_tx_ring[VAR_14];
  VAR_12 = VAR_10->are_stat;
  VAR_13 = VAR_10->are_devcs;

  if (FUNC_0(VAR_13) == 0)
   break;

  VAR_8->are_cdata.are_tx_cnt--;
  VAR_11->if_drv_flags &= ~VAR_7;

  VAR_9 = &VAR_8->are_cdata.are_txdesc[VAR_14];

  if ((VAR_12 & VAR_0) == 0)
   FUNC_5(VAR_11, VAR_6, 1);
  else {
   FUNC_5(VAR_11, VAR_5, 1);
  }

  FUNC_3(VAR_8->are_cdata.are_tx_tag, VAR_9->tx_dmamap,
      VAR_3);
  FUNC_4(VAR_8->are_cdata.are_tx_tag, VAR_9->tx_dmamap);


  if (VAR_9->tx_m)
   FUNC_6(VAR_9->tx_m);
  VAR_9->tx_m = ((void*)0);


  VAR_10->are_stat = 0;
  VAR_10->are_devcs = 0;
  VAR_10->are_addr = 0;
 }

 VAR_8->are_cdata.are_tx_cons = VAR_14;

 FUNC_3(VAR_8->are_cdata.are_tx_ring_tag,
     VAR_8->are_cdata.are_tx_ring_map, VAR_4);
}
