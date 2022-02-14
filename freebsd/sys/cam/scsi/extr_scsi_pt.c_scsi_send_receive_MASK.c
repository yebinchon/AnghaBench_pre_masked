
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct scsi_send_receive {scalar_t__ control; int xfer_len; int byte2; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_4, u_int32_t VAR_5,
    void (*VAR_6)(struct cam_periph *, union ccb *),
    u_int VAR_7, int VAR_8, u_int VAR_9,
    u_int32_t VAR_10, u_int8_t *VAR_11, u_int8_t VAR_12,
    u_int32_t VAR_13)
{
 struct scsi_send_receive *VAR_14;

 VAR_14 = (struct scsi_send_receive *)&VAR_4->cdb_io.cdb_bytes;
 VAR_14->opcode = VAR_8 ? VAR_2 : VAR_3;
 VAR_14->byte2 = VAR_9;
 FUNC_1(VAR_10, VAR_14->xfer_len);
 VAR_14->control = 0;

 FUNC_0(VAR_4,
        VAR_5,
        VAR_6,
                 VAR_8 ? VAR_0 : VAR_1,
        VAR_7,
        VAR_11,
        VAR_10,
        VAR_12,
        sizeof(*VAR_14),
        VAR_13);
}
