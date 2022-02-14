
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_mips_softc {int dummy; } ;
struct bcm_mips_cpuirq {int irq_rid; scalar_t__ refs; int * isrc_solo; int * irq_cookie; int * irq_res; scalar_t__ mips_irq; struct bcm_mips_softc* sc; } ;


 int FUNC_0 (struct bcm_mips_softc*) ;
 int FUNC_1 (struct bcm_mips_softc*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct bcm_mips_softc *VAR_0,
    struct bcm_mips_cpuirq *VAR_1)
{
 FUNC_0(VAR_0);

 FUNC_2(VAR_1->sc == ((void*)0), ("cpuirq already initialized"));
 VAR_1->sc = VAR_0;
 VAR_1->mips_irq = 0;
 VAR_1->irq_rid = -1;
 VAR_1->irq_res = ((void*)0);
 VAR_1->irq_cookie = ((void*)0);
 VAR_1->isrc_solo = ((void*)0);
 VAR_1->refs = 0;

 FUNC_1(VAR_0);

 return (0);
}
