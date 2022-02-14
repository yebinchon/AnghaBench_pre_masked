
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_inquiry {int length; int page_code; int byte2; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_inquiry*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
      void (*VAR_5)(struct cam_periph *, union ccb *),
      u_int8_t VAR_6, u_int8_t *VAR_7, u_int32_t VAR_8,
      int VAR_9, u_int8_t VAR_10, u_int8_t VAR_11,
      u_int32_t VAR_12)
{
 struct scsi_inquiry *VAR_13;

 FUNC_1(VAR_3,
        VAR_4,
        VAR_5,
                 VAR_0,
        VAR_6,
                    VAR_7,
                     VAR_8,
        VAR_11,
        sizeof(*VAR_13),
        VAR_12);

 VAR_13 = (struct scsi_inquiry *)&VAR_3->cdb_io.cdb_bytes;
 FUNC_0(VAR_13, sizeof(*VAR_13));
 VAR_13->opcode = VAR_1;
 if (VAR_9) {
  VAR_13->byte2 |= VAR_2;
  VAR_13->page_code = VAR_10;
 }
 FUNC_2(VAR_8, VAR_13->length);
}
