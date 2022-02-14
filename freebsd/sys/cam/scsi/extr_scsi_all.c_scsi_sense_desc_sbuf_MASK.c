
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t u_int ;
struct scsi_sense_desc_printer {scalar_t__ desc_type; int (* print_func ) (struct sbuf*,struct scsi_sense_data*,size_t,int *,int,struct scsi_inquiry_data*,struct scsi_sense_desc_header*) ;} ;
struct scsi_sense_desc_header {scalar_t__ desc_type; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 size_t FUNC_0 (struct scsi_sense_desc_printer*) ;
 int FUNC_1 (struct sbuf*,struct scsi_sense_data*,size_t,int *,int,struct scsi_inquiry_data*,struct scsi_sense_desc_header*) ;
 struct scsi_sense_desc_printer* VAR_0 ;
 int FUNC_2 (struct sbuf*,struct scsi_sense_data*,size_t,int *,int,struct scsi_inquiry_data*,struct scsi_sense_desc_header*) ;

void
FUNC_3(struct sbuf *VAR_1, struct scsi_sense_data *VAR_2,
       u_int VAR_3, uint8_t *VAR_4, int VAR_5,
       struct scsi_inquiry_data *VAR_6,
       struct scsi_sense_desc_header *VAR_7)
{
 u_int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  struct scsi_sense_desc_printer *VAR_9;

  VAR_9 = &VAR_0[VAR_8];





  if (VAR_9->desc_type > VAR_7->desc_type)
   break;

  if (VAR_9->desc_type != VAR_7->desc_type)
   continue;

  VAR_9->print_func(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7);

  return;
 }




 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7);
}
