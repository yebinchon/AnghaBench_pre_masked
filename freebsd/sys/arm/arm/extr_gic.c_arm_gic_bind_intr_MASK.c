
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int isrc_cpu; } ;
struct gic_irqsrc {scalar_t__ gi_irq; } ;
struct arm_gic_softc {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct arm_gic_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct arm_gic_softc*,scalar_t__,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, struct intr_irqsrc *VAR_5)
{
 struct arm_gic_softc *VAR_6 = FUNC_2(VAR_4);
 struct gic_irqsrc *VAR_7 = (struct gic_irqsrc *)VAR_5;

 if (VAR_7->gi_irq < VAR_1)
  return (VAR_0);

 if (FUNC_0(&VAR_5->isrc_cpu)) {
  VAR_3 = FUNC_4(VAR_3, &VAR_2);
  FUNC_1(VAR_3, &VAR_5->isrc_cpu);
 }
 return (FUNC_3(VAR_6, VAR_7->gi_irq, &VAR_5->isrc_cpu));
}
