
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct mtk_pci_softc {unsigned int sc_irq_start; unsigned int sc_irq_end; struct intr_event** sc_eventstab; } ;
struct intr_event {int ie_handlers; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct mtk_pci_softc*,int ) ;
 int FUNC_2 (struct intr_event*,int *) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_2)
{
 struct mtk_pci_softc *VAR_3 = VAR_2;
 struct intr_event *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_1);

 for (VAR_6 = VAR_3->sc_irq_start; VAR_6 <= VAR_3->sc_irq_end; VAR_6++) {
  if (VAR_5 & (1u<<VAR_6)) {
   VAR_7 = VAR_6 - VAR_3->sc_irq_start;
   VAR_4 = VAR_3->sc_eventstab[VAR_7];
   if (!VAR_4 || FUNC_0(&VAR_4->ie_handlers)) {
    if (VAR_6 != 0)
     FUNC_3("Stray PCI IRQ %d\n", VAR_6);
    continue;
   }

   FUNC_2(VAR_4, ((void*)0));
  }
 }

 return (VAR_0);
}
