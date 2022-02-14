
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_core_info {uintptr_t vendor; uintptr_t device; uintptr_t hwrev; uintptr_t core_idx; uintptr_t unit; } ;
struct bcma_devinfo {int pmu_info; TYPE_1__* corecfg; } ;
typedef int device_t ;
struct TYPE_2__ {struct bhnd_core_info core_info; } ;
 int VAR_0 ;
 uintptr_t FUNC_0 (struct bhnd_core_info const*) ;
 int FUNC_1 (struct bhnd_core_info const*) ;
 int FUNC_2 (uintptr_t) ;
 struct bcma_devinfo* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 const struct bcma_devinfo *VAR_5;
 const struct bhnd_core_info *VAR_6;

 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = &VAR_5->corecfg->core_info;

 switch (VAR_3) {
 case 129:
  *VAR_4 = VAR_6->vendor;
  return (0);
 case 134:
  *VAR_4 = VAR_6->device;
  return (0);
 case 131:
  *VAR_4 = VAR_6->hwrev;
  return (0);
 case 133:
  *VAR_4 = FUNC_0(VAR_6);
  return (0);
 case 128:
  *VAR_4 = (uintptr_t) FUNC_2(VAR_6->vendor);
  return (0);
 case 132:
  *VAR_4 = (uintptr_t) FUNC_1(VAR_6);
  return (0);
 case 136:
  *VAR_4 = VAR_6->core_idx;
  return (0);
 case 135:
  *VAR_4 = VAR_6->unit;
  return (0);
 case 130:
  *VAR_4 = (uintptr_t) VAR_5->pmu_info;
  return (0);
 default:
  return (VAR_0);
 }
}
