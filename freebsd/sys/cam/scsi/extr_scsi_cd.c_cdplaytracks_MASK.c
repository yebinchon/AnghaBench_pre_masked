
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef void* u_int32_t ;
struct scsi_play_track {void* end_index; void* end_track; void* start_index; void* start_track; int op_code; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_play_track*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,int *,int ,int ,int *,int ,int ,int,int) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static int
FUNC_5(struct cam_periph *VAR_9, u_int32_t VAR_10, u_int32_t VAR_11,
      u_int32_t VAR_12, u_int32_t VAR_13)
{
 struct scsi_play_track *VAR_14;
        struct ccb_scsiio *VAR_15;
 union ccb *VAR_16;
 int VAR_17;

 VAR_17 = 0;

 VAR_16 = FUNC_2(VAR_9, VAR_1);

 VAR_15 = &VAR_16->csio;

 FUNC_1(VAR_15,
                      VAR_7,
                     ((void*)0),
                    VAR_0,
                         VAR_3,
                       ((void*)0),
                        0,
                        VAR_6,
        sizeof(struct scsi_play_track),
                      50000);

 VAR_14 = (struct scsi_play_track *)&VAR_15->cdb_io.cdb_bytes;
 FUNC_0 (VAR_14, sizeof(*VAR_14));

        VAR_14->op_code = VAR_4;
        VAR_14->start_track = VAR_10;
        VAR_14->start_index = VAR_11;
        VAR_14->end_track = VAR_12;
        VAR_14->end_index = VAR_13;

 VAR_17 = FUNC_3(VAR_16, VAR_8, VAR_2,
                   VAR_5);

 FUNC_4(VAR_16);

 return(VAR_17);
}
