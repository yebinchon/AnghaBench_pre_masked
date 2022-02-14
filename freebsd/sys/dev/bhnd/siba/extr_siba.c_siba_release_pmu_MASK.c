
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siba_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ pwrctl; } ;
struct siba_devinfo {int pmu_state; TYPE_1__ pmu; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct siba_softc*) ;




 int FUNC_2 (struct siba_softc*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 struct siba_devinfo* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 struct siba_softc* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4, device_t VAR_5)
{
 struct siba_softc *VAR_6;
 struct siba_devinfo *VAR_7;
 device_t VAR_8;
 int VAR_9;

 if (FUNC_8(VAR_5) != VAR_4)
  return (VAR_2);

 VAR_6 = FUNC_9(VAR_4);
 VAR_7 = FUNC_6(VAR_5);

 FUNC_1(VAR_6);
 switch(VAR_7->pmu_state) {
 case 129:
  FUNC_10("pmu over-release for %s", FUNC_7(VAR_5));
  FUNC_2(VAR_6);
  return (VAR_3);

 case 131:
  FUNC_2(VAR_6);
  return (FUNC_3(VAR_4, VAR_5));

 case 128:


  VAR_8 = VAR_7->pmu.pwrctl;
  VAR_9 = FUNC_4(VAR_8, VAR_5,
      VAR_0);
  if (VAR_9) {
   FUNC_2(VAR_6);
   return (VAR_9);
  }


  VAR_7->pmu_state = 129;
  VAR_7->pmu.pwrctl = ((void*)0);
  FUNC_2(VAR_6);


  FUNC_5(VAR_5, VAR_8, VAR_1);
  return (0);

 case 130:

  FUNC_0(VAR_7->pmu.pwrctl == ((void*)0),
      ("PWRCTL reference with FIXED state"));

  VAR_7->pmu_state = 129;
  VAR_7->pmu.pwrctl = ((void*)0);
  FUNC_2(VAR_6);
 }

 FUNC_10("invalid PMU state: %d", VAR_7->pmu_state);
}
