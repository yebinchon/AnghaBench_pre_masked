
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct gic_irqsrc {int gi_flags; int gi_irq; } ;
struct arm_gic_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct arm_gic_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct arm_gic_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2, struct intr_irqsrc *VAR_3)
{
 struct arm_gic_softc *VAR_4 = FUNC_1(VAR_2);
 struct gic_irqsrc *VAR_5 = (struct gic_irqsrc *)VAR_3;


 if ((VAR_5->gi_flags & VAR_1) == VAR_1)
  return;

 FUNC_0(0);
 FUNC_2(VAR_4, VAR_0, VAR_5->gi_irq);
}
