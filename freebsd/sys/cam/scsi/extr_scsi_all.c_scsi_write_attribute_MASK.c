
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_write_attribute {int logical_volume; int partition; int length; int element; int byte2; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_write_attribute*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
      void (*VAR_5)(struct cam_periph *, union ccb *),
      u_int8_t VAR_6, uint32_t VAR_7, int VAR_8,
      int VAR_9, int VAR_10, u_int8_t *VAR_11,
      u_int32_t VAR_12, int VAR_13, u_int32_t VAR_14)
{
 struct scsi_write_attribute *VAR_15;

 VAR_15 = (struct scsi_write_attribute *)&VAR_3->cdb_io.cdb_bytes;
 FUNC_0(VAR_15, sizeof(*VAR_15));

 VAR_15->opcode = VAR_2;
 if (VAR_10 != 0)
  VAR_15->byte2 = VAR_1;
 FUNC_2(VAR_7, VAR_15->element);
 VAR_15->logical_volume = VAR_8;
 VAR_15->partition = VAR_9;
 FUNC_3(VAR_12, VAR_15->length);

 FUNC_1(VAR_3,
        VAR_4,
        VAR_5,
                 VAR_0,
        VAR_6,
                    VAR_11,
                     VAR_12,
        VAR_13,
        sizeof(*VAR_15),
        VAR_14);
}
