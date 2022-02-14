
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct bcm_mips_irqsrc {int ivec; int isrc; } ;
struct bcm_mips_cpuirq {scalar_t__ mips_irq; struct bcm_mips_irqsrc* isrc_solo; scalar_t__ sc; } ;
struct TYPE_4__ {TYPE_2__* isrcs; } ;
struct bcm_mips74k_softc {int dev; TYPE_1__ bcm_mips; int mem; } ;
struct TYPE_6__ {int td_intr_frame; } ;
struct TYPE_5__ {int isrc; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bcm_mips_irqsrc*) ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct bcm_mips74k_softc*,scalar_t__,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_10(void *VAR_4)
{
 struct bcm_mips74k_softc *VAR_5;
 struct bcm_mips_cpuirq *VAR_6;
 struct bcm_mips_irqsrc *VAR_7;
 uint32_t VAR_8, VAR_9;
 u_int VAR_10;
 int VAR_11;

 VAR_6 = VAR_4;
 VAR_5 = (struct bcm_mips74k_softc*)VAR_6->sc;


 VAR_9 = FUNC_5(VAR_5->mem, VAR_0);


 FUNC_2(VAR_6->mips_irq < VAR_1,
     ("invalid irq %u", VAR_6->mips_irq));

 VAR_8 = FUNC_5(VAR_5->mem, FUNC_0(VAR_6->mips_irq));


 VAR_9 &= VAR_8;


 VAR_7 = VAR_6->isrc_solo;
 if (VAR_7 != ((void*)0)) {
  if (VAR_9 & FUNC_1(VAR_7)) {
   VAR_11 = FUNC_8(&VAR_7->isrc,
       VAR_3->td_intr_frame);
   if (VAR_11) {
    FUNC_6(VAR_5->dev, "Stray interrupt %u "
        "detected\n", VAR_7->ivec);
    FUNC_4(VAR_5->dev,
        &VAR_7->isrc);
   }
  }

  VAR_9 &= ~(FUNC_1(VAR_7));
  if (VAR_9 == 0)
   return (VAR_2);


  while ((VAR_10 = FUNC_7(VAR_9)) != 0) {
   VAR_10--;
   VAR_9 &= ~(1 << VAR_10);

   FUNC_6(VAR_5->dev, "Stray interrupt %u "
    "detected\n", VAR_10);
   FUNC_3(VAR_5, VAR_6->mips_irq, VAR_10);
  }

  return (VAR_2);
 }


 while ((VAR_10 = FUNC_7(VAR_9)) != 0) {
  VAR_10--;
  VAR_9 &= ~(1 << VAR_10);

  FUNC_2(VAR_10 < FUNC_9(VAR_5->bcm_mips.isrcs), ("invalid ivec %u", VAR_10));

  VAR_11 = FUNC_8(&VAR_5->bcm_mips.isrcs[VAR_10].isrc,
      VAR_3->td_intr_frame);
  if (VAR_11) {
   FUNC_6(VAR_5->dev, "Stray interrupt %u detected\n",
       VAR_10);
   FUNC_3(VAR_5, VAR_6->mips_irq, VAR_10);
   continue;
  }
 }

 return (VAR_2);
}
