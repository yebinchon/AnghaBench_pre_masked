
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct scsi_format_medium {int byte1; int byte2; int length; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_format_medium*,int) ;
 int FUNC_1 (struct ccb_scsiio*,scalar_t__,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
     void (*VAR_5)(struct cam_periph *, union ccb *),
     u_int8_t VAR_6, int VAR_7, int VAR_8,
     u_int8_t *VAR_9, u_int32_t VAR_10,
     u_int32_t VAR_11, u_int32_t VAR_12)
{
 struct scsi_format_medium *VAR_13;

 VAR_13 = (struct scsi_format_medium*)&VAR_3->cdb_io.cdb_bytes;
 FUNC_0(VAR_13, sizeof(*VAR_13));

 VAR_13->opcode = VAR_2;

 VAR_13->byte1 = VAR_7;
 VAR_13->byte2 = VAR_8;

 FUNC_2(VAR_10, VAR_13->length);

 FUNC_1(VAR_3,
        VAR_4,
        VAR_5,
                 (VAR_10 > 0) ? VAR_1 : VAR_0,
        VAR_6,
                     VAR_9,
                      VAR_10,
        VAR_11,
        sizeof(*VAR_13),
        VAR_12);
}
