
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union mfi_frame {int dummy; } mfi_frame ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct mfi_softc {int mfi_io_lock; } ;
struct TYPE_6__ {uintptr_t target_id; int cdb_len; int data_len; int sense_len; scalar_t__ scsi_status; int flags; scalar_t__ timeout; scalar_t__ lun_id; int cmd; } ;
struct mfi_pass_frame {int sgl; void* sense_addr_hi; void* sense_addr_lo; TYPE_2__ header; TYPE_3__* cdb; } ;
struct mfi_command {int cm_flags; int cm_total_frame_size; int * cm_sg; int cm_len; int cm_data; struct bio* cm_private; int cm_complete; scalar_t__ cm_sense_busaddr; TYPE_3__* cm_frame; } ;
struct bio {int bio_cmd; int bio_bcount; scalar_t__ bio_driver1; int bio_pblkno; } ;
struct TYPE_5__ {void* context; } ;
struct TYPE_7__ {struct mfi_pass_frame pass; TYPE_1__ header; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int,int ,int ,int,TYPE_3__*) ;
 struct mfi_command* FUNC_3 (struct mfi_softc*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_9 ;

__attribute__((used)) static struct mfi_command *
FUNC_6(struct mfi_softc *VAR_10, struct bio *VAR_11)
{
 struct mfi_command *VAR_12;
 struct mfi_pass_frame *VAR_13;
 uint32_t VAR_14 = 0;
 int VAR_15 = 0, VAR_16 = 0, VAR_17;
 uint8_t VAR_18;

 FUNC_4(&VAR_10->mfi_io_lock, VAR_0);

 if ((VAR_12 = FUNC_3(VAR_10)) == ((void*)0))
     return (((void*)0));


 VAR_14 = VAR_12->cm_frame->header.context;
 FUNC_0(VAR_12->cm_frame, sizeof(union mfi_frame));
 VAR_12->cm_frame->header.context = VAR_14;
 VAR_13 = &VAR_12->cm_frame->pass;
 FUNC_0(VAR_13->cdb, 16);
 VAR_13->header.cmd = VAR_4;
 switch (VAR_11->bio_cmd) {
 case 129:
  VAR_15 = VAR_2 | VAR_1;
  VAR_17 = 1;
  break;
 case 128:
  VAR_15 = VAR_3 | VAR_1;
  VAR_17 = 0;
  break;
 default:

  FUNC_5("Unsupported bio command %x\n", VAR_11->bio_cmd);
 }


 VAR_16 = FUNC_1(VAR_11->bio_bcount, VAR_6);

 VAR_18 = FUNC_2(VAR_17, 0, VAR_11->bio_pblkno, VAR_16,
     VAR_13->cdb);
 VAR_13->header.target_id = (uintptr_t)VAR_11->bio_driver1;
 VAR_13->header.lun_id = 0;
 VAR_13->header.timeout = 0;
 VAR_13->header.flags = 0;
 VAR_13->header.scsi_status = 0;
 VAR_13->header.sense_len = VAR_7;
 VAR_13->header.data_len = VAR_11->bio_bcount;
 VAR_13->header.cdb_len = VAR_18;
 VAR_13->sense_addr_lo = (uint32_t)VAR_12->cm_sense_busaddr;
 VAR_13->sense_addr_hi = (uint32_t)((uint64_t)VAR_12->cm_sense_busaddr >> 32);
 VAR_12->cm_complete = VAR_8;
 VAR_12->cm_private = VAR_11;
 VAR_12->cm_data = VAR_9;
 VAR_12->cm_len = VAR_11->bio_bcount;
 VAR_12->cm_sg = &VAR_13->sgl;
 VAR_12->cm_total_frame_size = VAR_5;
 VAR_12->cm_flags = VAR_15;

 return (VAR_12);
}
