
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msk_rxdesc {TYPE_3__* rx_le; int * rx_m; } ;
struct msk_rx_desc {int dummy; } ;
struct msk_ring_data {TYPE_3__* msk_rx_ring; } ;
struct TYPE_5__ {int msk_rx_cons; int msk_rx_prod; int msk_rx_ring_map; int msk_rx_ring_tag; struct msk_rxdesc* msk_rxdesc; int msk_rx_putwm; } ;
struct msk_if_softc {int msk_flags; TYPE_2__ msk_cdata; int msk_rxq; int msk_softc; TYPE_1__* msk_ifp; struct msk_ring_data msk_rdata; } ;
struct TYPE_6__ {void* msk_control; void* msk_addr; } ;
struct TYPE_4__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct msk_if_softc*) ;
 int FUNC_2 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct msk_if_softc*,int) ;
 scalar_t__ FUNC_9 (struct msk_if_softc*,int ) ;

__attribute__((used)) static int
FUNC_10(struct msk_if_softc *VAR_12)
{
 struct msk_ring_data *VAR_13;
 struct msk_rxdesc *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 FUNC_1(VAR_12);

 VAR_12->msk_cdata.msk_rx_cons = 0;
 VAR_12->msk_cdata.msk_rx_prod = 0;
 VAR_12->msk_cdata.msk_rx_putwm = VAR_7;

 VAR_13 = &VAR_12->msk_rdata;
 FUNC_6(VAR_13->msk_rx_ring, sizeof(struct msk_rx_desc) * VAR_9);
 for (VAR_15 = VAR_17 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_14 = &VAR_12->msk_cdata.msk_rxdesc[VAR_17];
  VAR_14->rx_m = ((void*)0);
  VAR_14->rx_le = &VAR_13->msk_rx_ring[VAR_17];
  FUNC_2(VAR_17, VAR_9);
 }
 VAR_16 = VAR_8;
 VAR_17 = 0;

 if ((VAR_12->msk_flags & VAR_6) == 0 &&
     (VAR_12->msk_ifp->if_capenable & VAR_5) != 0) {
  VAR_14 = &VAR_12->msk_cdata.msk_rxdesc[VAR_17];
  VAR_14->rx_m = ((void*)0);
  VAR_14->rx_le = &VAR_13->msk_rx_ring[VAR_17];
  VAR_14->rx_le->msk_addr = FUNC_7(VAR_3 << 16 |
      VAR_3);
  VAR_14->rx_le->msk_control = FUNC_7(VAR_10 | VAR_4);
  FUNC_2(VAR_17, VAR_9);
  FUNC_2(VAR_12->msk_cdata.msk_rx_cons, VAR_9);
  VAR_16--;
 }
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  if (FUNC_8(VAR_12, VAR_17) != 0)
   return (VAR_2);
  FUNC_3(VAR_17, VAR_9);
 }

 FUNC_5(VAR_12->msk_cdata.msk_rx_ring_tag,
     VAR_12->msk_cdata.msk_rx_ring_map,
     VAR_0 | VAR_1);


 VAR_12->msk_cdata.msk_rx_prod = VAR_17;
 FUNC_0(VAR_12->msk_softc,
     FUNC_4(VAR_12->msk_rxq, VAR_11),
     (VAR_12->msk_cdata.msk_rx_prod + VAR_9 - 1) %
     VAR_9);
 if (FUNC_9(VAR_12, 0) != 0)
  return (VAR_2);
 return (0);
}
