
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int8_t ;
struct scsi_read_capacity_16 {int alloc_len; int addr; int service_action; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_read_capacity_16*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_5, uint32_t VAR_6,
        void (*VAR_7)(struct cam_periph *, union ccb *),
        uint8_t VAR_8, uint64_t VAR_9, int VAR_10, int VAR_11,
        uint8_t *VAR_12, int VAR_13, uint8_t VAR_14,
        uint32_t VAR_15)
{
 struct scsi_read_capacity_16 *VAR_16;


 FUNC_1(VAR_5,
        VAR_6,
        VAR_7,
                 VAR_0,
        VAR_8,
                    (u_int8_t *)VAR_12,
                     VAR_13,
        VAR_14,
        sizeof(*VAR_16),
        VAR_15);
 VAR_16 = (struct scsi_read_capacity_16 *)&VAR_5->cdb_io.cdb_bytes;
 FUNC_0(VAR_16, sizeof(*VAR_16));
 VAR_16->opcode = VAR_1;
 VAR_16->service_action = VAR_4;
 FUNC_2(VAR_9, VAR_16->addr);
 FUNC_3(VAR_13, VAR_16->alloc_len);
 if (VAR_11)
  VAR_10 |= VAR_2;
 if (VAR_10)
  VAR_10 |= VAR_3;
}
