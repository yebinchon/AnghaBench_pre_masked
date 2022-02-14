
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scsi_sense_desc_header {scalar_t__ desc_type; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_find_desc_info {scalar_t__ desc_type; struct scsi_sense_desc_header* header; } ;



__attribute__((used)) static int
FUNC_0(struct scsi_sense_data_desc *VAR_0, u_int VAR_1,
      struct scsi_sense_desc_header *VAR_2, void *VAR_3)
{
 struct scsi_find_desc_info *VAR_4;

 VAR_4 = (struct scsi_find_desc_info *)VAR_3;

 if (VAR_2->desc_type == VAR_4->desc_type) {
  VAR_4->header = VAR_2;


  return (1);
 } else
  return (0);
}
