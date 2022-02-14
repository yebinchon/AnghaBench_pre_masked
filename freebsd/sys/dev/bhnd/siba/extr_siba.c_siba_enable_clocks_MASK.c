
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct siba_softc {int dummy; } ;
struct siba_devinfo {int pmu_state; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct siba_softc*) ;




 int FUNC_1 (struct siba_softc*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 struct siba_devinfo* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct siba_softc* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,char*,int ,int) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7, device_t VAR_8, uint32_t VAR_9)
{
 struct siba_softc *VAR_10;
 struct siba_devinfo *VAR_11;

 if (FUNC_5(VAR_8) != VAR_7)
  return (VAR_4);

 VAR_10 = FUNC_6(VAR_7);
 VAR_11 = FUNC_3(VAR_8);

 FUNC_0(VAR_10);
 switch(VAR_11->pmu_state) {
 case 129:
  FUNC_8("no active PMU request state");

  FUNC_1(VAR_10);
  return (VAR_6);

 case 131:
  FUNC_1(VAR_10);
  return (FUNC_2(VAR_7, VAR_8, VAR_9));

 case 128:
 case 130:
  FUNC_1(VAR_10);


  VAR_9 &= ~(VAR_1 |
       VAR_3 |
       VAR_0 |
       VAR_2);

  if (VAR_9 != 0) {
   FUNC_7(VAR_7, "%s requested unknown clocks: %#x\n",
       FUNC_4(VAR_8), VAR_9);
   return (VAR_5);
  }

  return (0);
 }

 FUNC_8("invalid PMU state: %d", VAR_11->pmu_state);
}
