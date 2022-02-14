
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {char* et_name; int et_flags; int et_quality; int et_frequency; int et_min_period; int et_max_period; struct epit_softc* et_priv; int et_stop; int et_start; } ;
struct epit_softc {int clkfreq; TYPE_1__ et; int ctlreg; int dev; int inthandle; int * intres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int *,int,int ,int *,struct epit_softc*,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct epit_softc *VAR_13)
{
 int VAR_14, VAR_15;

 VAR_15 = 0;
 VAR_13->intres = FUNC_0(VAR_13->dev, VAR_9, &VAR_15,
     VAR_8);
 if (VAR_13->intres == ((void*)0)) {
  FUNC_2(VAR_13->dev, "could not allocate interrupt\n");
  return (VAR_0);
 }

 VAR_14 = FUNC_1(VAR_13->dev, VAR_13->intres, VAR_7 | VAR_6,
     VAR_12, ((void*)0), VAR_13, &VAR_13->inthandle);
 if (VAR_14 != 0) {
  FUNC_2(VAR_13->dev, "unable to setup the irq handler\n");
  return (VAR_14);
 }


 VAR_13->ctlreg |= VAR_1;


 VAR_13->et.et_name = "EPIT";
 VAR_13->et.et_flags = VAR_2 | VAR_3;
 VAR_13->et.et_quality = 1000;
 VAR_13->et.et_frequency = VAR_13->clkfreq;
 VAR_13->et.et_min_period = ((uint64_t)VAR_5 << 32) / VAR_13->clkfreq;
 VAR_13->et.et_max_period = ((uint64_t)VAR_4 << 32) / VAR_13->clkfreq;
 VAR_13->et.et_start = VAR_10;
 VAR_13->et.et_stop = VAR_11;
 VAR_13->et.et_priv = VAR_13;
 FUNC_3(&VAR_13->et);

 return (0);
}
