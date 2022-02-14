
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int32_t ;
struct scsi_write_buffer {int byte2; int length; int offset; int buffer_id; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccb_scsiio*,scalar_t__,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,scalar_t__,int ,int,scalar_t__) ;
 int FUNC_1 (struct scsi_write_buffer*,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
   void (*VAR_5)(struct cam_periph *, union ccb *),
   uint8_t VAR_6, int VAR_7,
   uint8_t VAR_8, u_int32_t VAR_9,
   uint8_t *VAR_10, uint32_t VAR_11,
   uint8_t VAR_12, uint32_t VAR_13)
{
 struct scsi_write_buffer *VAR_14;

 VAR_14 = (struct scsi_write_buffer *)&VAR_3->cdb_io.cdb_bytes;
 FUNC_1(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->opcode = VAR_2;
 VAR_14->byte2 = VAR_7;
 VAR_14->buffer_id = VAR_8;
 FUNC_2(VAR_9, VAR_14->offset);
 FUNC_2(VAR_11, VAR_14->length);

 FUNC_0(VAR_3,
        VAR_4,
        VAR_5,
                 VAR_11 ? VAR_1 : VAR_0,
        VAR_6,
        VAR_10,
        VAR_11,
        VAR_12,
        sizeof(*VAR_14),
        VAR_13);
}
