
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct TYPE_7__ {int sense_len; int scsi_status; int sense_data; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_3__ scsiio; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_8__ {int sense_len; int scsi_status; int sense_data; } ;
union ctl_ha_msg {TYPE_1__ hdr; TYPE_4__ scsi; } ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_1(union ctl_io *VAR_0, union ctl_ha_msg *VAR_1)
{

 FUNC_0(&VAR_1->scsi.sense_data, &VAR_0->scsiio.sense_data,
     VAR_0->scsiio.sense_len);
 VAR_1->scsi.scsi_status = VAR_0->scsiio.scsi_status;
 VAR_1->scsi.sense_len = VAR_0->scsiio.sense_len;
 VAR_1->hdr.status = VAR_0->io_hdr.status;
}
