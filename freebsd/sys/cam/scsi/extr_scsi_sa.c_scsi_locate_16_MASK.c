
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct scsi_locate_16 {int byte1; int byte2; int logical_id; int partition; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_locate_16*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int,int *,int ,int,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_5, u_int32_t VAR_6,
        void (*VAR_7)(struct cam_periph *, union ccb *),
        u_int8_t VAR_8, int VAR_9, int VAR_10, u_int8_t VAR_11,
        int VAR_12, int64_t VAR_13, u_int64_t VAR_14,
        int VAR_15, u_int32_t VAR_16)
{

 struct scsi_locate_16 *VAR_17;

 FUNC_1(VAR_5,
        VAR_6,
        VAR_7,
                 VAR_0,
        VAR_8,
                    ((void*)0),
                     0,
        VAR_15,
        sizeof(*VAR_17),
        VAR_16);

 VAR_17 = (struct scsi_locate_16 *)&VAR_5->cdb_io.cdb_bytes;
 FUNC_0(VAR_17, sizeof(*VAR_17));
 VAR_17->opcode = VAR_1;
 if (VAR_9)
  VAR_17->byte1 |= VAR_4;
 if (VAR_10)
  VAR_17->byte1 |= VAR_2;
 VAR_17->byte1 |= (VAR_11 << VAR_3);

 VAR_17->byte2 |= VAR_12;
 VAR_17->partition = VAR_13;
 FUNC_2(VAR_14, VAR_17->logical_id);
}
