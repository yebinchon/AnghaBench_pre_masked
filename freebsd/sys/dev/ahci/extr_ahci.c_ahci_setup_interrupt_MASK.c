
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahci_controller {int numirqs; int channels; int cccv; int quirks; TYPE_1__* irqs; scalar_t__ ccc; scalar_t__ msi; int r_mem; } ;
typedef int device_t ;
struct TYPE_2__ {int r_irq_rid; scalar_t__ mode; int handle; int r_irq; struct ahci_controller* ctlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,TYPE_1__*,int *) ;
 struct ahci_controller* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;

int
FUNC_6(device_t VAR_15)
{
 struct ahci_controller *VAR_16 = FUNC_4(VAR_15);
 int VAR_17;


 if (VAR_16->numirqs > 1 &&
     (FUNC_0(VAR_16->r_mem, VAR_0) & VAR_1) != 0) {
  FUNC_5(VAR_15, "Falling back to one MSI\n");
  VAR_16->numirqs = 1;
 }


 if (VAR_16->numirqs > VAR_5) {
  FUNC_5(VAR_15, "Too many irqs %d > %d (clamping)\n",
      VAR_16->numirqs, VAR_5);
  VAR_16->numirqs = VAR_5;
 }


 for (VAR_17 = 0; VAR_17 < VAR_16->numirqs; VAR_17++) {
  VAR_16->irqs[VAR_17].ctlr = VAR_16;
  VAR_16->irqs[VAR_17].r_irq_rid = VAR_17 + (VAR_16->msi ? 1 : 0);
  if (VAR_16->channels == 1 && !VAR_16->ccc && VAR_16->msi)
   VAR_16->irqs[VAR_17].mode = VAR_4;
  else if (VAR_16->numirqs == 1 || VAR_17 >= VAR_16->channels ||
      (VAR_16->ccc && VAR_17 == VAR_16->cccv))
   VAR_16->irqs[VAR_17].mode = VAR_3;
  else if (VAR_16->channels > VAR_16->numirqs &&
      VAR_17 == VAR_16->numirqs - 1)
   VAR_16->irqs[VAR_17].mode = VAR_2;
  else
   VAR_16->irqs[VAR_17].mode = VAR_4;
  if (!(VAR_16->irqs[VAR_17].r_irq = FUNC_1(VAR_15, VAR_11,
      &VAR_16->irqs[VAR_17].r_irq_rid, VAR_10 | VAR_9))) {
   FUNC_5(VAR_15, "unable to map interrupt\n");
   return (VAR_8);
  }
  if ((FUNC_3(VAR_15, VAR_16->irqs[VAR_17].r_irq, VAR_7, ((void*)0),
      (VAR_16->irqs[VAR_17].mode != VAR_4) ? VAR_12 :
       ((VAR_16->quirks & VAR_6) ? VAR_14 :
        VAR_13),
      &VAR_16->irqs[VAR_17], &VAR_16->irqs[VAR_17].handle))) {

   FUNC_5(VAR_15, "unable to setup interrupt\n");
   return (VAR_8);
  }
  if (VAR_16->numirqs > 1) {
   FUNC_2(VAR_15, VAR_16->irqs[VAR_17].r_irq,
       VAR_16->irqs[VAR_17].handle,
       VAR_16->irqs[VAR_17].mode == VAR_4 ?
       "ch%d" : "%d", VAR_17);
  }
 }
 return (0);
}
