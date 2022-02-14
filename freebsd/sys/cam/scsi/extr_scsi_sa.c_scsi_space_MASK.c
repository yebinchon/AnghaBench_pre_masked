
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_space {scalar_t__ control; int count; int code; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
typedef int scsi_space_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_2, u_int32_t VAR_3,
    void (*VAR_4)(struct cam_periph *, union ccb *),
    u_int8_t VAR_5, scsi_space_code VAR_6,
    u_int32_t VAR_7, u_int8_t VAR_8, u_int32_t VAR_9)
{
 struct scsi_space *VAR_10;

 VAR_10 = (struct scsi_space *)&VAR_2->cdb_io.cdb_bytes;
 VAR_10->opcode = VAR_1;
 VAR_10->code = VAR_6;
 FUNC_1(VAR_7, VAR_10->count);
 VAR_10->control = 0;

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5, ((void*)0),
     0, VAR_8, sizeof(*VAR_10), VAR_9);
}
