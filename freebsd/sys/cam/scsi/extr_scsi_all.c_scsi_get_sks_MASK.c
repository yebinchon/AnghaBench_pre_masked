
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct scsi_sense_sks {int* sense_key_spec; } ;
struct scsi_sense_data_fixed {int* sense_key_spec; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
typedef int scsi_sense_data_type ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_sense_data_fixed*,int ) ;
 int FUNC_1 (struct scsi_sense_data_fixed*,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_2 (int*,int *,int) ;
 scalar_t__ FUNC_3 (struct scsi_sense_data_desc*,scalar_t__,int ) ;
 int FUNC_4 (struct scsi_sense_data*) ;
 int VAR_3 ;

int
FUNC_5(struct scsi_sense_data *VAR_4, u_int VAR_5, uint8_t *VAR_6)
{
 scsi_sense_data_type VAR_7;

 if (VAR_5 == 0)
  goto bailout;

 VAR_7 = FUNC_4(VAR_4);

 switch (VAR_7) {
 case 129: {
  struct scsi_sense_data_desc *VAR_8;
  struct scsi_sense_sks *VAR_9;

  VAR_8 = (struct scsi_sense_data_desc *)VAR_4;

  VAR_9 = (struct scsi_sense_sks *)FUNC_3(VAR_8, VAR_5,
              VAR_0);
  if (VAR_9 == ((void*)0))
   goto bailout;

  if ((VAR_9->sense_key_spec[0] & VAR_2) == 0)
   goto bailout;

  FUNC_2(VAR_9->sense_key_spec, VAR_6, sizeof(VAR_9->sense_key_spec));
  break;
 }
 case 128: {
  struct scsi_sense_data_fixed *VAR_10;

  VAR_10 = (struct scsi_sense_data_fixed *)VAR_4;

  if ((FUNC_1(VAR_10, VAR_5, VAR_3)== 0)
   || (FUNC_0(VAR_10, VAR_3) == 0))
   goto bailout;

  if ((VAR_10->sense_key_spec[0] & VAR_1) == 0)
   goto bailout;

  FUNC_2(VAR_10->sense_key_spec, VAR_6,sizeof(VAR_10->sense_key_spec));
  break;
 }
 default:
  goto bailout;
  break;
 }
 return (0);
bailout:
 return (1);
}
