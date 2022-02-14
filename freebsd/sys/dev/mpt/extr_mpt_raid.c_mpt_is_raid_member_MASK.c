
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ target_id_t ;
struct mpt_softc {struct mpt_raid_disk* raid_disks; TYPE_2__* ioc_page2; } ;
struct TYPE_3__ {scalar_t__ PhysDiskID; } ;
struct mpt_raid_disk {int flags; TYPE_1__ config_page; } ;
struct TYPE_4__ {int MaxPhysDisks; } ;


 int VAR_0 ;

int
FUNC_0(struct mpt_softc *VAR_1, target_id_t VAR_2)
{
 struct mpt_raid_disk *VAR_3;
 int VAR_4;

 if (VAR_1->ioc_page2 == ((void*)0) || VAR_1->ioc_page2->MaxPhysDisks == 0)
  return (0);
 for (VAR_4 = 0; VAR_4 < VAR_1->ioc_page2->MaxPhysDisks; VAR_4++) {
  VAR_3 = &VAR_1->raid_disks[VAR_4];
  if ((VAR_3->flags & VAR_0) != 0 &&
      VAR_3->config_page.PhysDiskID == VAR_2)
   return (1);
 }
 return (0);

}
