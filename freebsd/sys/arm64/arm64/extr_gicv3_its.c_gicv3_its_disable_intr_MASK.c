
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint8_t ;
struct intr_irqsrc {int dummy; } ;
struct gicv3_its_softc {int sc_its_flags; scalar_t__ sc_conf_base; } ;
struct gicv3_its_irqsrc {size_t gi_irq; int gi_its_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct gicv3_its_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,struct gicv3_its_irqsrc*) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_3, struct intr_irqsrc *VAR_4)
{
 struct gicv3_its_softc *VAR_5;
 struct gicv3_its_irqsrc *VAR_6;
 uint8_t *VAR_7;

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = (struct gicv3_its_irqsrc *)VAR_4;
 VAR_7 = (uint8_t *)VAR_5->sc_conf_base;

 VAR_7[VAR_6->gi_irq] &= ~VAR_1;

 if ((VAR_5->sc_its_flags & VAR_0) != 0) {

  FUNC_0((vm_offset_t)&VAR_7[VAR_6->gi_irq], 1);
 } else {

  FUNC_2(VAR_2);
 }

 FUNC_3(VAR_3, VAR_6->gi_its_dev, VAR_6);
}
