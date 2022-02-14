
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uintmax_t ;
typedef size_t uint64_t ;
struct trapframe {int dummy; } ;
struct intr_pic {int dummy; } ;
struct gic_v3_softc {size_t gic_nirqs; int dev; struct gic_v3_irqsrc* gic_irqs; struct intr_pic* gic_pic; } ;
struct gic_v3_irqsrc {size_t gi_irq; scalar_t__ gi_trig; int gi_isrc; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (int ,char*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct intr_pic*,size_t) ;
 int FUNC_6 (int ,struct trapframe*) ;
 scalar_t__ FUNC_7 (int *,struct trapframe*) ;
 int * VAR_11 ;

int
FUNC_8(void *VAR_12)
{
 struct gic_v3_softc *VAR_13 = VAR_12;
 struct gic_v3_irqsrc *VAR_14;
 struct intr_pic *VAR_15;
 uint64_t VAR_16;
 struct trapframe *VAR_17;

 VAR_15 = VAR_13->gic_pic;

 while (1) {
  if (VAR_0) {






   __asm __volatile(
       "nop;nop;nop;nop;nop;nop;nop;nop;	\n"
       "mrs %0, ICC_IAR1_EL1		\n"
       "nop;nop;nop;nop;			\n"
       "dsb sy				\n"
       : "=&r" (VAR_16));
  } else {
   VAR_16 = FUNC_2(VAR_8);
  }

  if (VAR_16 >= VAR_3) {
   FUNC_5(VAR_15, VAR_16);
   continue;
  }

  if (FUNC_0(VAR_16 >= VAR_13->gic_nirqs))
   return (VAR_2);

  VAR_17 = VAR_10->td_intr_frame;
  VAR_14 = &VAR_13->gic_irqs[VAR_16];
  if (VAR_16 <= VAR_6) {

   FUNC_3(VAR_1, (uint64_t)VAR_16);



   FUNC_1(VAR_13->dev, "SGI %ju on UP system detected\n",
       (uintmax_t)(VAR_16 - VAR_5));

  } else if (VAR_16 >= VAR_4 &&
      VAR_16 <= VAR_7) {
   if (VAR_14->gi_trig == VAR_9)
    FUNC_3(VAR_1, VAR_14->gi_irq);

   if (FUNC_7(&VAR_14->gi_isrc, VAR_17) != 0) {
    if (VAR_14->gi_trig != VAR_9)
     FUNC_3(VAR_1, VAR_14->gi_irq);
    FUNC_4(VAR_13->dev, &VAR_14->gi_isrc);
    FUNC_1(VAR_13->dev,
        "Stray irq %lu disabled\n", VAR_16);
   }
  }
 }
}
