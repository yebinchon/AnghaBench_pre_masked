
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_sks {int* sense_key_spec; } ;
struct scsi_sense_desc_header {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_sense_data*,int ,int*,int*,int*,int*,int) ;
 int FUNC_1 (struct sbuf*,int,int*) ;

void
FUNC_2(struct sbuf *VAR_1, struct scsi_sense_data *VAR_2,
      u_int VAR_3, uint8_t *VAR_4, int VAR_5,
      struct scsi_inquiry_data *VAR_6,
      struct scsi_sense_desc_header *VAR_7)
{
 struct scsi_sense_sks *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_8 = (struct scsi_sense_sks *)VAR_7;

 if ((VAR_8->sense_key_spec[0] & VAR_0) == 0)
  return;

 FUNC_0(VAR_2, VAR_3, &VAR_9, &VAR_10,
          &VAR_11, &VAR_12, 1);

 FUNC_1(VAR_1, VAR_10, VAR_8->sense_key_spec);
}
