
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_erase {int lun_imm_long; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_erase*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_4, u_int32_t VAR_5,
    void (*VAR_6)(struct cam_periph *, union ccb *),
    u_int8_t VAR_7, int VAR_8, int VAR_9,
    u_int8_t VAR_10, u_int32_t VAR_11)
{
 struct scsi_erase *VAR_12;

 VAR_12 = (struct scsi_erase *)&VAR_4->cdb_io.cdb_bytes;
 FUNC_0(VAR_12, sizeof(*VAR_12));

 VAR_12->opcode = VAR_1;

 if (VAR_8)
  VAR_12->lun_imm_long |= VAR_2;

 if (VAR_9)
  VAR_12->lun_imm_long |= VAR_3;

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0, VAR_7, ((void*)0),
     0, VAR_10, sizeof(*VAR_12), VAR_11);
}
