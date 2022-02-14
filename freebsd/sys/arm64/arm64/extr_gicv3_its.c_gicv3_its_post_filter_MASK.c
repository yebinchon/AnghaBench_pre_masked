
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct gicv3_its_softc {scalar_t__ sc_irq_base; } ;
struct gicv3_its_irqsrc {scalar_t__ gi_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gicv3_its_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct gicv3_its_irqsrc *VAR_3;
 struct gicv3_its_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_3 = (struct gicv3_its_irqsrc *)VAR_2;
 FUNC_1(VAR_0, VAR_3->gi_irq + VAR_4->sc_irq_base);
}
