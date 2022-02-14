
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_softc {int retune_needed; scalar_t__ retune_paused; } ;
struct mmc_ivars {int dummy; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;
typedef scalar_t__ device_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct mmc_ivars* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct mmc_softc* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct mmc_softc*,struct mmc_ivars*,int ) ;
 scalar_t__ FUNC_4 (struct mmc_softc*,struct mmc_ivars*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, device_t VAR_6, bool VAR_7)
{
 struct mmc_softc *VAR_8;
 struct mmc_ivars *VAR_9;
 int VAR_10;
 uint32_t VAR_11;
 enum mmc_bus_timing VAR_12;

 if (FUNC_1(VAR_6) != VAR_5)
  return (VAR_2);

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8->retune_needed != 1 && VAR_8->retune_paused != 0)
  return (VAR_2);

 VAR_12 = FUNC_6(VAR_5);
 if (VAR_12 == VAR_4) {
  if (VAR_7 == 0)
   return (0);
  VAR_9 = FUNC_0(VAR_6);
  VAR_11 = FUNC_5(VAR_5);
  if (FUNC_3(VAR_8, VAR_9, VAR_11) != VAR_3)
   return (VAR_0);
 }
 VAR_10 = FUNC_7(VAR_5, VAR_7);
 if (VAR_10 != 0 && VAR_12 == VAR_4)
  return (VAR_0);
 switch (VAR_10) {
 case 0:
  break;
 case 128:
  return (VAR_1);
 default:
  return (VAR_2);
 }
 if (VAR_12 == VAR_4) {
  if (FUNC_4(VAR_8, VAR_9, VAR_11, VAR_12) !=
      VAR_3)
   return (VAR_0);
 }
 return (VAR_3);
}
