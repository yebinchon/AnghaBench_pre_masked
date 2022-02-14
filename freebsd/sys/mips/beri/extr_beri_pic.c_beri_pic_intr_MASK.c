
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct intr_irqsrc {int dummy; } ;
struct hirq {unsigned int irq; struct beripic_softc* sc; } ;
struct beripic_softc {int * res; int dev; TYPE_1__* irqs; } ;
struct TYPE_4__ {int td_intr_frame; } ;
struct TYPE_3__ {struct intr_irqsrc isrc; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct intr_irqsrc*,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_7)
{
 struct beripic_softc *VAR_8;
 struct intr_irqsrc *VAR_9;
 struct hirq *VAR_10;
 uint64_t VAR_11;
 uint64_t VAR_12;
 int VAR_13;

 VAR_10 = VAR_7;
 VAR_8 = VAR_10->sc;

 VAR_11 = FUNC_0(VAR_8->res[VAR_4], 0);
 while ((VAR_13 = FUNC_3(VAR_11)) != 0) {
  VAR_13--;
  VAR_11 &= ~(1u << VAR_13);

  VAR_9 = &VAR_8->irqs[VAR_13].isrc;

  VAR_12 = FUNC_0(VAR_8->res[VAR_0], VAR_13 * 8);
  if ((VAR_12 & VAR_2) != VAR_10->irq) {
   continue;
  }
  if ((VAR_12 & (VAR_1)) == 0) {
   continue;
  }

  if (FUNC_4(VAR_9, VAR_6->td_intr_frame) != 0) {
   FUNC_2(VAR_8->dev, "Stray interrupt %u detected\n", VAR_13);
  }

  FUNC_1(VAR_8->res[VAR_3], 0, (1 << VAR_13));
 }

 return (VAR_5);
}
