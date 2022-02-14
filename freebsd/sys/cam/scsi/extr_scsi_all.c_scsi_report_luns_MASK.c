
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_report_luns_data {int dummy; } ;
struct scsi_report_luns {int length; int select_report; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_report_luns*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_2, u_int32_t VAR_3,
   void (*VAR_4)(struct cam_periph *, union ccb *),
   u_int8_t VAR_5, u_int8_t VAR_6,
   struct scsi_report_luns_data *VAR_7, u_int32_t VAR_8,
   u_int8_t VAR_9, u_int32_t VAR_10)
{
 struct scsi_report_luns *VAR_11;

 FUNC_1(VAR_2,
        VAR_3,
        VAR_4,
                 VAR_0,
        VAR_5,
                    (u_int8_t *)VAR_7,
                     VAR_8,
        VAR_9,
        sizeof(*VAR_11),
        VAR_10);
 VAR_11 = (struct scsi_report_luns *)&VAR_2->cdb_io.cdb_bytes;
 FUNC_0(VAR_11, sizeof(*VAR_11));
 VAR_11->opcode = VAR_1;
 VAR_11->select_report = VAR_6;
 FUNC_2(VAR_8, VAR_11->length);
}
