
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ msk_rx_prod; int msk_rx_ring_map; int msk_rx_ring_tag; int msk_jumbo_rx_ring_map; int msk_jumbo_rx_ring_tag; } ;
struct msk_if_softc {int msk_flags; TYPE_2__ msk_cdata; int msk_rxq; int msk_softc; int msk_if_dev; TYPE_1__* msk_ifp; } ;
struct TYPE_3__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct msk_if_softc*,int ) ;
 scalar_t__ FUNC_7 (struct msk_if_softc*,int ) ;

__attribute__((used)) static int
FUNC_8(struct msk_if_softc *VAR_8, int VAR_9)
{
 uint16_t VAR_10;
 int VAR_11;

 if ((VAR_8->msk_flags & VAR_5) == 0 &&
     (VAR_8->msk_ifp->if_capenable & VAR_4) != 0) {

  for (VAR_11 = 100; VAR_11 > 0; VAR_11--) {
   FUNC_2(100);
   VAR_10 = FUNC_0(VAR_8->msk_softc,
       FUNC_3(VAR_8->msk_rxq,
       VAR_6));
   if (VAR_10 != 0)
    break;
  }
  if (VAR_11 == 0) {
   FUNC_5(VAR_8->msk_if_dev,
       "prefetch unit stuck?\n");
   return (VAR_3);
  }





  if (VAR_9 > 0) {
   if (FUNC_6(VAR_8, 0) != 0)
    return (VAR_2);
   FUNC_4(VAR_8->msk_cdata.msk_jumbo_rx_ring_tag,
       VAR_8->msk_cdata.msk_jumbo_rx_ring_map,
       VAR_0 | VAR_1);
  } else {
   if (FUNC_7(VAR_8, 0) != 0)
    return (VAR_2);
   FUNC_4(VAR_8->msk_cdata.msk_rx_ring_tag,
       VAR_8->msk_cdata.msk_rx_ring_map,
       VAR_0 | VAR_1);
  }
  VAR_8->msk_cdata.msk_rx_prod = 0;
  FUNC_1(VAR_8->msk_softc,
      FUNC_3(VAR_8->msk_rxq, VAR_7),
      VAR_8->msk_cdata.msk_rx_prod);
 }
 return (0);
}
