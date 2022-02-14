
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* u_int8_t ;
typedef int u_int32_t ;
struct scsi_read_attribute {int logical_volume; int partition; int cache; int length; int first_attribute; void* elem_type; int element; void* service_action; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_read_attribute*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,void*,void**,int ,int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
      void (*VAR_5)(struct cam_periph *, union ccb *),
      u_int8_t VAR_6, u_int8_t VAR_7,
      uint32_t VAR_8, u_int8_t VAR_9, int VAR_10,
      int VAR_11, u_int32_t VAR_12, int VAR_13,
      u_int8_t *VAR_14, u_int32_t VAR_15, int VAR_16,
      u_int32_t VAR_17)
{
 struct scsi_read_attribute *VAR_18;

 VAR_18 = (struct scsi_read_attribute *)&VAR_3->cdb_io.cdb_bytes;
 FUNC_0(VAR_18, sizeof(*VAR_18));

 VAR_18->opcode = VAR_1;
 VAR_18->service_action = VAR_7;
 FUNC_2(VAR_8, VAR_18->element);
 VAR_18->elem_type = VAR_9;
 VAR_18->logical_volume = VAR_10;
 VAR_18->partition = VAR_11;
 FUNC_2(VAR_12, VAR_18->first_attribute);
 FUNC_3(VAR_15, VAR_18->length);
 if (VAR_13 != 0)
  VAR_18->cache |= VAR_2;

 FUNC_1(VAR_3,
        VAR_4,
        VAR_5,
                 VAR_0,
        VAR_6,
                    VAR_14,
                     VAR_15,
        VAR_16,
        sizeof(*VAR_18),
        VAR_17);
}
