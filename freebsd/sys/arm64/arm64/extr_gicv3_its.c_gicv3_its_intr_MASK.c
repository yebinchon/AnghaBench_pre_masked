
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct gicv3_its_softc {scalar_t__ sc_irq_base; struct gicv3_its_irqsrc* sc_irqs; } ;
struct gicv3_its_irqsrc {int gi_isrc; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,struct trapframe*) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, uintptr_t VAR_3)
{
 struct gicv3_its_softc *VAR_4 = VAR_2;
 struct gicv3_its_irqsrc *VAR_5;
 struct trapframe *VAR_6;

 VAR_3 -= VAR_4->sc_irq_base;
 VAR_5 = &VAR_4->sc_irqs[VAR_3];
 if (VAR_5 == ((void*)0))
  FUNC_1("gicv3_its_intr: Invalid interrupt %ld",
      VAR_3 + VAR_4->sc_irq_base);

 VAR_6 = VAR_1->td_intr_frame;
 FUNC_0(&VAR_5->gi_isrc, VAR_6);
 return (VAR_0);
}
