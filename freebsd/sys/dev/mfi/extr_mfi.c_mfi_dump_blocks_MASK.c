
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union mfi_frame {int dummy; } mfi_frame ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct mfi_softc {int mfi_buffer_dmat; int mfi_dev; } ;
struct TYPE_5__ {int target_id; int data_len; int sense_len; scalar_t__ scsi_status; scalar_t__ flags; scalar_t__ timeout; int cmd; } ;
struct mfi_io_frame {int lba_hi; int lba_lo; int sgl; void* sense_addr_hi; void* sense_addr_lo; TYPE_2__ header; } ;
struct mfi_command {int cm_len; int cm_flags; int cm_dmamap; int cm_total_frame_size; int * cm_sg; void* cm_data; scalar_t__ cm_sense_busaddr; TYPE_3__* cm_frame; } ;
struct TYPE_4__ {void* context; } ;
struct TYPE_6__ {struct mfi_io_frame io; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ) ;
 struct mfi_command* FUNC_5 (struct mfi_softc*) ;
 int FUNC_6 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_7 (struct mfi_command*) ;

int
FUNC_8(struct mfi_softc *VAR_8, int VAR_9, uint64_t VAR_10, void *VAR_11,
     int VAR_12)
{
 struct mfi_command *VAR_13;
 struct mfi_io_frame *VAR_14;
 int VAR_15;
 uint32_t VAR_16 = 0;

 if ((VAR_13 = FUNC_5(VAR_8)) == ((void*)0))
  return (VAR_1);


 VAR_16 = VAR_13->cm_frame->header.context;
 FUNC_2(VAR_13->cm_frame, sizeof(union mfi_frame));
 VAR_13->cm_frame->header.context = VAR_16;

 VAR_14 = &VAR_13->cm_frame->io;
 VAR_14->header.cmd = VAR_3;
 VAR_14->header.target_id = VAR_9;
 VAR_14->header.timeout = 0;
 VAR_14->header.flags = 0;
 VAR_14->header.scsi_status = 0;
 VAR_14->header.sense_len = VAR_7;
 VAR_14->header.data_len = FUNC_4(VAR_12, VAR_6);
 VAR_14->sense_addr_lo = (uint32_t)VAR_13->cm_sense_busaddr;
 VAR_14->sense_addr_hi = (uint32_t)((uint64_t)VAR_13->cm_sense_busaddr >> 32);
 VAR_14->lba_hi = (VAR_10 & 0xffffffff00000000) >> 32;
 VAR_14->lba_lo = VAR_10 & 0xffffffff;
 VAR_13->cm_data = VAR_11;
 VAR_13->cm_len = VAR_12;
 VAR_13->cm_sg = &VAR_14->sgl;
 VAR_13->cm_total_frame_size = VAR_5;
 VAR_13->cm_flags = VAR_4 | VAR_2;

 if ((VAR_15 = FUNC_6(VAR_8, VAR_13)) != 0)
  FUNC_3(VAR_8->mfi_dev, "failed dump blocks\n");
 FUNC_0(VAR_8->mfi_buffer_dmat, VAR_13->cm_dmamap,
     VAR_0);
 FUNC_1(VAR_8->mfi_buffer_dmat, VAR_13->cm_dmamap);
 FUNC_7(VAR_13);

 return (VAR_15);
}
