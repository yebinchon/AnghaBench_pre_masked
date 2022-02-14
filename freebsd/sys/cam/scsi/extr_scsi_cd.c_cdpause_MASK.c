
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int32_t ;
struct scsi_pause {int resume; int op_code; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_pause*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,int *,int ,int ,int *,int ,int ,int,int) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static int
FUNC_5(struct cam_periph *VAR_9, u_int32_t VAR_10)
{
 struct scsi_pause *VAR_11;
        struct ccb_scsiio *VAR_12;
 union ccb *VAR_13;
 int VAR_14;

 VAR_14 = 0;

 VAR_13 = FUNC_2(VAR_9, VAR_1);

 VAR_12 = &VAR_13->csio;

 FUNC_1(VAR_12,
                      VAR_7,
                     ((void*)0),
                    VAR_0,
                         VAR_3,
                       ((void*)0),
                        0,
                        VAR_6,
        sizeof(struct scsi_pause),
                      50000);

 VAR_11 = (struct scsi_pause *)&VAR_12->cdb_io.cdb_bytes;
 FUNC_0 (VAR_11, sizeof(*VAR_11));

        VAR_11->op_code = VAR_4;
 VAR_11->resume = VAR_10;

 VAR_14 = FUNC_3(VAR_13, VAR_8, VAR_2,
                   VAR_5);

 FUNC_4(VAR_13);

 return(VAR_14);
}
