
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct gic_irqsrc {int gi_irq; } ;
struct arm_gic_softc {int dummy; } ;
typedef int device_t ;


 struct arm_gic_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct arm_gic_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct arm_gic_softc *VAR_2 = FUNC_0(VAR_0);
 struct gic_irqsrc *VAR_3 = (struct gic_irqsrc *)VAR_1;

 FUNC_1(VAR_2, VAR_3->gi_irq);
}
