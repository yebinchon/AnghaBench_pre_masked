
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_vpd_id_descriptor {int dummy; } ;
struct scsi_vpd_device_id {scalar_t__ desc_list; int length; } ;
typedef int scsi_devid_checkfn_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct scsi_vpd_id_descriptor* FUNC_2 (struct scsi_vpd_id_descriptor*,int,int ) ;

struct scsi_vpd_id_descriptor *
FUNC_3(struct scsi_vpd_device_id *VAR_0, uint32_t VAR_1,
    scsi_devid_checkfn_t VAR_2)
{
 uint32_t VAR_3;

 if (VAR_1 < sizeof(*VAR_0))
  return (((void*)0));
 VAR_3 = FUNC_0(FUNC_1(VAR_0->length), VAR_1 - sizeof(*VAR_0));
 return (FUNC_2((struct scsi_vpd_id_descriptor *)
     VAR_0->desc_list, VAR_3, VAR_2));
}
