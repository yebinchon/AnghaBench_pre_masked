
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rbd_idx; } ;
struct bwi_ring_data {int rdata_paddr; int rdata_txrx_ctrl; int rdata_dmap; } ;
struct bwi_softc {int sc_rxring_dtag; int sc_dev; TYPE_1__ sc_rx_bdata; struct bwi_ring_data sc_rx_rdata; } ;
struct bwi_rxbuf_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ,int,int) ;
 int FUNC_2 (struct bwi_softc*,int,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct bwi_softc *VAR_2)
{
 struct bwi_ring_data *VAR_3 = &VAR_2->sc_rx_rdata;
 int VAR_4, VAR_5;

 VAR_2->sc_rx_bdata.rbd_idx = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  VAR_5 = FUNC_2(VAR_2, VAR_4, 1);
  if (VAR_5) {
   FUNC_3(VAR_2->sc_dev,
      "can't allocate %dth RX buffer\n", VAR_4);
   return VAR_5;
  }
 }
 FUNC_0(VAR_2->sc_rxring_dtag, VAR_3->rdata_dmap,
   VAR_0);

 FUNC_1(VAR_2, VAR_3->rdata_txrx_ctrl, VAR_3->rdata_paddr,
          sizeof(struct bwi_rxbuf_hdr), VAR_1);
 return 0;
}
