
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_desc_header {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_sense_block {int byte3; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,int ) ;

void
FUNC_1(struct sbuf *VAR_0, struct scsi_sense_data *VAR_1,
        u_int VAR_2, uint8_t *VAR_3, int VAR_4,
        struct scsi_inquiry_data *VAR_5,
        struct scsi_sense_desc_header *VAR_6)
{
 struct scsi_sense_block *VAR_7;

 VAR_7 = (struct scsi_sense_block *)VAR_6;
 FUNC_0(VAR_0, VAR_7->byte3);
}
