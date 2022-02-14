
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intr_irqsrc {int dummy; } ;
struct bcm_mips_irqsrc {int ivec; TYPE_1__* cpuirq; } ;
struct bcm_bmips_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int mips_irq; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bcm_bmips_softc*,int ,int ) ;
 struct bcm_bmips_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct bcm_bmips_softc *VAR_2;
 struct bcm_mips_irqsrc *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = (struct bcm_mips_irqsrc *)VAR_1;

 FUNC_0(VAR_3->cpuirq != ((void*)0), ("no assigned MIPS IRQ"));

 FUNC_1(VAR_2, VAR_3->cpuirq->mips_irq, VAR_3->ivec);
}
