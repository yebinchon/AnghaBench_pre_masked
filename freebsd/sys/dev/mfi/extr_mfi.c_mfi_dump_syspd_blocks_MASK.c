
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct mfi_softc {int mfi_buffer_dmat; int mfi_dev; } ;
struct TYPE_4__ {int target_id; int data_len; int cdb_len; int sense_len; scalar_t__ scsi_status; scalar_t__ flags; scalar_t__ timeout; int cmd; } ;
struct mfi_pass_frame {int sgl; void* sense_addr_hi; void* sense_addr_lo; TYPE_2__ header; int cdb; } ;
struct mfi_command {int cm_len; int cm_flags; int cm_dmamap; int cm_total_frame_size; int * cm_sg; void* cm_data; scalar_t__ cm_sense_busaddr; TYPE_1__* cm_frame; } ;
struct TYPE_3__ {struct mfi_pass_frame pass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ,int,void*,int ) ;
 struct mfi_command* FUNC_6 (struct mfi_softc*) ;
 int FUNC_7 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_8 (struct mfi_command*) ;

int
FUNC_9(struct mfi_softc *VAR_9, int VAR_10, uint64_t VAR_11, void *VAR_12,
    int VAR_13)
{
 struct mfi_command *VAR_14;
 struct mfi_pass_frame *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19;

 if ((VAR_14 = FUNC_6(VAR_9)) == ((void*)0))
  return (VAR_1);

 VAR_15 = &VAR_14->cm_frame->pass;
 FUNC_2(VAR_15->cdb, 16);
 VAR_15->header.cmd = VAR_3;

 VAR_17 = 0;
 VAR_19 = FUNC_4(VAR_13, VAR_7);
 VAR_18 = FUNC_5(VAR_17, 0, VAR_11, VAR_19, VAR_15->cdb);
 VAR_15->header.target_id = VAR_10;
 VAR_15->header.timeout = 0;
 VAR_15->header.flags = 0;
 VAR_15->header.scsi_status = 0;
 VAR_15->header.sense_len = VAR_8;
 VAR_15->header.data_len = VAR_13;
 VAR_15->header.cdb_len = VAR_18;
 VAR_15->sense_addr_lo = (uint32_t)VAR_14->cm_sense_busaddr;
 VAR_15->sense_addr_hi = (uint32_t)((uint64_t)VAR_14->cm_sense_busaddr >> 32);
 VAR_14->cm_data = VAR_12;
 VAR_14->cm_len = VAR_13;
 VAR_14->cm_sg = &VAR_15->sgl;
 VAR_14->cm_total_frame_size = VAR_6;
 VAR_14->cm_flags = VAR_4 | VAR_2 | VAR_5;

 if ((VAR_16 = FUNC_7(VAR_9, VAR_14)) != 0)
  FUNC_3(VAR_9->mfi_dev, "failed dump blocks\n");
 FUNC_0(VAR_9->mfi_buffer_dmat, VAR_14->cm_dmamap,
     VAR_0);
 FUNC_1(VAR_9->mfi_buffer_dmat, VAR_14->cm_dmamap);
 FUNC_8(VAR_14);

 return (VAR_16);
}
