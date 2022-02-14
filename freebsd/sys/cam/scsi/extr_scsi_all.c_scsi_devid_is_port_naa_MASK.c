
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_vpd_id_descriptor {int id_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(uint8_t *VAR_4)
{
 struct scsi_vpd_id_descriptor *VAR_5;

 VAR_5 = (struct scsi_vpd_id_descriptor *)VAR_4;
 if ((VAR_5->id_type & VAR_0) != VAR_1)
  return 0;
 if ((VAR_5->id_type & VAR_2) != VAR_3)
  return 0;
 return 1;
}
