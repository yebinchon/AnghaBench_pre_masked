
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_stream {int byte3; } ;
struct scsi_sense_data_fixed {int flags; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_inquiry_data {int dummy; } ;
typedef int scsi_sense_data_type ;


 int FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_sense_data_fixed*,int ,int ) ;
 int VAR_3 ;



 int VAR_4 ;
 scalar_t__ FUNC_2 (struct scsi_sense_data_desc*,int ,int ) ;
 int FUNC_3 (struct scsi_sense_data*) ;

int
FUNC_4(struct scsi_sense_data *VAR_5, u_int VAR_6,
       struct scsi_inquiry_data *VAR_7, uint8_t *VAR_8)
{
 scsi_sense_data_type VAR_9;

 if (VAR_7 != ((void*)0)) {
  switch (FUNC_0(VAR_7)) {
  case 128:
   break;
  default:
   goto bailout;
   break;
  }
 }

 VAR_9 = FUNC_3(VAR_5);

 switch (VAR_9) {
 case 130: {
  struct scsi_sense_data_desc *VAR_10;
  struct scsi_sense_stream *VAR_11;

  VAR_10 = (struct scsi_sense_data_desc *)VAR_5;

  VAR_11 = (struct scsi_sense_stream *)FUNC_2(VAR_10,
      VAR_6, VAR_0);
  if (VAR_11 == ((void*)0))
   goto bailout;

  *VAR_8 = VAR_11->byte3;
  break;
 }
 case 129: {
  struct scsi_sense_data_fixed *VAR_12;

  VAR_12 = (struct scsi_sense_data_fixed *)VAR_5;

  if (FUNC_1(VAR_12, VAR_6, VAR_4) == 0)
   goto bailout;

  *VAR_8 = VAR_12->flags & (VAR_3|VAR_1|VAR_2);
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
