
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
struct bcm_mips_cpuirq {int mips_irq; struct bcm_mips_irqsrc* isrc_solo; scalar_t__ sc; } ;
struct TYPE_4__ {TYPE_2__* isrcs; } ;
struct bcm_bmips_softc {int dev; TYPE_1__ bcm_mips; int cfg; } ;
struct TYPE_6__ {int td_intr_frame; } ;
struct TYPE_5__ {int isrc; } ;


 int FUNC_0 (struct bcm_mips_irqsrc*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bcm_bmips_softc*,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* VAR_12 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static int
FUNC_10(void *VAR_13)
{
 struct bcm_bmips_softc *VAR_14;
 struct bcm_mips_cpuirq *VAR_15;
 struct bcm_mips_irqsrc *VAR_16;
 uint32_t VAR_17, VAR_18;
 u_int VAR_19, VAR_20;
 int VAR_21;

 VAR_15 = VAR_13;
 VAR_14 = (struct bcm_bmips_softc*)VAR_15->sc;


 VAR_18 = FUNC_4(VAR_14->cfg, VAR_1);


 VAR_19 = VAR_15->mips_irq;
 if (VAR_19 == 0) {
  VAR_17 = FUNC_4(VAR_14->cfg, VAR_2);
 } else {
  uint32_t VAR_22;

  VAR_22 = FUNC_4(VAR_14->cfg, VAR_3);


  switch (VAR_19) {
  case 1:
   VAR_17 = (VAR_22 & VAR_4) >>
       VAR_5;
   break;
  case 2:
   VAR_17 = (VAR_22 & VAR_6) >>
       VAR_7;
   break;
  case 3:
   VAR_17 = (VAR_22 & VAR_8) >>
       VAR_9;
   break;
  case 4:
   VAR_17 = (VAR_22 & VAR_10) >>
       VAR_11;
   break;
  default:
   FUNC_9("invalid irq %u", VAR_19);
  }
 }


 VAR_18 &= VAR_17;


 VAR_16 = VAR_15->isrc_solo;
 if (VAR_16 != ((void*)0)) {
  if (VAR_18 & FUNC_0(VAR_16)) {
   VAR_21 = FUNC_7(&VAR_16->isrc,
       VAR_12->td_intr_frame);
   if (VAR_21) {
    FUNC_5(VAR_14->dev, "Stray interrupt %u "
        "detected\n", VAR_16->ivec);
    FUNC_3(VAR_14->dev,
        &VAR_16->isrc);
   }
  }

  VAR_18 &= ~(FUNC_0(VAR_16));
  if (VAR_18 == 0)
   return (VAR_0);


  while ((VAR_20 = FUNC_6(VAR_18)) != 0) {
   VAR_20--;
   VAR_18 &= ~(1 << VAR_20);

   FUNC_5(VAR_14->dev, "Stray interrupt %u "
    "detected\n", VAR_20);
   FUNC_2(VAR_14, VAR_19, VAR_20);
  }

  return (VAR_0);
 }


 while ((VAR_20 = FUNC_6(VAR_18)) != 0) {
  VAR_20--;
  VAR_18 &= ~(1 << VAR_20);

  FUNC_1(VAR_20 < FUNC_8(VAR_14->bcm_mips.isrcs), ("invalid ivec %u", VAR_20));

  VAR_21 = FUNC_7(&VAR_14->bcm_mips.isrcs[VAR_20].isrc,
      VAR_12->td_intr_frame);
  if (VAR_21) {
   FUNC_5(VAR_14->dev, "Stray interrupt %u detected\n",
       VAR_20);
   FUNC_2(VAR_14, VAR_19, VAR_20);
   continue;
  }
 }

 return (VAR_0);
}
