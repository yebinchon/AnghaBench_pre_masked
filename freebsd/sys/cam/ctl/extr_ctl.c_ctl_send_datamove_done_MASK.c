
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; int num_dmas; int dma_bt; int dma_start_bt; int port_status; int status; int nexus; int remote_io; } ;
struct TYPE_6__ {scalar_t__ sense_len; int sense_data; int scsi_status; int tag_type; int tag_num; int kern_data_resid; } ;
union ctl_io {TYPE_4__ io_hdr; TYPE_2__ scsiio; } ;
struct TYPE_7__ {scalar_t__ sense_len; int port_status; int sense_data; int scsi_status; int tag_type; int tag_num; int kern_data_resid; } ;
struct TYPE_5__ {int status; int nexus; int serializing_sc; union ctl_io* original_sc; int msg_type; } ;
union ctl_ha_msg {TYPE_3__ scsi; TYPE_1__ hdr; } ;
struct bintime {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct bintime*) ;
 int FUNC_1 (struct bintime*,int *) ;
 int FUNC_2 (union ctl_io*,int) ;
 int FUNC_3 (int ,union ctl_ha_msg*,scalar_t__,int ) ;
 int FUNC_4 (struct bintime*) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (union ctl_ha_msg*,int ,int) ;

__attribute__((used)) static void
FUNC_7(union ctl_io *VAR_5, int VAR_6)
{
 union ctl_ha_msg VAR_7;




 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.hdr.msg_type = VAR_3;
 VAR_7.hdr.original_sc = VAR_5;
 VAR_7.hdr.serializing_sc = VAR_5->io_hdr.remote_io;
 VAR_7.hdr.nexus = VAR_5->io_hdr.nexus;
 VAR_7.hdr.status = VAR_5->io_hdr.status;
 VAR_7.scsi.kern_data_resid = VAR_5->scsiio.kern_data_resid;
 VAR_7.scsi.tag_num = VAR_5->scsiio.tag_num;
 VAR_7.scsi.tag_type = VAR_5->scsiio.tag_type;
 VAR_7.scsi.scsi_status = VAR_5->scsiio.scsi_status;
 FUNC_5(&VAR_7.scsi.sense_data, &VAR_5->scsiio.sense_data,
        VAR_5->scsiio.sense_len);
 VAR_7.scsi.sense_len = VAR_5->scsiio.sense_len;
 VAR_7.scsi.port_status = VAR_5->io_hdr.port_status;
 VAR_5->io_hdr.flags &= ~VAR_1;
 if (VAR_5->io_hdr.flags & VAR_0) {
  FUNC_2(VAR_5, VAR_6);
  return;
 }
 FUNC_3(VAR_2, &VAR_7,
     sizeof(VAR_7.scsi) - sizeof(VAR_7.scsi.sense_data) +
     VAR_7.scsi.sense_len, VAR_4);






 VAR_5->io_hdr.num_dmas++;
}
