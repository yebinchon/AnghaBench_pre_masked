
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_data {int error_code; } ;
typedef int scsi_sense_data_type ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

scsi_sense_data_type
FUNC_0(struct scsi_sense_data *VAR_4)
{
 switch (VAR_4->error_code & VAR_0) {
 case 129:
 case 128:
  return (VAR_1);
  break;
 case 131:
 case 130:
  return (VAR_2);
  break;
 default:
  break;
 }

 return (VAR_3);
}
