
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siba_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ pwrctl; } ;
struct siba_devinfo {scalar_t__ pmu_state; TYPE_1__ pmu; } ;
struct chipc_caps {scalar_t__ pwr_ctrl; scalar_t__ pmu; } ;
typedef scalar_t__ siba_pmu_state ;
typedef scalar_t__ device_t ;
typedef int ccaps ;


 struct chipc_caps* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct siba_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct siba_softc*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 struct siba_devinfo* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct siba_softc* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (struct chipc_caps*,int ,int) ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_8, device_t VAR_9)
{
 struct siba_softc *VAR_10;
 struct siba_devinfo *VAR_11;
 device_t VAR_12;
 device_t VAR_13;
 struct chipc_caps VAR_14;
 siba_pmu_state VAR_15;
 int VAR_16;

 if (FUNC_9(VAR_9) != VAR_8)
  return (VAR_2);

 VAR_10 = FUNC_10(VAR_8);
 VAR_11 = FUNC_7(VAR_9);
 VAR_13 = ((void*)0);


 VAR_12 = FUNC_6(VAR_9, VAR_0);
 if (VAR_12 != ((void*)0)) {
  VAR_14 = *FUNC_0(VAR_12);
  FUNC_5(VAR_9, VAR_12, VAR_0);
 } else {
  FUNC_12(&VAR_14, 0, sizeof(VAR_14));
 }



 if (VAR_14.pmu) {
  if ((VAR_16 = FUNC_4(VAR_8, VAR_9)))
   return (VAR_16);

  FUNC_1(VAR_11->pmu_state == VAR_4,
      ("unexpected PMU state: %d", VAR_11->pmu_state));

  return (0);
 }







 if (VAR_14.pwr_ctrl) {
  VAR_15 = VAR_7;
  VAR_13 = FUNC_6(VAR_9, VAR_1);
  if (VAR_13 == ((void*)0)) {
   FUNC_11(VAR_8, "PWRCTL not found\n");
   return (VAR_3);
  }
 } else {
  VAR_15 = VAR_5;
  VAR_13 = ((void*)0);
 }

 FUNC_2(VAR_10);


 if (VAR_11->pmu_state != VAR_6) {
  FUNC_13("duplicate PMU allocation for %s",
      FUNC_8(VAR_9));
 }



 VAR_11->pmu_state = VAR_15;
 VAR_11->pmu.pwrctl = VAR_13;

 FUNC_3(VAR_10);

 return (0);
}
