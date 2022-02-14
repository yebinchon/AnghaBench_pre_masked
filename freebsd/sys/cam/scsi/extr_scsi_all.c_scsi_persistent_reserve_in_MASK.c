
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_per_res_in {int action; int length; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_per_res_in*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int,int,int) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_2, uint32_t VAR_3,
      void (*VAR_4)(struct cam_periph *, union ccb *),
      uint8_t VAR_5, int VAR_6,
      uint8_t *VAR_7, uint32_t VAR_8, int VAR_9,
      int VAR_10)
{
 struct scsi_per_res_in *VAR_11;

 VAR_11 = (struct scsi_per_res_in *)&VAR_2->cdb_io.cdb_bytes;
 FUNC_0(VAR_11, sizeof(*VAR_11));

 VAR_11->opcode = VAR_1;
 VAR_11->action = VAR_6;
 FUNC_2(VAR_8, VAR_11->length);

 FUNC_1(VAR_2,
        VAR_3,
        VAR_4,
                 VAR_0,
        VAR_5,
        VAR_7,
        VAR_8,
        VAR_9,
        sizeof(*VAR_11),
        VAR_10);
}
