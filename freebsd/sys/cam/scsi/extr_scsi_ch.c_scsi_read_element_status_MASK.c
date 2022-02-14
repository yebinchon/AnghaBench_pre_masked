
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_read_element_status {int byte2; int flags; int len; int count; int sea; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_read_element_status*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct ccb_scsiio *VAR_5, u_int32_t VAR_6,
    void (*VAR_7)(struct cam_periph *, union ccb *),
    u_int8_t VAR_8, int VAR_9, u_int32_t VAR_10,
    int VAR_11, int VAR_12,
    u_int32_t VAR_13, u_int8_t *VAR_14,
    u_int32_t VAR_15, u_int8_t VAR_16,
    u_int32_t VAR_17)
{
 struct scsi_read_element_status *VAR_18;

 VAR_18 = (struct scsi_read_element_status *)&VAR_5->cdb_io.cdb_bytes;
 FUNC_0(VAR_18, sizeof(*VAR_18));

 VAR_18->opcode = VAR_1;

 FUNC_2(VAR_10, VAR_18->sea);
 FUNC_2(VAR_13, VAR_18->count);
 FUNC_3(VAR_15, VAR_18->len);
 if (VAR_12)
  VAR_18->flags |= VAR_3;
 if (VAR_11)
  VAR_18->flags |= VAR_2;

 if (VAR_9)
  VAR_18->byte2 |= VAR_4;

 FUNC_1(VAR_5,
        VAR_6,
        VAR_7,
                  VAR_0,
        VAR_8,
        VAR_14,
        VAR_15,
        VAR_16,
        sizeof(*VAR_18),
        VAR_17);
}
