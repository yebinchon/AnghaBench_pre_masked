
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct mmc_softc {int child_count; int * child_list; int dev; } ;
struct mmc_ivars {int timings; int bus_width; int rca; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mmc_ivars* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int*,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct mmc_softc*,int ) ;
 scalar_t__ FUNC_6 (struct mmc_softc*,struct mmc_ivars*,int) ;
 scalar_t__ FUNC_7 (struct mmc_softc*,struct mmc_ivars*) ;
 scalar_t__ FUNC_8 (struct mmc_softc*,struct mmc_ivars*,int) ;
 scalar_t__ FUNC_9 (struct mmc_softc*,struct mmc_ivars*,int) ;
 scalar_t__ FUNC_10 (struct mmc_softc*,struct mmc_ivars*,int,int) ;
 int FUNC_11 (struct mmc_ivars*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int) ;
 scalar_t__ FUNC_16 (int ,int) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(struct mmc_softc *VAR_9)
{
 device_t VAR_10;
 struct mmc_ivars *VAR_11;
 int VAR_12;
 uint32_t VAR_13, VAR_14;
 uint16_t VAR_15;
 enum mmc_bus_timing VAR_16, VAR_17;
 bool VAR_18, VAR_19;

 VAR_10 = VAR_9->dev;
 VAR_14 = FUNC_13(VAR_10);
 VAR_16 = VAR_2;
 do {
  VAR_18 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_9->child_count; VAR_12++) {
   VAR_11 = FUNC_0(VAR_9->child_list[VAR_12]);
   if (FUNC_2(&VAR_11->timings, VAR_16) ||
       !FUNC_4(VAR_10, VAR_16)) {
    for (VAR_17 = VAR_16 - 1; VAR_17 >=
        VAR_7; VAR_17--) {
     if (FUNC_3(&VAR_11->timings, VAR_17) &&
         FUNC_4(VAR_10, VAR_17)) {
      VAR_16 = VAR_17;
      break;
     }
    }
    VAR_18 = 1;
   }
   VAR_13 = FUNC_11(VAR_11, VAR_16);
   if (VAR_13 < VAR_14) {
    VAR_14 = VAR_13;
    VAR_18 = 1;
   }
  }
 } while (VAR_18 == 1);

 if (VAR_1 || VAR_8) {
  FUNC_1(VAR_10,
      "setting transfer rate to %d.%03dMHz (%s timing)\n",
      VAR_14 / 1000000, (VAR_14 / 1000) % 1000,
      FUNC_12(VAR_16));
 }
 VAR_19 = VAR_16 == VAR_5;
 VAR_17 = VAR_19 == 1 ? VAR_4 : VAR_16;
 for (VAR_12 = 0; VAR_12 < VAR_9->child_count; VAR_12++) {
  VAR_11 = FUNC_0(VAR_9->child_list[VAR_12]);
  if ((VAR_11->timings & ~(1 << VAR_7)) == 0)
   goto clock;

  VAR_15 = VAR_11->rca;
  if (FUNC_5(VAR_9, VAR_15) != VAR_0) {
   FUNC_1(VAR_10, "Card at relative address %d "
       "failed to select\n", VAR_15);
   continue;
  }

  if (VAR_17 == VAR_4 ||
      VAR_17 == VAR_6) {
   if (FUNC_9(VAR_9, VAR_11, VAR_17) != VAR_0) {
    FUNC_1(VAR_10, "Failed to set VCCQ for "
        "card at relative address %d\n", VAR_15);
    continue;
   }
  }

  if (VAR_17 == VAR_4) {

   if (FUNC_6(VAR_9, VAR_11, VAR_17) !=
       VAR_0) {
    FUNC_1(VAR_10, "Card at relative address "
        "%d failed to set bus width\n", VAR_15);
    continue;
   }
   FUNC_14(VAR_10, VAR_11->bus_width);
   FUNC_17(VAR_10);
  } else if (VAR_17 == VAR_6) {
   if (FUNC_10(VAR_9, VAR_11, VAR_14, VAR_17) !=
       VAR_0) {
    FUNC_1(VAR_10, "Card at relative address "
        "%d failed to set %s timing\n", VAR_15,
        FUNC_12(VAR_17));
    continue;
   }
   goto power_class;
  }

  if (FUNC_8(VAR_9, VAR_11, VAR_17) != VAR_0) {
   FUNC_1(VAR_10, "Card at relative address %d "
       "failed to set %s timing\n", VAR_15,
       FUNC_12(VAR_17));
   continue;
  }

  if (VAR_17 == VAR_3) {




   if (FUNC_6(VAR_9, VAR_11, VAR_17) !=
       VAR_0) {
    FUNC_1(VAR_10, "Card at relative address "
        "%d failed to set bus width\n", VAR_15);
    continue;
   }
   FUNC_14(VAR_10, VAR_11->bus_width);
   FUNC_17(VAR_10);
   if (FUNC_9(VAR_9, VAR_11, VAR_17) != VAR_0) {
    FUNC_1(VAR_10, "Failed to set VCCQ for "
        "card at relative address %d\n", VAR_15);
    continue;
   }
  }

clock:

  FUNC_15(VAR_10, VAR_14);
  FUNC_17(VAR_10);

  if (FUNC_16(VAR_10, VAR_19) != 0) {
   FUNC_1(VAR_10, "Card at relative address %d "
       "failed to execute initial tuning\n", VAR_15);
   continue;
  }

  if (VAR_19 == 1 && FUNC_10(VAR_9, VAR_11, VAR_14,
      VAR_16) != VAR_0) {
   FUNC_1(VAR_10, "Card at relative address %d "
       "failed to set %s timing\n", VAR_15,
       FUNC_12(VAR_16));
   continue;
  }

power_class:
  if (FUNC_7(VAR_9, VAR_11) != VAR_0) {
   FUNC_1(VAR_10, "Card at relative address %d "
       "failed to set power class\n", VAR_15);
  }
 }
 (void)FUNC_5(VAR_9, 0);
 return (VAR_14);
}
