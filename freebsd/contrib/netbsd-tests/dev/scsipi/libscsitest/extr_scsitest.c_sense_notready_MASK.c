
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_data {int response_code; int asc; int ascq; int extra_len; int flags; } ;
struct TYPE_2__ {struct scsi_sense_data scsi_sense; } ;
struct scsipi_xfer {int error; TYPE_1__ sense; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct scsipi_xfer *VAR_2)
{
 struct scsi_sense_data *VAR_3 = &VAR_2->sense.scsi_sense;

 VAR_2->error = VAR_1;

 VAR_3->response_code = 0x70;
 VAR_3->flags = VAR_0;
 VAR_3->asc = 0x3A;
 VAR_3->ascq = 0x00;
 VAR_3->extra_len = 6;
}
