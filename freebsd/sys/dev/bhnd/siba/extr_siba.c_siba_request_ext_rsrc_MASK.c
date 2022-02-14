
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_softc {int dummy; } ;
struct siba_devinfo {int pmu_state; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct siba_softc*) ;




 int FUNC_1 (struct siba_softc*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 struct siba_devinfo* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct siba_softc* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3, device_t VAR_4, u_int VAR_5)
{
 struct siba_softc *VAR_6;
 struct siba_devinfo *VAR_7;

 if (FUNC_4(VAR_4) != VAR_3)
  return (VAR_0);

 VAR_6 = FUNC_5(VAR_3);
 VAR_7 = FUNC_3(VAR_4);

 FUNC_0(VAR_6);
 switch(VAR_7->pmu_state) {
 case 129:
  FUNC_6("no active PMU request state");

  FUNC_1(VAR_6);
  return (VAR_2);

 case 131:
  FUNC_1(VAR_6);
  return (FUNC_2(VAR_3, VAR_4, VAR_5));

 case 128:
 case 130:

  FUNC_1(VAR_6);
  return (VAR_1);
 }

 FUNC_6("invalid PMU state: %d", VAR_7->pmu_state);
}
