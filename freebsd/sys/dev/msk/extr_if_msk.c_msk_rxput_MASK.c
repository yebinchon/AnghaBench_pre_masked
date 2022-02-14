
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msk_softc {int dummy; } ;
struct TYPE_2__ {int msk_rx_prod; int msk_rx_ring_map; int msk_rx_ring_tag; int msk_jumbo_rx_ring_map; int msk_jumbo_rx_ring_tag; } ;
struct msk_if_softc {scalar_t__ msk_framesize; TYPE_1__ msk_cdata; int msk_rxq; struct msk_softc* msk_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msk_softc*,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static __inline void
FUNC_3(struct msk_if_softc *VAR_5)
{
 struct msk_softc *VAR_6;

 VAR_6 = VAR_5->msk_softc;
 if (VAR_5->msk_framesize > (VAR_2 - VAR_3))
  FUNC_2(
      VAR_5->msk_cdata.msk_jumbo_rx_ring_tag,
      VAR_5->msk_cdata.msk_jumbo_rx_ring_map,
      VAR_0 | VAR_1);
 else
  FUNC_2(
      VAR_5->msk_cdata.msk_rx_ring_tag,
      VAR_5->msk_cdata.msk_rx_ring_map,
      VAR_0 | VAR_1);
 FUNC_0(VAR_6, FUNC_1(VAR_5->msk_rxq,
     VAR_4), VAR_5->msk_cdata.msk_rx_prod);
}
