
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ahci_controller_irq {scalar_t__ mode; int r_irq_rid; struct ahci_controller* ctlr; } ;
struct ahci_controller {int ichannels; int cccv; int quirks; int channels; int remapped_devices; int r_mem; TYPE_1__* interrupt; scalar_t__ ccc; } ;
struct TYPE_2__ {int (* function ) (void*) ;void* argument; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct ahci_controller_irq *VAR_4 = VAR_3;
 struct ahci_controller *VAR_5 = VAR_4->ctlr;
 u_int32_t VAR_6, VAR_7 = 0;
 void *VAR_8;
 int VAR_9;

 if (VAR_4->mode == VAR_0) {
  VAR_9 = 0;
  if (VAR_5->ccc)
   VAR_6 = VAR_5->ichannels;
  else
   VAR_6 = FUNC_0(VAR_5->r_mem, VAR_1);
 } else {
  VAR_9 = VAR_4->r_irq_rid - 1;
  VAR_6 = FUNC_0(VAR_5->r_mem, VAR_1);
  VAR_6 &= (0xffffffff << VAR_9);
 }

 if (VAR_5->ccc)
  VAR_7 = 1 << VAR_5->cccv;

 if (VAR_5->quirks & VAR_2)
  VAR_7 |= VAR_6;
 if (VAR_7 != 0)
  FUNC_1(VAR_5->r_mem, VAR_1, VAR_7);
 for (; VAR_9 < VAR_5->channels; VAR_9++) {
  if ((VAR_6 & (1 << VAR_9)) != 0 &&
      (VAR_8 = VAR_5->interrupt[VAR_9].argument)) {
    VAR_5->interrupt[VAR_9].function(VAR_8);
  }
 }
 for (; VAR_9 < VAR_5->channels + VAR_5->remapped_devices; VAR_9++) {
  if ((VAR_8 = VAR_5->interrupt[VAR_9].argument)) {
   VAR_5->interrupt[VAR_9].function(VAR_8);
  }
 }


 if (!(VAR_5->quirks & VAR_2))
  FUNC_1(VAR_5->r_mem, VAR_1, VAR_6);
 FUNC_2(VAR_5->r_mem, VAR_1);
}
