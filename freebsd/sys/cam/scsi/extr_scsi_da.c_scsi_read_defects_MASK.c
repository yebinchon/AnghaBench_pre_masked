
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
struct scsi_read_defect_data_12 {int address_descriptor_index; int alloc_length; void* format; int opcode; } ;
struct scsi_read_defect_data_10 {int address_descriptor_index; int alloc_length; void* format; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct scsi_read_defect_data_12*,void*) ;
 int FUNC_1 (struct ccb_scsiio*,scalar_t__,void (*) (struct cam_periph*,union ccb*),int ,void*,void**,scalar_t__,void*,void*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_4, uint32_t VAR_5,
    void (*VAR_6)(struct cam_periph *, union ccb *),
    uint8_t VAR_7, uint8_t VAR_8,
    uint32_t VAR_9, uint8_t *VAR_10,
    uint32_t VAR_11, int VAR_12,
    uint8_t VAR_13, uint32_t VAR_14)
{
 uint8_t VAR_15;





 if ((VAR_12 <= 10)
  && (VAR_9 == 0)
  && (VAR_11 <= VAR_3)) {
  struct scsi_read_defect_data_10 *VAR_16;

  VAR_16 = (struct scsi_read_defect_data_10 *)
   &VAR_4->cdb_io.cdb_bytes;

  VAR_15 = sizeof(*VAR_16);
  FUNC_0(VAR_16, VAR_15);
                VAR_16->opcode = VAR_1;
                VAR_16->format = VAR_8;
                FUNC_2(VAR_11, VAR_16->alloc_length);
 } else {
  struct scsi_read_defect_data_12 *VAR_17;

  VAR_17 = (struct scsi_read_defect_data_12 *)
   &VAR_4->cdb_io.cdb_bytes;

  VAR_15 = sizeof(*VAR_17);
  FUNC_0(VAR_17, VAR_15);
                VAR_17->opcode = VAR_2;
                VAR_17->format = VAR_8;
                FUNC_3(VAR_11, VAR_17->alloc_length);
  FUNC_3(VAR_9, VAR_17->address_descriptor_index);
 }

 FUNC_1(VAR_4,
        VAR_5,
        VAR_6,
                  VAR_0,
        VAR_7,
        VAR_10,
        VAR_11,
        VAR_13,
        VAR_15,
        VAR_14);
}
