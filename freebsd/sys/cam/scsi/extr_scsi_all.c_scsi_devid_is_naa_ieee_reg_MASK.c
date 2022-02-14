
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_vpd_id_naa_ieee_reg {int dummy; } ;
struct scsi_vpd_id_naa_basic {int naa; } ;
struct scsi_vpd_id_descriptor {int id_type; int length; scalar_t__ identifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(uint8_t *VAR_5)
{
 struct scsi_vpd_id_descriptor *VAR_6;
 struct scsi_vpd_id_naa_basic *VAR_7;
 int VAR_8;

 VAR_6 = (struct scsi_vpd_id_descriptor *)VAR_5;
 VAR_7 = (struct scsi_vpd_id_naa_basic *)VAR_6->identifier;
 if ((VAR_6->id_type & VAR_3) != VAR_4)
  return 0;
 if (VAR_6->length < sizeof(struct scsi_vpd_id_naa_ieee_reg))
  return 0;
 VAR_8 = VAR_7->naa >> VAR_2;
 if (VAR_8 != VAR_1 && VAR_8 != VAR_0)
  return 0;
 return 1;
}
