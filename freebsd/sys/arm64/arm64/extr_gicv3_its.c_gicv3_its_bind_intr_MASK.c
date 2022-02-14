
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int isrc_cpu; } ;
struct gicv3_its_softc {int gic_irq_cpu; int sc_cpus; } ;
struct gicv3_its_irqsrc {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct gicv3_its_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct gicv3_its_irqsrc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct gicv3_its_irqsrc *VAR_2;
 struct gicv3_its_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 VAR_2 = (struct gicv3_its_irqsrc *)VAR_1;
 if (FUNC_0(&VAR_1->isrc_cpu)) {
  VAR_3->gic_irq_cpu = FUNC_3(VAR_3->gic_irq_cpu,
      &VAR_3->sc_cpus);
  FUNC_1(VAR_3->gic_irq_cpu, &VAR_1->isrc_cpu);
 }

 FUNC_4(VAR_0, VAR_2);

 return (0);
}
