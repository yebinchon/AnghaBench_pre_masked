
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_log_select {int page; int length; int byte2; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_log_select*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int,int*,int ,int,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_5, u_int32_t VAR_6,
  void (*VAR_7)(struct cam_periph *, union ccb *),
  u_int8_t VAR_8, u_int8_t VAR_9, int VAR_10,
  int VAR_11, u_int8_t *VAR_12, u_int32_t VAR_13,
  u_int8_t VAR_14, u_int32_t VAR_15)
{
 struct scsi_log_select *VAR_16;
 u_int8_t VAR_17;

 VAR_16 = (struct scsi_log_select *)&VAR_5->cdb_io.cdb_bytes;
 FUNC_0(VAR_16, sizeof(*VAR_16));
 VAR_16->opcode = VAR_1;
 VAR_16->page = VAR_9 & VAR_2;
 if (VAR_10 != 0)
  VAR_16->byte2 |= VAR_4;
 if (VAR_11 != 0)
  VAR_16->byte2 |= VAR_3;
 FUNC_2(VAR_13, VAR_16->length);
 VAR_17 = sizeof(*VAR_16);

 FUNC_1(VAR_5,
        VAR_6,
        VAR_7,
                 VAR_0,
        VAR_8,
                    VAR_12,
                     VAR_13,
        VAR_14,
        VAR_17,
        VAR_15);
}
