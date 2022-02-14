
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct scsi_zbc_out {void* zone_flags; int zone_id; void* service_action; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccb_scsiio*,scalar_t__,void (*) (struct cam_periph*,union ccb*),int ,void*,void**,scalar_t__,void*,int,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_3, uint32_t VAR_4,
      void (*VAR_5)(struct cam_periph *, union ccb *),
      uint8_t VAR_6, uint8_t VAR_7, uint64_t VAR_8,
      uint8_t VAR_9, uint8_t *VAR_10, uint32_t VAR_11,
      uint8_t VAR_12, uint32_t VAR_13)
{
 struct scsi_zbc_out *VAR_14;

 VAR_14 = (struct scsi_zbc_out *)&VAR_3->cdb_io.cdb_bytes;
 VAR_14->opcode = VAR_2;
 VAR_14->service_action = VAR_7;
 FUNC_1(VAR_8, VAR_14->zone_id);
 VAR_14->zone_flags = VAR_9;

 FUNC_0(VAR_3,
        VAR_4,
        VAR_5,
                  (VAR_11 > 0) ? VAR_1 : VAR_0,
        VAR_6,
        VAR_10,
        VAR_11,
        VAR_12,
        sizeof(*VAR_14),
        VAR_13);
}
