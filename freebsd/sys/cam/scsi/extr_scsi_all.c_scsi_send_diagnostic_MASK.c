
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int32_t ;
struct scsi_send_diag {int byte2; int length; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,scalar_t__,int ,int,int ) ;
 int FUNC_1 (struct scsi_send_diag*,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_10, u_int32_t VAR_11,
       void (*VAR_12)(struct cam_periph *, union ccb *),
       uint8_t VAR_13, int VAR_14, int VAR_15,
       int VAR_16, int VAR_17, int VAR_18,
       uint8_t *VAR_19, uint16_t VAR_20,
       uint8_t VAR_21, uint32_t VAR_22)
{
 struct scsi_send_diag *VAR_23;

 VAR_23 = (struct scsi_send_diag *)&VAR_10->cdb_io.cdb_bytes;
 FUNC_1(VAR_23, 0, sizeof(*VAR_23));
 VAR_23->opcode = VAR_2;





 if (VAR_16)
  VAR_18 = VAR_7;

 VAR_23->byte2 = ((VAR_18 << VAR_8)
    & VAR_6)
   | (VAR_14 ? VAR_9 : 0)
   | (VAR_15 ? VAR_3 : 0)
   | (VAR_16 ? VAR_5 : 0)
   | (VAR_17 ? VAR_4 : 0);
 FUNC_2(VAR_20, VAR_23->length);

 FUNC_0(VAR_10,
        VAR_11,
        VAR_12,
                 VAR_20 ? VAR_1 : VAR_0,
        VAR_13,
        VAR_19,
        VAR_20,
        VAR_21,
        sizeof(*VAR_23),
        VAR_22);
}
