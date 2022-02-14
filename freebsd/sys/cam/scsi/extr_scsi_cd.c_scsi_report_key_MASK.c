
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct scsi_report_key {int agid_keyformat; int alloc_len; int lba; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_report_key*,int) ;
 int FUNC_1 (struct ccb_scsiio*,scalar_t__,void (*) (struct cam_periph*,union ccb*),int ,int,int*,scalar_t__,int,int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_5, u_int32_t VAR_6,
  void (*VAR_7)(struct cam_periph *, union ccb *),
  u_int8_t VAR_8, u_int32_t VAR_9, u_int8_t VAR_10,
  u_int8_t VAR_11, u_int8_t *VAR_12, u_int32_t VAR_13,
  u_int8_t VAR_14, u_int32_t VAR_15)
{
 struct scsi_report_key *VAR_16;

 VAR_16 = (struct scsi_report_key *)&VAR_5->cdb_io.cdb_bytes;
 FUNC_0(VAR_16, sizeof(*VAR_16));
 VAR_16->opcode = VAR_2;
 FUNC_3(VAR_9, VAR_16->lba);
 FUNC_2(VAR_13, VAR_16->alloc_len);
 VAR_16->agid_keyformat = (VAR_10 << VAR_3) |
  (VAR_11 & VAR_4);

 FUNC_1(VAR_5,
        VAR_6,
        VAR_7,
                  (VAR_13 == 0) ? VAR_1 : VAR_0,
        VAR_8,
                     VAR_12,
                      VAR_13,
        VAR_14,
        sizeof(*VAR_16),
        VAR_15);
}
