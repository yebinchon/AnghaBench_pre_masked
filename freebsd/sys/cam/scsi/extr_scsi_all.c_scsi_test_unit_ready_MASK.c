
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_test_unit_ready {int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_test_unit_ready*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_2, u_int32_t VAR_3,
       void (*VAR_4)(struct cam_periph *, union ccb *),
       u_int8_t VAR_5, u_int8_t VAR_6, u_int32_t VAR_7)
{
 struct scsi_test_unit_ready *VAR_8;

 FUNC_1(VAR_2,
        VAR_3,
        VAR_4,
        VAR_0,
        VAR_5,
                    ((void*)0),
                     0,
        VAR_6,
        sizeof(*VAR_8),
        VAR_7);

 VAR_8 = (struct scsi_test_unit_ready *)&VAR_2->cdb_io.cdb_bytes;
 FUNC_0(VAR_8, sizeof(*VAR_8));
 VAR_8->opcode = VAR_1;
}
