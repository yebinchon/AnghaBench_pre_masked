
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ resid; } ;
union ccb {TYPE_1__ csio; } ;
typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct scsi_report_key_data_title {int byte0; int title_key; } ;
struct scsi_report_key_data_rpc {int byte4; int rpc_scheme1; int region_mask; } ;
struct scsi_report_key_data_key1_key2 {int key1; } ;
struct scsi_report_key_data_challenge {int challenge_key; } ;
struct scsi_report_key_data_asf {int success; } ;
struct scsi_report_key_data_agid {int agid; } ;
struct dvd_authinfo {int agid; int cpm; int cp_sec; int cgms; int asf; int reg_type; int vend_rsts; int user_rsts; int rpc_scheme; int region; int keychal; int format; scalar_t__ lba; } ;
struct cam_periph {int path; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,int ,int ) ;
 union ccb* FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (union ccb*,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ,scalar_t__,int,int ,int *,int,int ,int) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int FUNC_10 (union ccb*) ;

__attribute__((used)) static int
FUNC_11(struct cam_periph *VAR_25, struct dvd_authinfo *VAR_26)
{
 union ccb *VAR_27;
 u_int8_t *VAR_28;
 u_int32_t VAR_29;
 int VAR_30;
 int VAR_31;

 VAR_30 = 0;
 VAR_28 = ((void*)0);
 VAR_29 = 0;

 switch (VAR_26->format) {
 case 133:
  VAR_31 = sizeof(struct scsi_report_key_data_agid);
  break;
 case 131:
  VAR_31 = sizeof(struct scsi_report_key_data_challenge);
  break;
 case 130:
  VAR_31 = sizeof(struct scsi_report_key_data_key1_key2);
  break;
 case 128:
  VAR_31 = sizeof(struct scsi_report_key_data_title);

  VAR_29 = VAR_26->lba;
  break;
 case 132:
  VAR_31 = sizeof(struct scsi_report_key_data_asf);
  break;
 case 129:
  VAR_31 = sizeof(struct scsi_report_key_data_rpc);
  break;
 case 134:
  VAR_31 = 0;
  break;
 default:
  return (VAR_2);
 }

 if (VAR_31 != 0) {
  VAR_28 = FUNC_6(VAR_31, VAR_4, VAR_5 | VAR_6);
 } else
  VAR_28 = ((void*)0);

 FUNC_2(VAR_25);
 VAR_27 = FUNC_1(VAR_25, VAR_0);

 FUNC_8(&VAR_27->csio,
                 VAR_23,
                ((void*)0),
                    VAR_3,
             VAR_29,
              VAR_26->agid,
                    VAR_26->format,
                  VAR_28,
                   VAR_31,
                   VAR_22,
                 50000);

 VAR_30 = FUNC_4(VAR_27, VAR_24, VAR_1,
                   VAR_21);

 if (VAR_30 != 0)
  goto bailout;

 if (VAR_27->csio.resid != 0) {
  FUNC_9(VAR_25->path, "warning, residual for report key "
      "command is %d\n", VAR_27->csio.resid);
 }

 switch(VAR_26->format) {
 case 133: {
  struct scsi_report_key_data_agid *VAR_32;

  VAR_32 = (struct scsi_report_key_data_agid *)VAR_28;

  VAR_26->agid = (VAR_32->agid & VAR_7) >>
   VAR_8;
  break;
 }
 case 131: {
  struct scsi_report_key_data_challenge *VAR_33;

  VAR_33 = (struct scsi_report_key_data_challenge *)VAR_28;

  FUNC_0(VAR_33->challenge_key, VAR_26->keychal,
        FUNC_7(sizeof(VAR_33->challenge_key),
            sizeof(VAR_26->keychal)));
  break;
 }
 case 130: {
  struct scsi_report_key_data_key1_key2 *VAR_34;

  VAR_34 = (struct scsi_report_key_data_key1_key2 *)VAR_28;

  FUNC_0(VAR_34->key1, VAR_26->keychal,
        FUNC_7(sizeof(VAR_34->key1), sizeof(VAR_26->keychal)));
  break;
 }
 case 128: {
  struct scsi_report_key_data_title *VAR_35;

  VAR_35 = (struct scsi_report_key_data_title *)VAR_28;

  VAR_26->cpm = (VAR_35->byte0 & VAR_17) >>
   VAR_18;
  VAR_26->cp_sec = (VAR_35->byte0 & VAR_19) >>
   VAR_20;
  VAR_26->cgms = (VAR_35->byte0 & VAR_15) >>
   VAR_16;
  FUNC_0(VAR_35->title_key, VAR_26->keychal,
        FUNC_7(sizeof(VAR_35->title_key),
     sizeof(VAR_26->keychal)));
  break;
 }
 case 132: {
  struct scsi_report_key_data_asf *VAR_36;

  VAR_36 = (struct scsi_report_key_data_asf *)VAR_28;

  VAR_26->asf = VAR_36->success & VAR_9;
  break;
 }
 case 129: {
  struct scsi_report_key_data_rpc *VAR_37;

  VAR_37 = (struct scsi_report_key_data_rpc *)VAR_28;

  VAR_26->reg_type = (VAR_37->byte4 & VAR_10) >>
   VAR_11;
  VAR_26->vend_rsts =
   (VAR_37->byte4 & VAR_13) >>
   VAR_14;
  VAR_26->user_rsts = VAR_37->byte4 & VAR_12;
  VAR_26->region = VAR_37->region_mask;
  VAR_26->rpc_scheme = VAR_37->rpc_scheme1;
  break;
 }
 case 134:
  break;
 default:

  VAR_30 = VAR_2;
  goto bailout;
  break;
 }

bailout:
 FUNC_10(VAR_27);
 FUNC_3(VAR_25);

 if (VAR_28 != ((void*)0))
  FUNC_5(VAR_28, VAR_4);

 return(VAR_30);
}
