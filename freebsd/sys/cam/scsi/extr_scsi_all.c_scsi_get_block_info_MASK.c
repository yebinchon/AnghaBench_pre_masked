
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_data_fixed {int flags; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_sense_block {int byte3; } ;
struct scsi_inquiry_data {int dummy; } ;
typedef int scsi_sense_data_type ;


 int FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_sense_data_fixed*,int ,int ) ;
 int VAR_1 ;





 int VAR_2 ;
 scalar_t__ FUNC_2 (struct scsi_sense_data_desc*,int ,int ) ;
 int FUNC_3 (struct scsi_sense_data*) ;

int
FUNC_4(struct scsi_sense_data *VAR_3, u_int VAR_4,
      struct scsi_inquiry_data *VAR_5, uint8_t *VAR_6)
{
 scsi_sense_data_type VAR_7;

 if (VAR_5 != ((void*)0)) {
  switch (FUNC_0(VAR_5)) {
  case 130:
  case 129:
  case 128:
   break;
  default:
   goto bailout;
   break;
  }
 }

 VAR_7 = FUNC_3(VAR_3);

 switch (VAR_7) {
 case 132: {
  struct scsi_sense_data_desc *VAR_8;
  struct scsi_sense_block *VAR_9;

  VAR_8 = (struct scsi_sense_data_desc *)VAR_3;

  VAR_9 = (struct scsi_sense_block *)FUNC_2(VAR_8,
      VAR_4, VAR_0);
  if (VAR_9 == ((void*)0))
   goto bailout;

  *VAR_6 = VAR_9->byte3;
  break;
 }
 case 131: {
  struct scsi_sense_data_fixed *VAR_10;

  VAR_10 = (struct scsi_sense_data_fixed *)VAR_3;

  if (FUNC_1(VAR_10, VAR_4, VAR_2) == 0)
   goto bailout;

  *VAR_6 = VAR_10->flags & VAR_1;
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
