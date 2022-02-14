
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct resource {int dummy; } ;
struct bcm_mips_softc {size_t num_cpuirqs; struct bcm_mips_cpuirq* cpuirqs; } ;
struct bcm_mips_irqsrc {int refs; struct bcm_mips_cpuirq* cpuirq; int ivec; } ;
struct bcm_mips_cpuirq {scalar_t__ refs; int irq_rid; size_t mips_irq; struct bcm_mips_irqsrc* isrc_solo; } ;
typedef int * device_t ;
typedef int bhnd_devclass_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct bcm_mips_softc*,int ) ;
 int FUNC_1 (char*,int ,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int
FUNC_6(struct bcm_mips_softc *VAR_4,
    struct bcm_mips_irqsrc *VAR_5, struct resource *VAR_6)
{
 struct bcm_mips_cpuirq *VAR_7;
 bhnd_devclass_t VAR_8;
 device_t VAR_9;

 FUNC_0(VAR_4, VAR_2);


 if (VAR_5->cpuirq != ((void*)0)) {
  FUNC_2(VAR_5->cpuirq->refs > 0, ("assigned IRQ has no "
      "references"));


  if (VAR_5->refs == VAR_3)
   return (VAR_1);

  VAR_5->refs++;
  return (0);
 }




 VAR_8 = 141;
 VAR_9 = FUNC_3(FUNC_5(VAR_6));
 if (VAR_9 != ((void*)0))
  VAR_8 = FUNC_4(VAR_9);

 switch (VAR_8) {
 case 151:
 case 150:
 case 137:
 case 136:
 case 143:
 case 149:
 case 134:
 case 135:
 case 145:
 case 142:

  VAR_7 = &VAR_4->cpuirqs[VAR_0];
  break;

 case 139:
 case 138:
 case 140:
 case 148:
 case 147:
 case 146:
 case 130:
 case 129:
 case 128:
 case 131:
 case 133:
 case 132:
 case 141:
 case 144:
 default:

  VAR_7 = &VAR_4->cpuirqs[VAR_0];


  for (u_int VAR_10 = 0; VAR_10 < VAR_4->num_cpuirqs; VAR_10++) {
   if (VAR_10 == VAR_0)
    continue;

   if (VAR_4->cpuirqs[VAR_10].irq_rid == -1)
    continue;

   if (VAR_4->cpuirqs[VAR_10].refs != 0)
    continue;


   VAR_7 = &VAR_4->cpuirqs[VAR_10];
   break;
  }

  break;
 }

 FUNC_1("routing backplane interrupt vector %u to MIPS IRQ %u\n",
     VAR_5->ivec, VAR_7->mips_irq);

 FUNC_2(VAR_5->cpuirq == ((void*)0), ("CPU IRQ already assigned"));
 FUNC_2(VAR_5->refs == 0, ("isrc has active references with no "
     "assigned CPU IRQ"));
 FUNC_2(VAR_7->refs == 1 || VAR_7->isrc_solo == ((void*)0),
     ("single isrc dispatch enabled on cpuirq with multiple refs"));


 if (VAR_7->refs == VAR_3)
  return (VAR_1);


 VAR_7->refs++;


 VAR_5->refs++;


 VAR_5->cpuirq = VAR_7;


 if (VAR_7->refs == 1 && VAR_7->mips_irq != VAR_0)
  VAR_7->isrc_solo = VAR_5;

 return (0);
}
