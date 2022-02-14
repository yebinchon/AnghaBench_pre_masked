
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct mpt_user_raid_action_result {int action_data; int action_status; int volume_status; } ;
struct mpt_softc {int dummy; } ;
struct mpt_raid_action {scalar_t__ len; int action_data; int action_status; int volume_status; int ioc_status; scalar_t__ write; int phys_disk_num; int volume_bus; int volume_id; int action_data_word; int action; } ;
struct mpt_page_memory {int paddr; int map; int tag; int * vaddr; } ;
struct TYPE_11__ {int index; int IOCStatus; TYPE_3__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_13__ {void* MsgContext; int ActionDataSGE; int PhysDiskNum; int VolumeBus; int VolumeID; int Function; int ActionDataWord; int Action; } ;
struct TYPE_12__ {int FlagsLength; void* Address; } ;
typedef TYPE_2__ SGE_SIMPLE32 ;
typedef TYPE_3__ MSG_RAID_ACTION_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct mpt_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 int FUNC_9 (struct mpt_softc*) ;
 int FUNC_10 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (struct mpt_softc*,int ) ;
 int FUNC_12 (struct mpt_softc*,char*) ;
 int FUNC_13 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_14 (struct mpt_softc*,TYPE_1__*,int ,int ,int ,int) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_15(struct mpt_softc *VAR_17, struct mpt_raid_action *VAR_18,
 struct mpt_page_memory *VAR_19)
{
 request_t *VAR_20;
 struct mpt_user_raid_action_result *VAR_21;
 MSG_RAID_ACTION_REQUEST *VAR_22;
 SGE_SIMPLE32 *VAR_23;
 int VAR_24;

 VAR_20 = FUNC_11(VAR_17, VAR_15);
 if (VAR_20 == ((void*)0))
  return (VAR_4);
 VAR_22 = VAR_20->req_vbuf;
 FUNC_8(VAR_22, 0, sizeof *VAR_22);
 VAR_22->Action = VAR_18->action;
 VAR_22->ActionDataWord = VAR_18->action_data_word;
 VAR_22->Function = VAR_5;
 VAR_22->VolumeID = VAR_18->volume_id;
 VAR_22->VolumeBus = VAR_18->volume_bus;
 VAR_22->PhysDiskNum = VAR_18->phys_disk_num;
 VAR_23 = (SGE_SIMPLE32 *)&VAR_22->ActionDataSGE;
 if (VAR_19->vaddr != ((void*)0) && VAR_18->len != 0) {
  FUNC_4(VAR_19->tag, VAR_19->map,
      VAR_2 | VAR_3);
  VAR_23->Address = FUNC_6(VAR_19->paddr);
  FUNC_1(VAR_23, FUNC_7(VAR_18->len));
  FUNC_0(VAR_23, (VAR_13 |
      VAR_12 | VAR_8 |
      VAR_9 |
      (VAR_18->write ? VAR_10 :
      VAR_11)));
 }
 VAR_23->FlagsLength = FUNC_6(VAR_23->FlagsLength);
 VAR_22->MsgContext = FUNC_6(VAR_20->index | VAR_16);

 FUNC_9(VAR_17);
 FUNC_13(VAR_17, VAR_20);

 VAR_24 = FUNC_14(VAR_17, VAR_20, VAR_14, VAR_14, VAR_15,
     2000);
 if (VAR_24 != 0) {



  FUNC_12(VAR_17, "mpt_user_raid_action timed out\n");
  return (VAR_24);
 }

 VAR_18->ioc_status = FUNC_5(VAR_20->IOCStatus);
 if ((VAR_20->IOCStatus & VAR_6) != VAR_7) {
  FUNC_10(VAR_17, VAR_20);
  return (0);
 }

 VAR_21 = (struct mpt_user_raid_action_result *)
     (((uint8_t *)VAR_20->req_vbuf) + FUNC_2(VAR_17));
 VAR_18->volume_status = VAR_21->volume_status;
 VAR_18->action_status = VAR_21->action_status;
 FUNC_3(VAR_21->action_data, VAR_18->action_data,
     sizeof(VAR_21->action_data));
 if (VAR_19->vaddr != ((void*)0))
  FUNC_4(VAR_19->tag, VAR_19->map,
      VAR_0 | VAR_1);
 FUNC_10(VAR_17, VAR_20);
 return (0);
}
