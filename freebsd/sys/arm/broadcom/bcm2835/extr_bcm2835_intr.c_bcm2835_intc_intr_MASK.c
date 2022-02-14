
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcm_intc_softc {int sc_dev; TYPE_2__* intc_isrcs; } ;
struct TYPE_4__ {int bii_isrc; } ;
struct TYPE_3__ {int td_intr_frame; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcm_intc_softc*) ;
 int FUNC_2 (struct bcm_intc_softc*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3)
{
 int VAR_4, VAR_5;
 struct bcm_intc_softc *VAR_6 = VAR_3;

 for (VAR_5 = 0; ; VAR_5++) {
  VAR_4 = FUNC_1(VAR_6);
  if (VAR_4 == -1)
   break;
  if (FUNC_4(&VAR_6->intc_isrcs[VAR_4].bii_isrc,
      VAR_2->td_intr_frame) != 0) {
   FUNC_2(VAR_6, &VAR_6->intc_isrcs[VAR_4]);
   FUNC_3(VAR_6->sc_dev, "Stray irq %u disabled\n",
       VAR_4);
  }
  FUNC_0(0);
 }
 if (VAR_5 == 0 && VAR_1)
  FUNC_3(VAR_6->sc_dev, "Spurious interrupt detected\n");

 return (VAR_0);
}
