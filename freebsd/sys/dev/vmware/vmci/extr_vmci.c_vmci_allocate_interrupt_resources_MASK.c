
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_softc {int vmci_num_intr; scalar_t__ vmci_intr_type; TYPE_1__* vmci_intrs; int vmci_dev; } ;
struct resource {int dummy; } ;
struct TYPE_2__ {int vmci_rid; struct resource* vmci_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct resource* FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct vmci_softc *VAR_5)
{
 struct resource *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_1;
 VAR_7 |= (VAR_5->vmci_num_intr == 1) ? VAR_2 : 0;
 VAR_9 = (VAR_5->vmci_intr_type == VAR_4) ? 0 : 1;

 for (VAR_8 = 0; VAR_8 < VAR_5->vmci_num_intr; VAR_8++, VAR_9++) {
  VAR_6 = FUNC_0(VAR_5->vmci_dev, VAR_3, &VAR_9,
      VAR_7);
  if (VAR_6 == ((void*)0))
   return (VAR_0);
  VAR_5->vmci_intrs[VAR_8].vmci_irq = VAR_6;
  VAR_5->vmci_intrs[VAR_8].vmci_rid = VAR_9;
 }

 return (0);
}
