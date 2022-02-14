
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct siba_softc {int dummy; } ;
struct TYPE_2__ {int pwrctl; } ;
struct siba_devinfo {int pmu_state; TYPE_1__ pmu; } ;
typedef scalar_t__ device_t ;
typedef int bhnd_clock ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct siba_softc*) ;




 int FUNC_1 (struct siba_softc*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 struct siba_devinfo* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct siba_softc* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3, device_t VAR_4, bhnd_clock VAR_5,
    u_int *VAR_6)
{
 struct siba_softc *VAR_7;
 struct siba_devinfo *VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_4) != VAR_3)
  return (VAR_0);

 VAR_7 = FUNC_6(VAR_3);
 VAR_8 = FUNC_4(VAR_4);

 FUNC_0(VAR_7);
 switch(VAR_8->pmu_state) {
 case 129:
  FUNC_7("no active PMU request state");

  FUNC_1(VAR_7);
  return (VAR_2);

 case 131:
  FUNC_1(VAR_7);
  return (FUNC_2(VAR_3, VAR_4, VAR_5,
      VAR_6));

 case 128:
   VAR_9 = FUNC_3(VAR_8->pmu.pwrctl, VAR_5,
      VAR_6);
   FUNC_1(VAR_7);

   return (VAR_9);

 case 130:
  FUNC_1(VAR_7);



  switch (VAR_5) {
  case 132:
   *VAR_6 = 0;
   return (0);

  default:
   return (VAR_1);
  }

  return (VAR_1);
 }

 FUNC_7("invalid PMU state: %d", VAR_8->pmu_state);
}
