
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct resource {int dummy; } ;
struct bcm_mips_softc {int dev; } ;
struct bcm_mips_cpuirq {int irq_rid; scalar_t__ refs; int * isrc_solo; void* irq_cookie; struct resource* irq_res; scalar_t__ mips_irq; struct bcm_mips_softc* sc; } ;
typedef int driver_filter_t ;


 int FUNC_0 (struct bcm_mips_softc*) ;
 int FUNC_1 (struct bcm_mips_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct resource* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int,struct resource*) ;
 int FUNC_6 (int ,int ,int,scalar_t__,int) ;
 int FUNC_7 (int ,struct resource*,int,int ,int *,struct bcm_mips_cpuirq*,void**) ;
 int FUNC_8 (int ,char*,scalar_t__,...) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static int
FUNC_10(struct bcm_mips_softc *VAR_9, struct bcm_mips_cpuirq *VAR_10,
    int VAR_11, u_int VAR_12, driver_filter_t VAR_13)
{
 struct resource *VAR_14;
 void *VAR_15;
 u_int VAR_16;
 int VAR_17;


 if (VAR_12 >= VAR_5)
  return (VAR_0);


 VAR_16 = VAR_12 + VAR_6;


 FUNC_0(VAR_9);

 FUNC_2(VAR_10->sc == ((void*)0), ("cpuirq already initialized"));

 VAR_17 = FUNC_6(VAR_9->dev, VAR_8, VAR_11, VAR_16, 1);
 if (VAR_17) {
  FUNC_1(VAR_9);
  FUNC_8(VAR_9->dev, "failed to assign interrupt %u: "
      "%d\n", VAR_12, VAR_17);
  return (VAR_17);
 }

 VAR_14 = FUNC_3(VAR_9->dev, VAR_8, &VAR_11, VAR_7);
 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_9);
  FUNC_8(VAR_9->dev, "failed to allocate interrupt "
   "%u resource\n", VAR_12);
  FUNC_4(VAR_9->dev, VAR_8, VAR_11);
  return (VAR_1);
 }

 VAR_17 = FUNC_7(VAR_9->dev, VAR_14,
     VAR_4 | VAR_3 | VAR_2, VAR_13, ((void*)0), VAR_10,
     &VAR_15);
 if (VAR_17) {
  FUNC_1(VAR_9);

  FUNC_9("failed to setup internal interrupt handler: %d\n",
      VAR_17);

  FUNC_5(VAR_9->dev, VAR_8, VAR_11, VAR_14);
  FUNC_4(VAR_9->dev, VAR_8, VAR_11);

  return (VAR_17);
 }


 VAR_10->sc = VAR_9;
 VAR_10->mips_irq = VAR_12;
 VAR_10->irq_rid = VAR_11;
 VAR_10->irq_res = VAR_14;
 VAR_10->irq_cookie = VAR_15;
 VAR_10->isrc_solo = ((void*)0);
 VAR_10->refs = 0;

 FUNC_1(VAR_9);
 return (0);
}
