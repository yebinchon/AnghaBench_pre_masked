
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef void* u_int32_t ;
struct scsi_play_msf {void* end_f; void* end_s; void* end_m; void* start_f; void* start_s; void* start_m; int op_code; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_play_msf*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,int *,int ,int ,int *,int ,int ,int,int) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static int
FUNC_5(struct cam_periph *VAR_9, u_int32_t VAR_10, u_int32_t VAR_11,
   u_int32_t VAR_12, u_int32_t VAR_13, u_int32_t VAR_14, u_int32_t VAR_15)
{
 struct scsi_play_msf *VAR_16;
        struct ccb_scsiio *VAR_17;
 union ccb *VAR_18;
 int VAR_19;

 VAR_19 = 0;

 VAR_18 = FUNC_2(VAR_9, VAR_1);

 VAR_17 = &VAR_18->csio;

 FUNC_1(VAR_17,
                      VAR_7,
                     ((void*)0),
                    VAR_0,
                         VAR_3,
                       ((void*)0),
                        0,
                        VAR_6,
        sizeof(struct scsi_play_msf),
                      50000);

 VAR_16 = (struct scsi_play_msf *)&VAR_17->cdb_io.cdb_bytes;
 FUNC_0 (VAR_16, sizeof(*VAR_16));

        VAR_16->op_code = VAR_4;
        VAR_16->start_m = VAR_10;
        VAR_16->start_s = VAR_11;
        VAR_16->start_f = VAR_12;
        VAR_16->end_m = VAR_13;
        VAR_16->end_s = VAR_14;
        VAR_16->end_f = VAR_15;

 VAR_19 = FUNC_3(VAR_18, VAR_8, VAR_2,
                   VAR_5);

 FUNC_4(VAR_18);

 return(VAR_19);
}
