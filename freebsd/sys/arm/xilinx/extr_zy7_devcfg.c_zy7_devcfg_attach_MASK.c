
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zy7_devcfg_softc {TYPE_1__* sc_ctl_dev; int intrhandle; int * irq_res; int * mem_res; int dev; } ;
typedef int device_t ;
struct TYPE_4__ {int actual_frequency; int frequency; int source; } ;
struct TYPE_3__ {struct zy7_devcfg_softc* si_drv1; } ;


 int FUNC_0 (struct zy7_devcfg_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct zy7_devcfg_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct zy7_devcfg_softc*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct zy7_devcfg_softc*,int *) ;
 struct zy7_devcfg_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 TYPE_2__* VAR_18 ;
 TYPE_1__* FUNC_7 (int *,int ,int ,int ,int,char*) ;
 int VAR_19 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct zy7_devcfg_softc*) ;
 int VAR_20 ;
 struct zy7_devcfg_softc* VAR_21 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_13(device_t VAR_23)
{
 struct zy7_devcfg_softc *VAR_24 = FUNC_5(VAR_23);
 int VAR_25;
 int VAR_26, VAR_27;


 if (VAR_21 != ((void*)0))
  return (VAR_1);

 VAR_24->dev = VAR_23;

 FUNC_0(VAR_24);


 VAR_26 = 0;
 VAR_24->mem_res = FUNC_3(VAR_23, VAR_8, &VAR_26,
          VAR_6);
 if (VAR_24->mem_res == ((void*)0)) {
  FUNC_6(VAR_23, "could not allocate memory resources.\n");
  FUNC_8(VAR_23);
  return (VAR_0);
 }


 VAR_26 = 0;
 VAR_24->irq_res = FUNC_3(VAR_23, VAR_7, &VAR_26,
          VAR_6);
 if (VAR_24->irq_res == ((void*)0)) {
  FUNC_6(VAR_23, "cannot allocate IRQ\n");
  FUNC_8(VAR_23);
  return (VAR_0);
 }


 VAR_27 = FUNC_4(VAR_23, VAR_24->irq_res, VAR_5 | VAR_4,
        ((void*)0), VAR_20, VAR_24, &VAR_24->intrhandle);
 if (VAR_27) {
  FUNC_6(VAR_23, "cannot setup IRQ\n");
  FUNC_8(VAR_23);
  return (VAR_27);
 }


 VAR_24->sc_ctl_dev = FUNC_7(&VAR_19, 0,
     VAR_9, VAR_3, 0600, "devcfg");
 if (VAR_24->sc_ctl_dev == ((void*)0)) {
  FUNC_6(VAR_23, "failed to create /dev/devcfg");
  FUNC_8(VAR_23);
  return (VAR_1);
 }
 VAR_24->sc_ctl_dev->si_drv1 = VAR_24;

 VAR_21 = VAR_24;


 FUNC_2(VAR_24, VAR_16, VAR_17);


 FUNC_2(VAR_24, VAR_12, VAR_10);
 FUNC_2(VAR_24, VAR_11, 0xffffffff);


 VAR_22 = (FUNC_1(VAR_24, VAR_13) &
         VAR_14) >>
  VAR_15;

 for (VAR_25 = 0; VAR_25 < VAR_2; VAR_25++) {
  VAR_18[VAR_25].source = FUNC_12(VAR_25);
  VAR_18[VAR_25].actual_frequency =
   FUNC_10(VAR_25) ? FUNC_11(VAR_25) : 0;

  VAR_18[VAR_25].frequency = VAR_18[VAR_25].actual_frequency;
 }

 if (FUNC_9(VAR_24) < 0)
  FUNC_6(VAR_23, "failed to initialized sysctl tree\n");

 return (0);
}
