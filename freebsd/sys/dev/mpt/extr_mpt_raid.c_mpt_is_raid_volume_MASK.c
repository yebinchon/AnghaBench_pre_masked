
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ target_id_t ;
struct mpt_softc {TYPE_1__* ioc_page2; } ;
struct TYPE_4__ {scalar_t__ VolumeID; } ;
struct TYPE_3__ {scalar_t__ MaxPhysDisks; int NumActiveVolumes; TYPE_2__* RaidVolume; } ;
typedef TYPE_2__ CONFIG_PAGE_IOC_2_RAID_VOL ;



int
FUNC_0(struct mpt_softc *VAR_0, target_id_t VAR_1)
{
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_2;
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_3;

 if (VAR_0->ioc_page2 == ((void*)0) || VAR_0->ioc_page2->MaxPhysDisks == 0) {
  return (0);
 }
 VAR_2 = VAR_0->ioc_page2->RaidVolume;
 VAR_3 = VAR_2 + VAR_0->ioc_page2->NumActiveVolumes;
 for (;VAR_2 != VAR_3; VAR_2++) {
  if (VAR_2->VolumeID == VAR_1) {
   return (1);
  }
 }
 return (0);
}
