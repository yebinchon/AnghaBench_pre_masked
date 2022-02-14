
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* if_softc_ctx_t ;
struct TYPE_5__ {TYPE_1__* isc_txrx; } ;
struct TYPE_4__ {int ift_rxd_flush; int ift_rxd_refill; int ift_rxd_pkt_get; int ift_rxd_available; int ift_txd_credits_update; int ift_txd_flush; int ift_txd_encap; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(if_softc_ctx_t VAR_0)
{

 FUNC_0(VAR_0->isc_txrx->ift_txd_encap);
 FUNC_0(VAR_0->isc_txrx->ift_txd_flush);
 FUNC_0(VAR_0->isc_txrx->ift_txd_credits_update);
 FUNC_0(VAR_0->isc_txrx->ift_rxd_available);
 FUNC_0(VAR_0->isc_txrx->ift_rxd_pkt_get);
 FUNC_0(VAR_0->isc_txrx->ift_rxd_refill);
 FUNC_0(VAR_0->isc_txrx->ift_rxd_flush);
}
