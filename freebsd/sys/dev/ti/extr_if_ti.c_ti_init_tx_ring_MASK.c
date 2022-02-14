
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_txdesc {int dummy; } ;
struct TYPE_2__ {int ti_txfreeq; struct ti_txdesc* ti_txdesc; int ti_txbusyq; } ;
struct ti_softc {scalar_t__ ti_tx_saved_prodidx; scalar_t__ ti_tx_saved_considx; scalar_t__ ti_txcnt; TYPE_1__ ti_cdata; } ;


 int FUNC_0 (struct ti_softc*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ti_txdesc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct ti_softc *VAR_3)
{
 struct ti_txdesc *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->ti_cdata.ti_txfreeq);
 FUNC_1(&VAR_3->ti_cdata.ti_txbusyq);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->ti_cdata.ti_txdesc[VAR_5];
  FUNC_2(&VAR_3->ti_cdata.ti_txfreeq, VAR_4, VAR_2);
 }
 VAR_3->ti_txcnt = 0;
 VAR_3->ti_tx_saved_considx = 0;
 VAR_3->ti_tx_saved_prodidx = 0;
 FUNC_0(VAR_3, VAR_0, 0);
 return (0);
}
