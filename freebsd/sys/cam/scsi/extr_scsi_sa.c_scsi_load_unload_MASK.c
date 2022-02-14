
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_load_unload {int eot_reten_load; int immediate; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_load_unload*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_6, u_int32_t VAR_7,
   void (*VAR_8)(struct cam_periph *, union ccb *),
   u_int8_t VAR_9, int VAR_10, int VAR_11,
   int VAR_12, int VAR_13, u_int8_t VAR_14,
   u_int32_t VAR_15)
{
 struct scsi_load_unload *VAR_16;

 VAR_16 = (struct scsi_load_unload *)&VAR_6->cdb_io.cdb_bytes;
 FUNC_0(VAR_16, sizeof(*VAR_16));
 VAR_16->opcode = VAR_1;
 if (VAR_10)
  VAR_16->immediate = VAR_3;
 if (VAR_11)
  VAR_16->eot_reten_load |= VAR_2;
 if (VAR_12)
  VAR_16->eot_reten_load |= VAR_5;
 if (VAR_13)
  VAR_16->eot_reten_load |= VAR_4;

 FUNC_1(VAR_6, VAR_7, VAR_8, VAR_0, VAR_9,
     ((void*)0), 0, VAR_14, sizeof(*VAR_16), VAR_15);
}
