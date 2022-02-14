
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_mips_softc {int dev; } ;
struct bcm_mips_cpuirq {scalar_t__ refs; int irq_rid; int * irq_res; int * irq_cookie; int * sc; } ;


 int FUNC_0 (struct bcm_mips_softc*) ;
 int FUNC_1 (struct bcm_mips_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int *) ;
 int FUNC_5 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_6(struct bcm_mips_softc *VAR_2, struct bcm_mips_cpuirq *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);

 if (VAR_3->sc == ((void*)0)) {
  FUNC_2(VAR_3->irq_res == ((void*)0), ("leaking cpuirq resource"));

  FUNC_1(VAR_2);
  return (0);
 }

 if (VAR_3->refs != 0) {
  FUNC_1(VAR_2);
  return (VAR_0);
 }

 if (VAR_3->irq_cookie != ((void*)0)) {
  FUNC_2(VAR_3->irq_res != ((void*)0), ("resource missing"));

  VAR_4 = FUNC_5(VAR_2->dev, VAR_3->irq_res,
   VAR_3->irq_cookie);
  if (VAR_4) {
   FUNC_1(VAR_2);
   return (VAR_4);
  }

  VAR_3->irq_cookie = ((void*)0);
 }

 if (VAR_3->irq_res != ((void*)0)) {
  FUNC_4(VAR_2->dev, VAR_1, VAR_3->irq_rid,
      VAR_3->irq_res);
  VAR_3->irq_res = ((void*)0);
 }

 if (VAR_3->irq_rid != -1) {
  FUNC_3(VAR_2->dev, VAR_1, VAR_3->irq_rid);
  VAR_3->irq_rid = -1;
 }

 FUNC_1(VAR_2);

 return (0);
}
