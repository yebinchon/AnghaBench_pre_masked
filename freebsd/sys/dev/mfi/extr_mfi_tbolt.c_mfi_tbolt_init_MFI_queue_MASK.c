
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int data_len; int cmd_status; int cmd; int flags; } ;
struct mfi_init_frame {TYPE_3__ header; void* qinfo_new_addr_hi; void* qinfo_new_addr_lo; void* driver_ver_hi; void* driver_ver_lo; } ;
struct TYPE_5__ {scalar_t__ context; } ;
union mfi_frame {struct mfi_init_frame init; TYPE_1__ header; } ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
struct mfi_softc {int MFA_enabled; int raid_io_msg_size; uintptr_t request_message_pool; uintptr_t request_message_pool_align; int mfi_dev; scalar_t__ mfi_tb_ioc_init_busaddr; scalar_t__ verbuf_h_busaddr; scalar_t__ verbuf; scalar_t__ mfi_tb_busaddr; scalar_t__ reply_frame_pool_align; scalar_t__ mfi_max_fw_cmds; scalar_t__ mfi_tb_ioc_init_desc; int mfi_tb_init_dmamap; scalar_t__ mfi_tb_init_busaddr; scalar_t__ mfi_tb_init; int mfi_io_lock; } ;
struct mfi_command {int cm_dmamap; scalar_t__ cm_frame_busaddr; union mfi_frame* cm_frame; void* cm_timestamp; int cm_flags; int * cm_data; } ;
struct MPI2_IOC_INIT_REQUEST {int SystemRequestFrameSize; void* TimeStamp; scalar_t__ ReplyFreeQueueAddress; int SystemRequestFrameBaseAddress; int ReplyDescriptorPostQueueAddress; scalar_t__ ReplyFreeQueueDepth; scalar_t__ ReplyDescriptorPostQueueDepth; int HeaderVersion; int MsgVersion; int WhoInit; int Function; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_6__ {void* addressHigh; void* addressLow; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef TYPE_4__ MFI_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct MPI2_IOC_INIT_REQUEST*,int) ;
 int FUNC_1 (int ,char*,...) ;
 struct mfi_command* FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_4 (struct mfi_command*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 void* VAR_12 ;

int
FUNC_8(struct mfi_softc *VAR_13)
{
 struct MPI2_IOC_INIT_REQUEST *VAR_14;
 struct mfi_init_frame *VAR_15;
 uintptr_t VAR_16 = 0;
 bus_addr_t VAR_17;
 MFI_ADDRESS *VAR_18;
 struct mfi_command *VAR_19, VAR_20;
 int VAR_21;

 FUNC_5(&VAR_13->mfi_io_lock, VAR_1);


 if (VAR_13->MFA_enabled) {
  FUNC_1(VAR_13->mfi_dev, "tbolt_init already initialised!\n");
  return 1;
 }

 if ((VAR_19 = FUNC_2(VAR_13)) == ((void*)0)) {
  FUNC_1(VAR_13->mfi_dev, "tbolt_init failed to get command "
      " entry!\n");
  return (VAR_0);
 }

 VAR_20.cm_frame = VAR_19->cm_frame;
 VAR_20.cm_frame_busaddr = VAR_19->cm_frame_busaddr;
 VAR_20.cm_dmamap = VAR_19->cm_dmamap;

 VAR_19->cm_frame = (union mfi_frame *)((uintptr_t)VAR_13->mfi_tb_init);
 VAR_19->cm_frame_busaddr = VAR_13->mfi_tb_init_busaddr;
 VAR_19->cm_dmamap = VAR_13->mfi_tb_init_dmamap;
 VAR_19->cm_frame->header.context = 0;





 VAR_15 = &VAR_19->cm_frame->init;

 VAR_14 = (struct MPI2_IOC_INIT_REQUEST *)VAR_13->mfi_tb_ioc_init_desc;
 FUNC_0(VAR_14, sizeof(struct MPI2_IOC_INIT_REQUEST));
 VAR_14->Function = VAR_8;
 VAR_14->WhoInit = VAR_11;


 VAR_14->MsgVersion = VAR_10;
 VAR_14->HeaderVersion = VAR_9;
 VAR_14->SystemRequestFrameSize = VAR_13->raid_io_msg_size/4;
 VAR_14->ReplyDescriptorPostQueueDepth
     = (uint16_t)VAR_13->mfi_max_fw_cmds;
 VAR_14->ReplyFreeQueueDepth = 0;


 VAR_16 = (uintptr_t) VAR_13->reply_frame_pool_align
     - (uintptr_t)VAR_13->request_message_pool;
 VAR_17 = VAR_13->mfi_tb_busaddr + VAR_16;
 VAR_18 =
     (MFI_ADDRESS *)&VAR_14->ReplyDescriptorPostQueueAddress;
 VAR_18->u.addressLow = (uint32_t)VAR_17;
 VAR_18->u.addressHigh = (uint32_t)((uint64_t)VAR_17 >> 32);


 VAR_16 = VAR_13->request_message_pool_align - VAR_13->request_message_pool;
 VAR_17 = VAR_13->mfi_tb_busaddr + VAR_16;
 VAR_18 = (MFI_ADDRESS *)&VAR_14->SystemRequestFrameBaseAddress;
 VAR_18->u.addressLow = (uint32_t)VAR_17;
 VAR_18->u.addressHigh = (uint32_t)((uint64_t)VAR_17 >> 32);
 VAR_14->ReplyFreeQueueAddress = 0;
 VAR_14->TimeStamp = VAR_12;

 if (VAR_13->verbuf) {
  FUNC_6((char *)VAR_13->verbuf, FUNC_7(VAR_2) + 2, "%s\n",
                VAR_2);
  VAR_15->driver_ver_lo = (uint32_t)VAR_13->verbuf_h_busaddr;
  VAR_15->driver_ver_hi =
      (uint32_t)((uint64_t)VAR_13->verbuf_h_busaddr >> 32);
 }

 VAR_17 = VAR_13->mfi_tb_ioc_init_busaddr;
 VAR_15->qinfo_new_addr_lo = (uint32_t)VAR_17;
 VAR_15->qinfo_new_addr_hi = (uint32_t)((uint64_t)VAR_17 >> 32);
 VAR_15->header.flags |= VAR_5;

 VAR_15->header.cmd = VAR_3;
 VAR_15->header.data_len = sizeof(struct MPI2_IOC_INIT_REQUEST);
 VAR_15->header.cmd_status = VAR_6;

 VAR_19->cm_data = ((void*)0);
 VAR_19->cm_flags |= VAR_4;
 VAR_19->cm_timestamp = VAR_12;
 if ((VAR_21 = FUNC_3(VAR_13, VAR_19)) != 0) {
  FUNC_1(VAR_13->mfi_dev, "failed to send IOC init2 "
      "command %d at %lx\n", VAR_21, (long)VAR_19->cm_frame_busaddr);
  goto out;
 }

 if (VAR_15->header.cmd_status == VAR_7) {
  VAR_13->MFA_enabled = 1;
 } else {
  FUNC_1(VAR_13->mfi_dev, "Init command Failed %#x\n",
      VAR_15->header.cmd_status);
  VAR_21 = VAR_15->header.cmd_status;
  goto out;
 }

out:
 VAR_19->cm_frame = VAR_20.cm_frame;
 VAR_19->cm_frame_busaddr = VAR_20.cm_frame_busaddr;
 VAR_19->cm_dmamap = VAR_20.cm_dmamap;
 FUNC_4(VAR_19);

 return (VAR_21);

}
