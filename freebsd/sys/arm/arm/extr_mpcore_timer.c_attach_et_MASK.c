
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* et_name; int et_flags; int et_quality; int et_max_period; struct arm_tmr_softc* et_priv; int et_stop; int et_start; int et_min_period; int et_frequency; } ;
struct arm_tmr_softc {int memrid; int irqrid; TYPE_1__ et; int clkfreq; int dev; int * prv_irq; int * prv_mem; } ;


 int VAR_0 ;
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
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int *,struct arm_tmr_softc*,void**) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct arm_tmr_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct arm_tmr_softc *VAR_15)
{
 void *VAR_16;
 int VAR_17, VAR_18;

 if (VAR_11 != ((void*)0))
  return (VAR_0);

 VAR_18 = VAR_15->memrid;
 VAR_15->prv_mem = FUNC_0(VAR_15->dev, VAR_10, &VAR_18,
     VAR_7);
 if (VAR_15->prv_mem == ((void*)0)) {
  FUNC_3(VAR_15->dev, "could not allocate prv mem resources\n");
  return (VAR_1);
 }
 FUNC_6(VAR_15, VAR_6, 0x00000000);

 VAR_17 = VAR_15->irqrid;
 VAR_15->prv_irq = FUNC_0(VAR_15->dev, VAR_9, &VAR_17, VAR_7);
 if (VAR_15->prv_irq == ((void*)0)) {
  FUNC_1(VAR_15->dev, VAR_10, VAR_18, VAR_15->prv_mem);
  FUNC_3(VAR_15->dev, "could not allocate prv irq resources\n");
  return (VAR_1);
 }

 if (FUNC_2(VAR_15->dev, VAR_15->prv_irq, VAR_5, VAR_12,
   ((void*)0), VAR_15, &VAR_16) != 0) {
  FUNC_1(VAR_15->dev, VAR_10, VAR_18, VAR_15->prv_mem);
  FUNC_1(VAR_15->dev, VAR_9, VAR_17, VAR_15->prv_irq);
  FUNC_3(VAR_15->dev, "unable to setup the et irq handler.\n");
  return (VAR_1);
 }
 VAR_15->et.et_name = "MPCore";
 VAR_15->et.et_flags = VAR_4 | VAR_2 | VAR_3;
 VAR_15->et.et_quality = 1000;
 VAR_15->et.et_frequency = VAR_15->clkfreq;
 VAR_15->et.et_min_period = FUNC_5(20);
 VAR_15->et.et_max_period = 2 * VAR_8;
 VAR_15->et.et_start = VAR_13;
 VAR_15->et.et_stop = VAR_14;
 VAR_15->et.et_priv = VAR_15;
 FUNC_4(&VAR_15->et);
 VAR_11 = &VAR_15->et;

 return (0);
}
