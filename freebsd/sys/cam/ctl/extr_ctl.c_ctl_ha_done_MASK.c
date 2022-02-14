
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sense_len; int sense_data; int tag_type; int tag_num; int scsi_status; } ;
struct TYPE_6__ {scalar_t__ io_type; int status; int nexus; int remote_io; } ;
union ctl_io {TYPE_3__ scsiio; TYPE_2__ io_hdr; } ;
struct TYPE_8__ {scalar_t__ sense_len; int sense_data; int tag_type; int tag_num; int scsi_status; } ;
struct TYPE_5__ {int status; int nexus; int original_sc; int msg_type; } ;
union ctl_ha_msg {TYPE_4__ scsi; TYPE_1__ hdr; } ;
typedef int msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int ,union ctl_ha_msg*,scalar_t__,int ) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (union ctl_ha_msg*,int ,int) ;

__attribute__((used)) static void
FUNC_4(union ctl_io *VAR_4)
{
 union ctl_ha_msg VAR_5;

 if (VAR_4->io_hdr.io_type == VAR_1) {
  FUNC_3(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.hdr.msg_type = VAR_2;
  VAR_5.hdr.original_sc = VAR_4->io_hdr.remote_io;
  VAR_5.hdr.nexus = VAR_4->io_hdr.nexus;
  VAR_5.hdr.status = VAR_4->io_hdr.status;
  VAR_5.scsi.scsi_status = VAR_4->scsiio.scsi_status;
  VAR_5.scsi.tag_num = VAR_4->scsiio.tag_num;
  VAR_5.scsi.tag_type = VAR_4->scsiio.tag_type;
  VAR_5.scsi.sense_len = VAR_4->scsiio.sense_len;
  FUNC_2(&VAR_5.scsi.sense_data, &VAR_4->scsiio.sense_data,
      VAR_4->scsiio.sense_len);
  FUNC_1(VAR_0, &VAR_5,
      sizeof(VAR_5.scsi) - sizeof(VAR_5.scsi.sense_data) +
      VAR_5.scsi.sense_len, VAR_3);
 }
 FUNC_0(VAR_4);
}
