
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct gic_irqsrc {int gi_irq; } ;
struct arm_gic_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct intr_irqsrc*) ;
 struct arm_gic_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct arm_gic_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct arm_gic_softc *VAR_3 = FUNC_1(VAR_1);
 struct gic_irqsrc *VAR_4 = (struct gic_irqsrc *)VAR_2;

 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_3, VAR_0, VAR_4->gi_irq);
}
