
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int raid_max_volumes; scalar_t__ raid_max_disks; struct mpt_raid_volume* ioc_page3; struct mpt_raid_volume* ioc_page2; struct mpt_raid_volume* raid_disks; struct mpt_raid_volume* raid_volumes; } ;
struct mpt_raid_volume {struct mpt_raid_volume* config_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_raid_volume*,int ) ;

void
FUNC_1(struct mpt_softc *VAR_1)
{

 if (VAR_1->raid_volumes) {
  struct mpt_raid_volume *VAR_2;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1->raid_max_volumes; VAR_3++) {
   VAR_2 = &VAR_1->raid_volumes[VAR_3];
   if (VAR_2->config_page) {
    FUNC_0(VAR_2->config_page, VAR_0);
    VAR_2->config_page = ((void*)0);
   }
  }
  FUNC_0(VAR_1->raid_volumes, VAR_0);
  VAR_1->raid_volumes = ((void*)0);
 }
 if (VAR_1->raid_disks) {
  FUNC_0(VAR_1->raid_disks, VAR_0);
  VAR_1->raid_disks = ((void*)0);
 }
 if (VAR_1->ioc_page2) {
  FUNC_0(VAR_1->ioc_page2, VAR_0);
  VAR_1->ioc_page2 = ((void*)0);
 }
 if (VAR_1->ioc_page3) {
  FUNC_0(VAR_1->ioc_page3, VAR_0);
  VAR_1->ioc_page3 = ((void*)0);
 }
 VAR_1->raid_max_volumes = 0;
 VAR_1->raid_max_disks = 0;
}
