
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bcm_mips_softc {int dummy; } ;
struct bcm_mips_irqsrc {scalar_t__ refs; struct bcm_mips_cpuirq* cpuirq; } ;
struct bcm_mips_cpuirq {int refs; struct bcm_mips_irqsrc* isrc_solo; } ;


 int FUNC_0 (struct bcm_mips_softc*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct bcm_mips_softc *VAR_1,
    struct bcm_mips_irqsrc *VAR_2, struct resource *VAR_3)
{
 struct bcm_mips_cpuirq *VAR_4;

 FUNC_0(VAR_1, VAR_0);


 FUNC_1(VAR_2->refs > 0, ("isrc over-release"));
 VAR_2->refs--;


 if (VAR_2->refs > 0)
  return (0);


 VAR_4 = VAR_2->cpuirq;
 VAR_2->cpuirq = ((void*)0);

 FUNC_1(VAR_4 != ((void*)0), ("no assigned IRQ"));
 FUNC_1(VAR_4->refs > 0, ("cpuirq over-release"));


 if (VAR_4->refs == 1 && VAR_4->isrc_solo != ((void*)0)) {
  FUNC_1(VAR_4->isrc_solo == VAR_2, ("invalid solo isrc"));
  VAR_4->isrc_solo = ((void*)0);
 }

 VAR_4->refs--;

 return (0);
}
