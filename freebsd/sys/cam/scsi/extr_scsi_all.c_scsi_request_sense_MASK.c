
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_request_sense {int length; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_request_sense*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,void*,int ,int ,int,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_2, u_int32_t VAR_3,
     void (*VAR_4)(struct cam_periph *, union ccb *),
     void *VAR_5, u_int8_t VAR_6, u_int8_t VAR_7,
     u_int8_t VAR_8, u_int32_t VAR_9)
{
 struct scsi_request_sense *VAR_10;

 FUNC_1(VAR_2,
        VAR_3,
        VAR_4,
        VAR_0,
        VAR_7,
        VAR_5,
        VAR_6,
        VAR_8,
        sizeof(*VAR_10),
        VAR_9);

 VAR_10 = (struct scsi_request_sense *)&VAR_2->cdb_io.cdb_bytes;
 FUNC_0(VAR_10, sizeof(*VAR_10));
 VAR_10->opcode = VAR_1;
 VAR_10->length = VAR_6;
}
