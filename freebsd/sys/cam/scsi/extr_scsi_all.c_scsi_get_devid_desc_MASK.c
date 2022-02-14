
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_vpd_id_descriptor {int length; int * identifier; } ;
typedef scalar_t__ (* scsi_devid_checkfn_t ) (int *) ;



struct scsi_vpd_id_descriptor *
FUNC_0(struct scsi_vpd_id_descriptor *VAR_0, uint32_t VAR_1,
    scsi_devid_checkfn_t VAR_2)
{
 uint8_t *VAR_3;

 VAR_3 = (uint8_t *)VAR_0 + VAR_1;

 for (; VAR_0->identifier <= VAR_3 &&
     VAR_0->identifier + VAR_0->length <= VAR_3;
     VAR_0 = (struct scsi_vpd_id_descriptor *)(VAR_0->identifier
          + VAR_0->length)) {

  if (VAR_2 == ((void*)0) || VAR_2((uint8_t *)VAR_0) != 0)
   return (VAR_0);
 }
 return (((void*)0));
}
