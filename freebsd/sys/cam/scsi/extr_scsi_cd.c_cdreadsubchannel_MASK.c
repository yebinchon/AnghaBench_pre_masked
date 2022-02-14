
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct scsi_read_subchannel {int track; scalar_t__ control; scalar_t__ data_len; scalar_t__ subchan_format; int byte2; int byte1; int op_code; } ;
struct cd_sub_channel_info {int dummy; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct scsi_read_subchannel*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,int *,int ,int ,int *,scalar_t__,int ,int,int) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static int
FUNC_6(struct cam_periph *VAR_12, u_int32_t VAR_13,
   u_int32_t VAR_14, int VAR_15,
   struct cd_sub_channel_info *VAR_16, u_int32_t VAR_17)
{
 struct scsi_read_subchannel *VAR_18;
        struct ccb_scsiio *VAR_19;
 union ccb *VAR_20;
 int VAR_21;

 VAR_21 = 0;

 VAR_20 = FUNC_2(VAR_12, VAR_1);

 VAR_19 = &VAR_20->csio;

 FUNC_1(VAR_19,
                      VAR_10,
                     ((void*)0),
                    VAR_0,
                         VAR_5,
                       (u_int8_t *)VAR_16,
                        VAR_17,
                        VAR_9,
        sizeof(struct scsi_read_subchannel),
                      50000);

 VAR_18 = (struct scsi_read_subchannel *)&VAR_19->cdb_io.cdb_bytes;
 FUNC_0 (VAR_18, sizeof(*VAR_18));

 VAR_18->op_code = VAR_6;
 if (VAR_13 == VAR_4)
  VAR_18->byte1 |= VAR_3;
 VAR_18->byte2 = VAR_8;
 VAR_18->subchan_format = VAR_14;
 VAR_18->track = VAR_15;
 FUNC_4(VAR_17, (u_int8_t *)VAR_18->data_len);
 VAR_18->control = 0;

 VAR_21 = FUNC_3(VAR_20, VAR_11, VAR_2,
                   VAR_7);

 FUNC_5(VAR_20);

 return(VAR_21);
}
