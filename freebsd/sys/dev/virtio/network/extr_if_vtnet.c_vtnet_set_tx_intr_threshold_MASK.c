
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtnet_softc {int vtnet_flags; int vtnet_tx_nsegs; int vtnet_tx_intr_thresh; TYPE_1__* vtnet_txqs; } ;
struct TYPE_2__ {int vtntx_vq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct vtnet_softc *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->vtnet_txqs[0].vtntx_vq);
 VAR_3 = VAR_2 / 4;





 if ((VAR_1->vtnet_flags & VAR_0) == 0 &&
     VAR_3 < VAR_1->vtnet_tx_nsegs)
  VAR_3 = VAR_1->vtnet_tx_nsegs;

 VAR_1->vtnet_tx_intr_thresh = VAR_3;
}
