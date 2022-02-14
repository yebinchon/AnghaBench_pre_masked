
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; scalar_t__ sense_len; int scsi_status; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct ctl_scsiio *VAR_2)
{

 VAR_2->scsi_status = VAR_1;
 VAR_2->sense_len = 0;
 VAR_2->io_hdr.status = VAR_0;
}
