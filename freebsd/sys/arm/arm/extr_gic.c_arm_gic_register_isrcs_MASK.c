
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intr_irqsrc {int dummy; } ;
struct gic_irqsrc {int gi_irq; struct intr_irqsrc gi_isrc; int gi_trig; int gi_pol; } ;
struct arm_gic_softc {int nirqs; struct gic_irqsrc* gic_irqs; int gic_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct gic_irqsrc*,int ) ;
 int FUNC_2 (struct intr_irqsrc*,int ,int ,char*,char const*,scalar_t__) ;
 struct gic_irqsrc* FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct arm_gic_softc *VAR_12, uint32_t VAR_13)
{
 int VAR_14;
 uint32_t VAR_15;
 struct gic_irqsrc *VAR_16;
 struct intr_irqsrc *VAR_17;
 const char *VAR_18;

 VAR_16 = FUNC_3(VAR_13 * sizeof(struct gic_irqsrc), VAR_9,
     VAR_10 | VAR_11);

 VAR_18 = FUNC_0(VAR_12->gic_dev);
 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  VAR_16[VAR_15].gi_irq = VAR_15;
  VAR_16[VAR_15].gi_pol = VAR_7;
  VAR_16[VAR_15].gi_trig = VAR_8;

  VAR_17 = &VAR_16[VAR_15].gi_isrc;
  if (VAR_15 <= VAR_4) {
   VAR_14 = FUNC_2(VAR_17, VAR_12->gic_dev,
       VAR_5, "%s,i%u", VAR_18, VAR_15 - VAR_1);
  } else if (VAR_15 <= VAR_3) {
   VAR_14 = FUNC_2(VAR_17, VAR_12->gic_dev,
       VAR_6, "%s,p%u", VAR_18, VAR_15 - VAR_0);
  } else {
   VAR_14 = FUNC_2(VAR_17, VAR_12->gic_dev, 0,
       "%s,s%u", VAR_18, VAR_15 - VAR_2);
  }
  if (VAR_14 != 0) {

   FUNC_1(VAR_16, VAR_9);
   return (VAR_14);
  }
 }
 VAR_12->gic_irqs = VAR_16;
 VAR_12->nirqs = VAR_13;
 return (0);
}
