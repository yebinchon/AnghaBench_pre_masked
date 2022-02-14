
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_tape_locate {int partition; int blkaddr; int byte1; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_tape_locate*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_5, u_int32_t VAR_6,
        void (*VAR_7)(struct cam_periph *, union ccb *),
        u_int8_t VAR_8, int VAR_9, int VAR_10, int VAR_11,
        int64_t VAR_12, u_int32_t VAR_13,
        int VAR_14, u_int32_t VAR_15)
{
 struct scsi_tape_locate *VAR_16;

 FUNC_1(VAR_5,
        VAR_6,
        VAR_7,
        VAR_0,
        VAR_8,
                     ((void*)0),
                      0,
        VAR_14,
        sizeof(*VAR_16),
        VAR_15);
 VAR_16 = (struct scsi_tape_locate *)&VAR_5->cdb_io.cdb_bytes;
 FUNC_0(VAR_16, sizeof(*VAR_16));
 VAR_16->opcode = VAR_1;
 if (VAR_9)
  VAR_16->byte1 |= VAR_4;
 if (VAR_10)
  VAR_16->byte1 |= VAR_3;
 if (VAR_11)
  VAR_16->byte1 |= VAR_2;
 FUNC_2(VAR_13, VAR_16->blkaddr);
 VAR_16->partition = VAR_12;
}
