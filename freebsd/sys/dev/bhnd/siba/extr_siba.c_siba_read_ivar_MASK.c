
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct siba_softc {int dummy; } ;
struct TYPE_4__ {int bhnd_info; } ;
struct bhnd_core_info {uintptr_t vendor; uintptr_t device; uintptr_t hwrev; uintptr_t core_idx; uintptr_t unit; } ;
struct TYPE_3__ {struct bhnd_core_info core_info; } ;
struct siba_devinfo {int pmu_state; TYPE_2__ pmu; TYPE_1__ core_id; } ;
typedef int device_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct siba_softc*) ;




 int FUNC_1 (struct siba_softc*) ;
 uintptr_t FUNC_2 (struct bhnd_core_info const*) ;
 int FUNC_3 (struct bhnd_core_info const*) ;
 int FUNC_4 (uintptr_t) ;
 struct siba_devinfo* FUNC_5 (int ) ;
 struct siba_softc* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t *VAR_5)
{
 struct siba_softc *VAR_6;
 const struct siba_devinfo *VAR_7;
 const struct bhnd_core_info *VAR_8;

 VAR_6 = FUNC_6(VAR_2);
 VAR_7 = FUNC_5(VAR_3);
 VAR_8 = &VAR_7->core_id.core_info;

 switch (VAR_4) {
 case 133:
  *VAR_5 = VAR_8->vendor;
  return (0);
 case 138:
  *VAR_5 = VAR_8->device;
  return (0);
 case 135:
  *VAR_5 = VAR_8->hwrev;
  return (0);
 case 137:
  *VAR_5 = FUNC_2(VAR_8);
  return (0);
 case 132:
  *VAR_5 = (uintptr_t) FUNC_4(VAR_8->vendor);
  return (0);
 case 136:
  *VAR_5 = (uintptr_t) FUNC_3(VAR_8);
  return (0);
 case 140:
  *VAR_5 = VAR_8->core_idx;
  return (0);
 case 139:
  *VAR_5 = VAR_8->unit;
  return (0);
 case 134:
  FUNC_0(VAR_6);
  switch (VAR_7->pmu_state) {
  case 129:
   *VAR_5 = (uintptr_t)((void*)0);
   FUNC_1(VAR_6);
   return (0);

  case 131:
   *VAR_5 = (uintptr_t)VAR_7->pmu.bhnd_info;
   FUNC_1(VAR_6);
   return (0);

  case 128:
  case 130:
   *VAR_5 = (uintptr_t)((void*)0);
   FUNC_1(VAR_6);
   return (0);
  }

  FUNC_7("invalid PMU state: %d", VAR_7->pmu_state);
  return (VAR_1);

 default:
  return (VAR_0);
 }
}
