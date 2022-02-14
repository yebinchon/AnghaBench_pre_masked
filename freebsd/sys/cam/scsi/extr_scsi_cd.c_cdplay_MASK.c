
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_play_12 {scalar_t__ xfer_len; scalar_t__ blk_addr; int op_code; } ;
struct scsi_play_10 {scalar_t__ xfer_len; scalar_t__ blk_addr; int op_code; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct scsi_play_12*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,int *,int ,int ,int *,int ,int ,int,int) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static int
FUNC_7(struct cam_periph *VAR_10, u_int32_t VAR_11, u_int32_t VAR_12)
{
 struct ccb_scsiio *VAR_13;
 union ccb *VAR_14;
 int VAR_15;
 u_int8_t VAR_16;

 VAR_15 = 0;
 VAR_14 = FUNC_2(VAR_10, VAR_1);
 VAR_13 = &VAR_14->csio;



 if ((VAR_12 & 0xffff0000) == 0) {



  struct scsi_play_10 *VAR_17;

  VAR_17 = (struct scsi_play_10 *)&VAR_13->cdb_io.cdb_bytes;
  FUNC_0 (VAR_17, sizeof(*VAR_17));
  VAR_17->op_code = VAR_4;
  FUNC_5(VAR_11, (u_int8_t *)VAR_17->blk_addr);
  FUNC_4(VAR_12, (u_int8_t *)VAR_17->xfer_len);
  VAR_16 = sizeof(*VAR_17);
 } else {
  struct scsi_play_12 *VAR_18;

  VAR_18 = (struct scsi_play_12 *)&VAR_13->cdb_io.cdb_bytes;
  FUNC_0 (VAR_18, sizeof(*VAR_18));
  VAR_18->op_code = VAR_5;
  FUNC_5(VAR_11, (u_int8_t *)VAR_18->blk_addr);
  FUNC_5(VAR_12, (u_int8_t *)VAR_18->xfer_len);
  VAR_16 = sizeof(*VAR_18);
 }
 FUNC_1(VAR_13,
                    VAR_8,
                  ((void*)0),
                 VAR_0,
        VAR_3,
                   ((void*)0),
                   0,
                     VAR_7,
        VAR_16,
                   50 * 1000);

 VAR_15 = FUNC_3(VAR_14, VAR_9, VAR_2,
                   VAR_6);

 FUNC_6(VAR_14);

 return(VAR_15);
}
