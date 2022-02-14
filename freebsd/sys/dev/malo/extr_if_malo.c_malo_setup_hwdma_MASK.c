
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dd_desc_paddr; } ;
struct malo_txq {TYPE_1__ dma; } ;
struct TYPE_5__ {int maxnum_wcb; int maxnum_txwcb; int * wcbbase; int rxdesc_read; } ;
struct TYPE_6__ {int dd_desc_paddr; } ;
struct malo_softc {TYPE_2__ malo_hwdma; struct malo_txq* malo_txq; TYPE_3__ malo_rxdma; } ;


 int VAR_0 ;
 int FUNC_0 (struct malo_softc*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct malo_softc *VAR_2)
{
 int VAR_3;
 struct malo_txq *VAR_4;

 VAR_2->malo_hwdma.rxdesc_read = VAR_2->malo_rxdma.dd_desc_paddr;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->malo_txq[VAR_3];
  VAR_2->malo_hwdma.wcbbase[VAR_3] = VAR_4->dma.dd_desc_paddr;
 }
 VAR_2->malo_hwdma.maxnum_txwcb = VAR_1;
 VAR_2->malo_hwdma.maxnum_wcb = VAR_0;

 FUNC_0(VAR_2);

 return 0;
}
