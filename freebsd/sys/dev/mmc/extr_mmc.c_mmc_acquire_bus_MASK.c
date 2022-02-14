
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mmc_softc {scalar_t__ last_rca; int child_count; scalar_t__ owner; } ;
struct mmc_ivars {scalar_t__ rca; int bus_width; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mmc_softc*) ;
 int FUNC_2 (struct mmc_softc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mmc_ivars* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct mmc_softc* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,scalar_t__,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_8 (struct mmc_softc*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct mmc_softc*,struct mmc_ivars*,int) ;
 scalar_t__ FUNC_10 (struct mmc_softc*,struct mmc_ivars*,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_8, device_t VAR_9)
{
 struct mmc_softc *VAR_10;
 struct mmc_ivars *VAR_11;
 int VAR_12;
 uint16_t VAR_13;
 enum mmc_bus_timing VAR_14;

 VAR_12 = FUNC_0(FUNC_4(VAR_8), VAR_8);
 if (VAR_12)
  return (VAR_12);
 VAR_10 = FUNC_5(VAR_8);
 FUNC_1(VAR_10);
 if (VAR_10->owner)
  FUNC_15("mmc: host bridge didn't serialize us.");
 VAR_10->owner = VAR_9;
 FUNC_2(VAR_10);

 if (VAR_8 != VAR_9) {






  VAR_11 = FUNC_3(VAR_9);
  VAR_13 = VAR_11->rca;
  if (VAR_10->last_rca != VAR_13) {
   if (FUNC_8(VAR_10, VAR_13) != VAR_1) {
    FUNC_6(VAR_8, "Card at relative "
        "address %d failed to select\n", VAR_13);
    return (VAR_0);
   }
   VAR_10->last_rca = VAR_13;
   VAR_14 = FUNC_12(VAR_8);
   if (VAR_14 >= VAR_3 &&
       VAR_10->child_count == 1)
    return (0);

   if (VAR_2 || VAR_7) {
    FUNC_6(VAR_8,
        "setting bus width to %d bits %s timing\n",
        (VAR_11->bus_width == VAR_5) ? 4 :
        (VAR_11->bus_width == VAR_6) ? 8 : 1,
        FUNC_11(VAR_14));
   }
   if (FUNC_9(VAR_10, VAR_11, VAR_14) !=
       VAR_1) {
    FUNC_6(VAR_8, "Card at relative "
        "address %d failed to set bus width\n",
        VAR_13);
    return (VAR_0);
   }
   FUNC_13(VAR_8, VAR_11->bus_width);
   FUNC_14(VAR_8);
   if (FUNC_10(VAR_10, VAR_11, VAR_14) != VAR_1) {
    FUNC_6(VAR_8, "Failed to set VCCQ "
        "for card at relative address %d\n", VAR_13);
    return (VAR_0);
   }
   if (VAR_14 >= VAR_4 &&
       FUNC_7(VAR_8, VAR_9, 1) != 0) {
    FUNC_6(VAR_8, "Card at relative "
        "address %d failed to re-tune\n", VAR_13);
    return (VAR_0);
   }
  }
 } else {



  if (VAR_10->last_rca != 0) {
   if (FUNC_8(VAR_10, 0) != VAR_1)
    return (VAR_0);
   VAR_10->last_rca = 0;
  }
 }

 return (0);
}
