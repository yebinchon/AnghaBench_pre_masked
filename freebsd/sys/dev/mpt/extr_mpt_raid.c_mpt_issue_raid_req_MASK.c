
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct mpt_softc {int dummy; } ;
struct mpt_raid_volume {TYPE_1__* config_page; } ;
struct TYPE_13__ {int PhysDiskNum; } ;
struct mpt_raid_disk {TYPE_2__ config_page; } ;
struct TYPE_14__ {int index; TYPE_5__* req_vbuf; } ;
typedef TYPE_3__ request_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;
struct TYPE_16__ {int PhysDiskNum; void* MsgContext; int ActionDataSGE; int VolumeBus; int VolumeID; int Function; void* ActionDataWord; int Action; } ;
struct TYPE_15__ {int FlagsLength; void* Address; } ;
struct TYPE_12__ {int VolumeBus; int VolumeID; } ;
typedef TYPE_4__ SGE_SIMPLE32 ;
typedef TYPE_5__ MSG_RAID_ACTION_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_8 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (struct mpt_softc*) ;
 int FUNC_5 (struct mpt_softc*,TYPE_3__*) ;
 int FUNC_6 (struct mpt_softc*,TYPE_3__*,int ,int ,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_10, struct mpt_raid_volume *VAR_11,
     struct mpt_raid_disk *VAR_12, request_t *VAR_13, u_int VAR_14,
     uint32_t VAR_15, bus_addr_t VAR_16, bus_size_t VAR_17,
     int VAR_18, int VAR_19)
{
 MSG_RAID_ACTION_REQUEST *VAR_20;
 SGE_SIMPLE32 *VAR_21;

 VAR_20 = VAR_13->req_vbuf;
 FUNC_3(VAR_20, 0, sizeof *VAR_20);
 VAR_20->Action = VAR_14;
 VAR_20->ActionDataWord = FUNC_2(VAR_15);
 VAR_20->Function = VAR_1;
 VAR_20->VolumeID = VAR_11->config_page->VolumeID;
 VAR_20->VolumeBus = VAR_11->config_page->VolumeBus;
 if (VAR_12 != ((void*)0))
  VAR_20->PhysDiskNum = VAR_12->config_page.PhysDiskNum;
 else
  VAR_20->PhysDiskNum = 0xFF;
 VAR_21 = (SGE_SIMPLE32 *)&VAR_20->ActionDataSGE;
 VAR_21->Address = FUNC_2(VAR_16);
 FUNC_1(VAR_21, VAR_17);
 FUNC_0(VAR_21, (VAR_7 |
     VAR_6 | VAR_2 |
     VAR_3 |
     (VAR_18 ? VAR_4 : VAR_5)));
 VAR_21->FlagsLength = FUNC_2(VAR_21->FlagsLength);
 VAR_20->MsgContext = FUNC_2(VAR_13->index | VAR_9);

 FUNC_4(VAR_10);
 FUNC_5(VAR_10, VAR_13);

 if (VAR_19) {
  return (FUNC_6(VAR_10, VAR_13, VAR_8, VAR_8,
                     VAR_0, 2000));
 } else {
  return (0);
 }
}
