
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtscsi_softc {int dummy; } ;
struct virtio_scsi_cmd_resp {int dummy; } ;
struct vtscsi_request {int vsr_flags; scalar_t__ vsr_state; TYPE_1__* vsr_ccb; int vsr_callout; struct virtio_scsi_cmd_resp vsr_cmd_resp; } ;
struct ccb_hdr {int status; int path; struct vtscsi_request* ccbh_vtscsi_req; } ;
struct ccb_scsiio {struct ccb_hdr ccb_h; } ;
typedef int cam_status ;
struct TYPE_2__ {struct ccb_scsiio csio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vtscsi_softc*,struct ccb_scsiio*,struct virtio_scsi_cmd_resp*) ;
 int FUNC_3 (struct vtscsi_softc*,int ,char*,struct vtscsi_request*,struct ccb_hdr*,int) ;
 int FUNC_4 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_5 (struct virtio_scsi_cmd_resp*) ;
 scalar_t__ FUNC_6 (struct vtscsi_softc*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct vtscsi_softc *VAR_11, struct vtscsi_request *VAR_12)
{
 struct ccb_hdr *VAR_13;
 struct ccb_scsiio *VAR_14;
 struct virtio_scsi_cmd_resp *VAR_15;
 cam_status VAR_16;

 VAR_14 = &VAR_12->vsr_ccb->csio;
 VAR_13 = &VAR_14->ccb_h;
 VAR_15 = &VAR_12->vsr_cmd_resp;

 FUNC_0(VAR_13->ccbh_vtscsi_req == VAR_12,
     ("ccb %p req mismatch %p/%p", VAR_13, VAR_13->ccbh_vtscsi_req, VAR_12));

 if (VAR_12->vsr_flags & VAR_8)
  FUNC_1(&VAR_12->vsr_callout);

 VAR_16 = FUNC_5(VAR_15);
 if (VAR_16 == VAR_3) {
  if (VAR_12->vsr_state == VAR_9)
   VAR_16 = VAR_0;
 } else if (VAR_16 == VAR_4)
  VAR_16 = FUNC_2(VAR_11, VAR_14, VAR_15);

 if ((VAR_16 & VAR_5) != VAR_4) {
  VAR_16 |= VAR_1;
  FUNC_8(VAR_13->path, 1);
 }

 if (FUNC_6(VAR_11, VAR_6 | VAR_7) != 0)
  VAR_16 |= VAR_2;

 FUNC_3(VAR_11, VAR_10, "req=%p ccb=%p status=%#x\n",
     VAR_12, VAR_13, VAR_16);

 VAR_13->status = VAR_16;
 FUNC_7(VAR_12->vsr_ccb);
 FUNC_4(VAR_11, VAR_12);
}
