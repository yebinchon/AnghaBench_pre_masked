
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
typedef int u_int8_t ;
struct scsi_send_key_data_rpc {int region_code; int data_len; } ;
struct scsi_report_key_data_key1_key2 {int key1; int data_len; } ;
struct scsi_report_key_data_challenge {int challenge_key; int data_len; } ;
struct dvd_authinfo {int format; int agid; int region; int keychal; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 union ccb* FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (union ccb*,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *,int ,int *,int ,int ,int,int *,int,int ,int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (union ccb*) ;

__attribute__((used)) static int
FUNC_11(struct cam_periph *VAR_11, struct dvd_authinfo *VAR_12)
{
 union ccb *VAR_13;
 u_int8_t *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_16 = 0;
 VAR_14 = ((void*)0);

 switch(VAR_12->format) {
 case 130: {
  struct scsi_report_key_data_challenge *VAR_17;

  VAR_15 = sizeof(*VAR_17);

  VAR_17 = FUNC_6(VAR_15, VAR_4, VAR_5 | VAR_6);

  VAR_14 = (u_int8_t *)VAR_17;

  FUNC_9(VAR_15 - sizeof(VAR_17->data_len),
       VAR_17->data_len);

  FUNC_0(VAR_12->keychal, VAR_17->challenge_key,
        FUNC_7(sizeof(VAR_12->keychal),
     sizeof(VAR_17->challenge_key)));
  break;
 }
 case 129: {
  struct scsi_report_key_data_key1_key2 *VAR_18;

  VAR_15 = sizeof(*VAR_18);

  VAR_18 = FUNC_6(VAR_15, VAR_4, VAR_5 | VAR_6);

  VAR_14 = (u_int8_t *)VAR_18;

  FUNC_9(VAR_15 - sizeof(VAR_18->data_len),
       VAR_18->data_len);

  FUNC_0(VAR_12->keychal, VAR_18->key1,
        FUNC_7(sizeof(VAR_12->keychal), sizeof(VAR_18->key1)));

  break;
 }
 case 128: {
  struct scsi_send_key_data_rpc *VAR_19;

  VAR_15 = sizeof(*VAR_19);

  VAR_19 = FUNC_6(VAR_15, VAR_4, VAR_5 | VAR_6);

  VAR_14 = (u_int8_t *)VAR_19;

  FUNC_9(VAR_15 - sizeof(VAR_19->data_len),
       VAR_19->data_len);

  VAR_19->region_code = VAR_12->region;
  break;
 }
 default:
  return (VAR_2);
 }

 FUNC_2(VAR_11);
 VAR_13 = FUNC_1(VAR_11, VAR_0);

 FUNC_8(&VAR_13->csio,
                      VAR_9,
                     ((void*)0),
                         VAR_3,
                   VAR_12->agid,
                         VAR_12->format,
                       VAR_14,
                        VAR_15,
                        VAR_8,
                      50000);

 VAR_16 = FUNC_4(VAR_13, VAR_10, VAR_1,
                   VAR_7);

 FUNC_10(VAR_13);
 FUNC_3(VAR_11);

 if (VAR_14 != ((void*)0))
  FUNC_5(VAR_14, VAR_4);

 return(VAR_16);
}
