
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int target_id; } ;
union ccb {TYPE_2__ ccb_h; } ;
typedef int target_id_t ;
struct mpt_softc {scalar_t__ raid_max_disks; struct mpt_raid_disk* raid_disks; } ;
struct TYPE_3__ {int PhysDiskID; } ;
struct mpt_raid_disk {int flags; TYPE_1__ config_page; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpt_softc*,int ,char*,int) ;

cam_status
FUNC_1(struct mpt_softc *VAR_2, union ccb *VAR_3, target_id_t *VAR_4)
{
 struct mpt_raid_disk *VAR_5;

 VAR_5 = VAR_2->raid_disks + VAR_3->ccb_h.target_id;
 if (VAR_3->ccb_h.target_id < VAR_2->raid_max_disks
  && (VAR_5->flags & VAR_1) != 0) {
  *VAR_4 = VAR_5->config_page.PhysDiskID;
  return (0);
 }
 FUNC_0(VAR_2, VAR_0, "mpt_map_physdisk(%d) - Not Active\n",
   VAR_3->ccb_h.target_id);
 return (-1);
}
