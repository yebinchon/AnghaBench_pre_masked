
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arm_tmr_softc {int irqrid; int memrid; int dev; scalar_t__ clkfreq; } ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;
typedef int clock ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,scalar_t__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct arm_tmr_softc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct arm_tmr_softc*) ;
 int FUNC_3 (struct arm_tmr_softc*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct arm_tmr_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_8)
{
 struct arm_tmr_softc *VAR_9;
 phandle_t VAR_10;
 pcell_t VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_9 = FUNC_4(VAR_8);
 VAR_9->dev = VAR_8;

 if (VAR_5) {
  VAR_9->clkfreq = VAR_4;
 } else {
  if (VAR_4 != 0) {
   VAR_9->clkfreq = VAR_4;
  } else {

   VAR_10 = FUNC_6(VAR_8);
   if ((FUNC_0(VAR_10, "clock-frequency", &VAR_11,
       sizeof(VAR_11))) <= 0) {
    FUNC_5(VAR_8, "missing clock-frequency "
        "attribute in FDT\n");
    return (VAR_0);
   }
   VAR_9->clkfreq = VAR_11;
  }
 }

 VAR_14 = FUNC_7(VAR_8, VAR_7)->ocd_data;
 VAR_13 = VAR_0;
 VAR_12 = VAR_0;
 if (VAR_14 & VAR_1) {
  if (!VAR_5)
   VAR_13 = FUNC_3(VAR_9);
  else if (VAR_6)
   FUNC_5(VAR_9->dev,
       "not using variable-frequency device as timecounter\n");
  VAR_9->memrid++;
  VAR_9->irqrid++;
 }


 if (VAR_14 & VAR_2) {
  VAR_12 = FUNC_2(VAR_9);
 }





 if (VAR_13 != 0 && VAR_12 != 0) {
  return (VAR_0);
 }
 return (0);
}
