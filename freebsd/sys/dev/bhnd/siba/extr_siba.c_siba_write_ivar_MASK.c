
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siba_softc {int dummy; } ;
struct TYPE_2__ {void* bhnd_info; } ;
struct siba_devinfo {int pmu_state; TYPE_1__ pmu; } ;
typedef int device_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct siba_softc*) ;




 int FUNC_1 (struct siba_softc*) ;
 struct siba_devinfo* FUNC_2 (int ) ;
 struct siba_softc* FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t VAR_6)
{
 struct siba_softc *VAR_7;
 struct siba_devinfo *VAR_8;

 VAR_7 = FUNC_3(VAR_3);
 VAR_8 = FUNC_2(VAR_4);

 switch (VAR_5) {
 case 133:
 case 138:
 case 135:
 case 137:
 case 132:
 case 136:
 case 140:
 case 139:
  return (VAR_0);
 case 134:
  FUNC_0(VAR_7);
  switch (VAR_8->pmu_state) {
  case 129:
  case 131:
   VAR_8->pmu.bhnd_info = (void *)VAR_6;
   VAR_8->pmu_state = 131;
   FUNC_1(VAR_7);
   return (0);

  case 128:
  case 130:
   FUNC_4("bhnd_set_pmu_info() called with siba PMU state "
       "%d", VAR_8->pmu_state);
   return (VAR_2);
  }

  FUNC_4("invalid PMU state: %d", VAR_8->pmu_state);
  return (VAR_2);

 default:
  return (VAR_1);
 }
}
