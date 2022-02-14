
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_rewind {int immediate; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_rewind*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_3, u_int32_t VAR_4,
     void (*VAR_5)(struct cam_periph *, union ccb *),
     u_int8_t VAR_6, int VAR_7, u_int8_t VAR_8,
     u_int32_t VAR_9)
{
 struct scsi_rewind *VAR_10;

 VAR_10 = (struct scsi_rewind *)&VAR_3->cdb_io.cdb_bytes;
 FUNC_0(VAR_10, sizeof(*VAR_10));
 VAR_10->opcode = VAR_1;
 if (VAR_7)
  VAR_10->immediate = VAR_2;

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_0, VAR_6, ((void*)0),
     0, VAR_8, sizeof(*VAR_10), VAR_9);
}
