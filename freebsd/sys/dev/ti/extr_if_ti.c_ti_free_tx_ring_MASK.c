
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_4__ {int ti_tx_ring_map; int ti_tx_ring_tag; int ti_tx_tag; struct ti_txdesc* ti_txdesc; } ;
struct TYPE_3__ {int * ti_tx_ring; } ;
struct ti_softc {TYPE_2__ ti_cdata; TYPE_1__ ti_rdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ti_softc *VAR_4)
{
 struct ti_txdesc *VAR_5;
 int VAR_6;

 if (VAR_4->ti_rdata.ti_tx_ring == ((void*)0))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = &VAR_4->ti_cdata.ti_txdesc[VAR_6];
  if (VAR_5->tx_m != ((void*)0)) {
   FUNC_0(VAR_4->ti_cdata.ti_tx_tag, VAR_5->tx_dmamap,
       VAR_0);
   FUNC_1(VAR_4->ti_cdata.ti_tx_tag,
       VAR_5->tx_dmamap);
   FUNC_3(VAR_5->tx_m);
   VAR_5->tx_m = ((void*)0);
  }
 }
 FUNC_2(VAR_4->ti_rdata.ti_tx_ring, VAR_3);
 FUNC_0(VAR_4->ti_cdata.ti_tx_ring_tag,
     VAR_4->ti_cdata.ti_tx_ring_map, VAR_1);
}
