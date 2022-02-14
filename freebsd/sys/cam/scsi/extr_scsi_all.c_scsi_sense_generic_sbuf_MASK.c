
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_desc_header {int length; int desc_type; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,int ) ;

void
FUNC_1(struct sbuf *VAR_0, struct scsi_sense_data *VAR_1,
   u_int VAR_2, uint8_t *VAR_3, int VAR_4,
   struct scsi_inquiry_data *VAR_5,
   struct scsi_sense_desc_header *VAR_6)
{
 int VAR_7;
 uint8_t *VAR_8;

 FUNC_0(VAR_0, "Descriptor %#x:", VAR_6->desc_type);

 VAR_8 = (uint8_t *)&VAR_6[1];

 for (VAR_7 = 0; VAR_7 < VAR_6->length; VAR_7++, VAR_8++)
  FUNC_0(VAR_0, " %02x", *VAR_8);
}
