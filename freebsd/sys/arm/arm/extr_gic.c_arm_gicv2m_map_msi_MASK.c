
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct intr_irqsrc {int dummy; } ;
struct gic_irqsrc {int gi_irq; } ;
struct arm_gicv2m_softc {int sc_mem; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct arm_gicv2m_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, struct intr_irqsrc *VAR_3,
    uint64_t *VAR_4, uint32_t *VAR_5)
{
 struct arm_gicv2m_softc *VAR_6 = FUNC_0(VAR_1);
 struct gic_irqsrc *VAR_7 = (struct gic_irqsrc *)VAR_3;

 *VAR_4 = FUNC_2(FUNC_1(VAR_6->sc_mem)) + VAR_0;
 *VAR_5 = VAR_7->gi_irq;

 return (0);
}
