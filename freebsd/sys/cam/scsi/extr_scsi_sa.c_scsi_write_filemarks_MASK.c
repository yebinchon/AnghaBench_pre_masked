
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_write_filemarks {int num_marks; int byte2; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_write_filemarks*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_4, u_int32_t VAR_5,
       void (*VAR_6)(struct cam_periph *, union ccb *),
       u_int8_t VAR_7, int VAR_8, int VAR_9,
       u_int32_t VAR_10, u_int8_t VAR_11,
       u_int32_t VAR_12)
{
 struct scsi_write_filemarks *VAR_13;

 VAR_13 = (struct scsi_write_filemarks *)&VAR_4->cdb_io.cdb_bytes;
 FUNC_0(VAR_13, sizeof(*VAR_13));
 VAR_13->opcode = VAR_3;
 if (VAR_8)
  VAR_13->byte2 |= VAR_1;
 if (VAR_9)
  VAR_13->byte2 |= VAR_2;

 FUNC_2(VAR_10, VAR_13->num_marks);

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0, VAR_7, ((void*)0),
     0, VAR_11, sizeof(*VAR_13), VAR_12);
}
