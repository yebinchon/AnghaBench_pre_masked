
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_security_protocol_in {int byte4; int length; int security_protocol_specific; int security_protocol; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_security_protocol_in*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_2, uint32_t VAR_3,
     void (*VAR_4)(struct cam_periph *, union ccb *),
     uint8_t VAR_5, uint32_t VAR_6,
     uint32_t VAR_7, int VAR_8,
     uint8_t *VAR_9, uint32_t VAR_10, int VAR_11,
     int VAR_12)
{
 struct scsi_security_protocol_in *VAR_13;

 VAR_13 = (struct scsi_security_protocol_in *)&VAR_2->cdb_io.cdb_bytes;
 FUNC_0(VAR_13, sizeof(*VAR_13));

 VAR_13->opcode = VAR_1;

 VAR_13->security_protocol = VAR_6;
 FUNC_2(VAR_7,
      VAR_13->security_protocol_specific);
 VAR_13->byte4 = VAR_8;
 FUNC_3(VAR_10, VAR_13->length);

 FUNC_1(VAR_2,
        VAR_3,
        VAR_4,
                 VAR_0,
        VAR_5,
        VAR_9,
        VAR_10,
        VAR_11,
        sizeof(*VAR_13),
        VAR_12);
}
