
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int dummy; } ;
struct virtio_scsi_cmd_resp {scalar_t__ status; scalar_t__ sense_len; int sense; int resid; } ;
struct ccb_scsiio {scalar_t__ scsi_status; scalar_t__ sense_len; scalar_t__ sense_resid; int resid; int sense_data; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (struct vtscsi_softc*,int ,char*,struct ccb_scsiio*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static cam_status
FUNC_2(struct vtscsi_softc *VAR_6,
    struct ccb_scsiio *VAR_7, struct virtio_scsi_cmd_resp *VAR_8)
{
 cam_status VAR_9;

 VAR_7->scsi_status = VAR_8->status;
 VAR_7->resid = VAR_8->resid;

 if (VAR_7->scsi_status == VAR_3)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 if (VAR_8->sense_len > 0) {
  VAR_9 |= VAR_0;

  if (VAR_8->sense_len < VAR_7->sense_len)
   VAR_7->sense_resid = VAR_7->sense_len -
       VAR_8->sense_len;
  else
   VAR_7->sense_resid = 0;

  FUNC_0(&VAR_7->sense_data, VAR_8->sense,
      VAR_7->sense_len - VAR_7->sense_resid);
 }

 FUNC_1(VAR_6, VAR_9 == VAR_1 ? VAR_5 : VAR_4,
     "ccb=%p scsi_status=%#x resid=%u sense_resid=%u\n",
     VAR_7, VAR_7->scsi_status, VAR_7->resid, VAR_7->sense_resid);

 return (VAR_9);
}
