
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_vpd_id_descriptor {int id_type; int proto_codeset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

int
FUNC_1(uint8_t *VAR_3)
{
 struct scsi_vpd_id_descriptor *VAR_4;

 VAR_4 = (struct scsi_vpd_id_descriptor *)VAR_3;
 if (!FUNC_0(VAR_3))
  return 0;
 if ((VAR_4->id_type & VAR_1) == 0)
  return 0;
 if ((VAR_4->proto_codeset >> VAR_2) != VAR_0)
  return 0;
 return 1;
}
