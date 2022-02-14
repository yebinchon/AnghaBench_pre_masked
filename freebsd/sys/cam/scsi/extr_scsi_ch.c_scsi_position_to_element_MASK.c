
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_position_to_element {int invert; int dst; int tea; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_position_to_element*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
    void (*VAR_5)(struct cam_periph *, union ccb *),
    u_int8_t VAR_6, u_int32_t VAR_7, u_int32_t VAR_8,
    int VAR_9, u_int8_t VAR_10, u_int32_t VAR_11)
{
 struct scsi_position_to_element *VAR_12;

 VAR_12 = (struct scsi_position_to_element *)&VAR_3->cdb_io.cdb_bytes;
 FUNC_0(VAR_12, sizeof(*VAR_12));

 VAR_12->opcode = VAR_1;

 FUNC_2(VAR_7, VAR_12->tea);
 FUNC_2(VAR_8, VAR_12->dst);

 if (VAR_9)
  VAR_12->invert |= VAR_2;

 FUNC_1(VAR_3,
        VAR_4,
        VAR_5,
                  VAR_0,
        VAR_6,
                     ((void*)0),
                      0,
        VAR_10,
        sizeof(*VAR_12),
        VAR_11);
}
