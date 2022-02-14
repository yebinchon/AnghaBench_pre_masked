
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
struct mfi_softc {int mfi_io_lock; } ;
struct TYPE_5__ {uintptr_t target_id; void* data_len; int sense_len; scalar_t__ scsi_status; int flags; scalar_t__ timeout; int cmd; } ;
struct mfi_io_frame {int lba_hi; int lba_lo; int sgl; void* sense_addr_hi; void* sense_addr_lo; TYPE_2__ header; } ;
struct mfi_command {int cm_flags; int cm_total_frame_size; int * cm_sg; int cm_len; int cm_data; struct bio* cm_private; int cm_complete; scalar_t__ cm_sense_busaddr; TYPE_3__* cm_frame; } ;
struct bio {int bio_cmd; int bio_pblkno; int bio_bcount; scalar_t__ bio_driver1; } ;
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
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,int) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_9 ;
 struct mfi_command* FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_10 ;

__attribute__((used)) static struct mfi_command *
FUNC_5(struct mfi_softc *VAR_11, struct bio *VAR_12)
{
 struct mfi_io_frame *VAR_13;
 struct mfi_command *VAR_14;
 int VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17 = 0;

 FUNC_3(&VAR_11->mfi_io_lock, VAR_0);

 if ((VAR_14 = FUNC_2(VAR_11)) == ((void*)0))
     return (((void*)0));


 VAR_17 = VAR_14->cm_frame->header.context;
 FUNC_0(VAR_14->cm_frame, sizeof(union mfi_frame));
 VAR_14->cm_frame->header.context = VAR_17;
 VAR_13 = &VAR_14->cm_frame->io;
 switch (VAR_12->bio_cmd) {
 case 129:
  VAR_13->header.cmd = VAR_4;
  VAR_15 = VAR_2 | VAR_1;
  break;
 case 128:
  VAR_13->header.cmd = VAR_5;
  VAR_15 = VAR_3 | VAR_1;
  break;
 default:

  FUNC_4("Unsupported bio command %x\n", VAR_12->bio_cmd);
 }


 VAR_16 = FUNC_1(VAR_12->bio_bcount, VAR_7);
 VAR_13->header.target_id = (uintptr_t)VAR_12->bio_driver1;
 VAR_13->header.timeout = 0;
 VAR_13->header.flags = 0;
 VAR_13->header.scsi_status = 0;
 VAR_13->header.sense_len = VAR_8;
 VAR_13->header.data_len = VAR_16;
 VAR_13->sense_addr_lo = (uint32_t)VAR_14->cm_sense_busaddr;
 VAR_13->sense_addr_hi = (uint32_t)((uint64_t)VAR_14->cm_sense_busaddr >> 32);
 VAR_13->lba_hi = (VAR_12->bio_pblkno & 0xffffffff00000000) >> 32;
 VAR_13->lba_lo = VAR_12->bio_pblkno & 0xffffffff;
 VAR_14->cm_complete = VAR_9;
 VAR_14->cm_private = VAR_12;
 VAR_14->cm_data = VAR_10;
 VAR_14->cm_len = VAR_12->bio_bcount;
 VAR_14->cm_sg = &VAR_13->sgl;
 VAR_14->cm_total_frame_size = VAR_6;
 VAR_14->cm_flags = VAR_15;

 return (VAR_14);
}
