
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int32_t ;
struct scsi_set_speed {int writespeed; int readspeed; int opcode; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_set_speed*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,int *,int ,int ,int *,int ,int ,int,int) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static int
FUNC_6(struct cam_periph *VAR_9, u_int32_t VAR_10, u_int32_t VAR_11)
{
 struct scsi_set_speed *VAR_12;
 struct ccb_scsiio *VAR_13;
 union ccb *VAR_14;
 int VAR_15;

 VAR_15 = 0;
 VAR_14 = FUNC_2(VAR_9, VAR_1);
 VAR_13 = &VAR_14->csio;


 if (VAR_10 < 177)
  VAR_10 *= 177;
 if (VAR_11 < 177)
  VAR_11 *= 177;

 FUNC_1(VAR_13,
                      VAR_7,
                     ((void*)0),
                    VAR_0,
                         VAR_3,
                       ((void*)0),
                        0,
                        VAR_6,
        sizeof(struct scsi_set_speed),
                      50000);

 VAR_12 = (struct scsi_set_speed *)&VAR_13->cdb_io.cdb_bytes;
 FUNC_0(VAR_12, sizeof(*VAR_12));

 VAR_12->opcode = VAR_4;
 FUNC_4(VAR_10, VAR_12->readspeed);
 FUNC_4(VAR_11, VAR_12->writespeed);

 VAR_15 = FUNC_3(VAR_14, VAR_8, VAR_2,
                   VAR_5);

 FUNC_5(VAR_14);

 return(VAR_15);
}
