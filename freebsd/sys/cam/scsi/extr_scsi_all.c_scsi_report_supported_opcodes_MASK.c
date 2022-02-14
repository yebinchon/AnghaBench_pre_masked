
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_report_supported_opcodes {int options; int requested_opcode; int length; int requested_service_action; int service_action; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_report_supported_opcodes*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_3, uint32_t VAR_4,
         void (*VAR_5)(struct cam_periph *, union ccb *),
         uint8_t VAR_6, int VAR_7, int VAR_8,
         int VAR_9, uint8_t *VAR_10,
         uint32_t VAR_11, int VAR_12, int VAR_13)
{
 struct scsi_report_supported_opcodes *VAR_14;

 VAR_14 = (struct scsi_report_supported_opcodes *)
     &VAR_3->cdb_io.cdb_bytes;
 FUNC_0(VAR_14, sizeof(*VAR_14));

 VAR_14->opcode = VAR_1;
 VAR_14->service_action = VAR_2;
 VAR_14->options = VAR_7;
 VAR_14->requested_opcode = VAR_8;
 FUNC_2(VAR_9, VAR_14->requested_service_action);
 FUNC_3(VAR_11, VAR_14->length);

 FUNC_1(VAR_3,
        VAR_4,
        VAR_5,
                 VAR_0,
        VAR_6,
        VAR_10,
        VAR_11,
        VAR_12,
        sizeof(*VAR_14),
        VAR_13);
}
