
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mtk_pci_softc {int sc_irq_start; int sc_irq_end; int ** sc_eventstab; } ;
typedef int device_t ;


 int VAR_0 ;
 struct mtk_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2, struct resource *VAR_3,
 void *VAR_4)
{
 struct mtk_pci_softc *VAR_5 = FUNC_0(VAR_1);
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 < VAR_5->sc_irq_start || VAR_6 > VAR_5->sc_irq_end)
  return (VAR_0);

 VAR_8 = VAR_6 - VAR_5->sc_irq_start;
 if (VAR_5->sc_eventstab[VAR_8] == ((void*)0))
  FUNC_3("Trying to teardown unoccupied IRQ");

 FUNC_2((void*)VAR_6);

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7)
  VAR_5->sc_eventstab[VAR_8] = ((void*)0);


 return (VAR_7);
}
