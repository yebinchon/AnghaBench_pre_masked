
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct trapframe {int dummy; } ;
struct gic_irqsrc {size_t gi_irq; int gi_flags; int gi_isrc; } ;
struct arm_gic_softc {int nirqs; int* last_irq; int gic_dev; struct gic_irqsrc* gic_irqs; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct arm_gic_softc*,int ) ;
 int FUNC_4 (struct arm_gic_softc*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct arm_gic_softc*,int) ;
 int FUNC_6 (int ,struct trapframe*) ;
 scalar_t__ FUNC_7 (int *,struct trapframe*) ;
 int * VAR_9 ;

int
FUNC_8(void *VAR_10)
{
 struct arm_gic_softc *VAR_11 = VAR_10;
 struct gic_irqsrc *VAR_12;
 uint32_t VAR_13, VAR_14;
 struct trapframe *VAR_15;

 VAR_13 = FUNC_3(VAR_11, VAR_2);
 VAR_14 = VAR_13 & 0x3FF;
 if (VAR_14 >= VAR_11->nirqs) {
  if (VAR_8)
   FUNC_2(VAR_11->gic_dev,
       "Spurious interrupt detected: last irq: %d on CPU%d\n",
       VAR_11->last_irq[FUNC_0(VAR_6)], FUNC_0(VAR_6));
  return (VAR_0);
 }

 VAR_15 = VAR_7->td_intr_frame;
dispatch_irq:
 VAR_12 = VAR_11->gic_irqs + VAR_14;




 if (VAR_14 <= VAR_4) {






  FUNC_2(VAR_11->gic_dev, "SGI %u on UP system detected\n",
      VAR_14 - VAR_3);
  FUNC_4(VAR_11, VAR_1, VAR_13);
  goto next_irq;

 }

 if (VAR_8)
  VAR_11->last_irq[FUNC_0(VAR_6)] = VAR_14;
 if ((VAR_12->gi_flags & VAR_5) == VAR_5)
  FUNC_4(VAR_11, VAR_1, VAR_13);

 if (FUNC_7(&VAR_12->gi_isrc, VAR_15) != 0) {
  FUNC_5(VAR_11, VAR_14);
  if ((VAR_12->gi_flags & VAR_5) != VAR_5)
   FUNC_4(VAR_11, VAR_1, VAR_13);
  FUNC_2(VAR_11->gic_dev, "Stray irq %u disabled\n", VAR_14);
 }

next_irq:
 FUNC_1(VAR_14);
 VAR_13 = FUNC_3(VAR_11, VAR_2);
 VAR_14 = VAR_13 & 0x3FF;
 if (VAR_14 < VAR_11->nirqs)
  goto dispatch_irq;

 return (VAR_0);
}
