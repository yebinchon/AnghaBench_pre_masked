
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_5__ {int Header; } ;
struct mpt_raid_disk {TYPE_3__ config_page; } ;
struct TYPE_4__ {int PhysDiskNum; } ;
typedef TYPE_1__ IOC_3_PHYS_DISK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct mpt_softc*,char*,int ) ;
 int FUNC_2 (struct mpt_softc*,int ,int ,int ,int *,int ,int) ;
 int FUNC_3 (struct mpt_softc*,int ,int *,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mpt_softc *VAR_2, struct mpt_raid_disk *VAR_3,
        IOC_3_PHYS_DISK *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0,
                   0, VAR_4->PhysDiskNum,
     &VAR_3->config_page.Header,
                 VAR_1, 5000);
 if (VAR_5 != 0) {
  FUNC_1(VAR_2, "mpt_refresh_raid_disk: "
   "Failed to read RAID Disk Hdr(%d)\n",
    VAR_4->PhysDiskNum);
  return;
 }
 VAR_5 = FUNC_3(VAR_2, VAR_4->PhysDiskNum,
       &VAR_3->config_page.Header,
       sizeof(VAR_3->config_page),
                   VAR_1, 5000);
 if (VAR_5 != 0)
  FUNC_1(VAR_2, "mpt_refresh_raid_disk: "
   "Failed to read RAID Disk Page(%d)\n",
    VAR_4->PhysDiskNum);
 FUNC_0(&VAR_3->config_page);
}
