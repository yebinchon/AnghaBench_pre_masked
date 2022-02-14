
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct scsi_sense_data_fixed {int flags; int add_sense_code; int add_sense_code_qual; } ;
struct scsi_sense_data_desc {int sense_key; int add_sense_code; int add_sense_code_qual; } ;
struct scsi_sense_data {int error_code; } ;






 int FUNC_0 (struct scsi_sense_data_desc*,scalar_t__,int*) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_sense_data_fixed*,int*) ;
 int FUNC_2 (struct scsi_sense_data_fixed*,scalar_t__,int*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

void
FUNC_3(struct scsi_sense_data *VAR_5, u_int VAR_6,
         int *VAR_7, int *VAR_8, int *VAR_9, int *VAR_10,
         int VAR_11)
{



 if (VAR_6 == 0) {
  if (VAR_11 == 0) {
   *VAR_7 = 0;
   *VAR_8 = 0;
   *VAR_9 = 0;
   *VAR_10 = 0;
  } else {
   *VAR_7 = -1;
   *VAR_8 = -1;
   *VAR_9 = -1;
   *VAR_10 = -1;
  }
  return;
 }

 *VAR_7 = VAR_5->error_code & VAR_0;

 switch (*VAR_7) {
 case 129:
 case 128: {
  struct scsi_sense_data_desc *VAR_12;

  VAR_12 = (struct scsi_sense_data_desc *)VAR_5;

  if (FUNC_0(VAR_12, VAR_6, VAR_8))
   *VAR_8 = VAR_12->sense_key & VAR_1;
  else
   *VAR_8 = (VAR_11) ? -1 : 0;

  if (FUNC_0(VAR_12, VAR_6, VAR_2))
   *VAR_9 = VAR_12->add_sense_code;
  else
   *VAR_9 = (VAR_11) ? -1 : 0;

  if (FUNC_0(VAR_12, VAR_6, VAR_3))
   *VAR_10 = VAR_12->add_sense_code_qual;
  else
   *VAR_10 = (VAR_11) ? -1 : 0;
  break;
 }
 case 131:
 case 130:
 default: {
  struct scsi_sense_data_fixed *VAR_13;

  VAR_13 = (struct scsi_sense_data_fixed *)VAR_5;

  if (FUNC_2(VAR_13, VAR_6, VAR_4))
   *VAR_8 = VAR_13->flags & VAR_1;
  else
   *VAR_8 = (VAR_11) ? -1 : 0;

  if ((FUNC_2(VAR_13, VAR_6, VAR_2))
   && (FUNC_1(VAR_13, VAR_2)))
   *VAR_9 = VAR_13->add_sense_code;
  else
   *VAR_9 = (VAR_11) ? -1 : 0;

  if ((FUNC_2(VAR_13, VAR_6,VAR_3))
   && (FUNC_1(VAR_13, VAR_3)))
   *VAR_10 = VAR_13->add_sense_code_qual;
  else
   *VAR_10 = (VAR_11) ? -1 : 0;
  break;
 }
 }
}
