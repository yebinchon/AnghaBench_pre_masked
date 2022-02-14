
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahci_controller_irq {int r_irq_rid; struct ahci_controller* ctlr; } ;
struct ahci_controller {int r_mem; TYPE_1__* interrupt; } ;
struct TYPE_2__ {int (* function ) (void*) ;void* argument; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct ahci_controller_irq *VAR_2 = VAR_1;
 struct ahci_controller *VAR_3 = VAR_2->ctlr;
 void *VAR_4;
 int VAR_5;

 VAR_5 = VAR_2->r_irq_rid - 1;

 FUNC_0(VAR_3->r_mem, VAR_0, 1 << VAR_5);
 if ((VAR_4 = VAR_3->interrupt[VAR_5].argument))
  VAR_3->interrupt[VAR_5].function(VAR_4);
 FUNC_1(VAR_3->r_mem, VAR_0);
}
