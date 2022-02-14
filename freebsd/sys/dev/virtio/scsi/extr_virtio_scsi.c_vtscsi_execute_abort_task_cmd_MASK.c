
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vtscsi_softc {struct sglist* vtscsi_sglist; } ;
struct virtio_scsi_ctrl_tmf_resp {int response; } ;
struct vtscsi_request {scalar_t__ vsr_state; int vsr_flags; int vsr_complete; int vsr_callout; struct virtio_scsi_ctrl_tmf_resp vsr_tmf_resp; struct virtio_scsi_ctrl_tmf_resp vsr_tmf_req; TYPE_1__* vsr_ccb; } ;
struct virtio_scsi_ctrl_tmf_req {int response; } ;
struct sglist {int dummy; } ;
struct ccb_hdr {scalar_t__ func_code; struct vtscsi_request* ccbh_vtscsi_req; } ;
struct ccb_abort {TYPE_2__* abort_ccb; struct ccb_hdr ccb_h; } ;
struct TYPE_4__ {struct ccb_hdr ccb_h; } ;
struct TYPE_3__ {struct ccb_abort cab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sglist*,struct virtio_scsi_ctrl_tmf_resp*,int) ;
 int FUNC_2 (struct sglist*) ;
 int VAR_9 ;
 int FUNC_3 (struct vtscsi_softc*,int ,char*,int,struct vtscsi_request*,struct ccb_hdr*,struct vtscsi_request*) ;
 int FUNC_4 (struct vtscsi_softc*,struct vtscsi_request*,struct sglist*,int,int,int ) ;
 int FUNC_5 (struct ccb_hdr*,int ,uintptr_t,struct virtio_scsi_ctrl_tmf_resp*) ;

__attribute__((used)) static int
FUNC_6(struct vtscsi_softc *VAR_10,
    struct vtscsi_request *VAR_11)
{
 struct sglist *VAR_12;
 struct ccb_abort *VAR_13;
 struct ccb_hdr *VAR_14;
 struct ccb_hdr *VAR_15;
 struct vtscsi_request *VAR_16;
 struct virtio_scsi_ctrl_tmf_req *VAR_17;
 struct virtio_scsi_ctrl_tmf_resp *VAR_18;
 int VAR_19;

 VAR_12 = VAR_10->vtscsi_sglist;
 VAR_13 = &VAR_11->vsr_ccb->cab;
 VAR_14 = &VAR_13->ccb_h;
 VAR_17 = &VAR_11->vsr_tmf_req;
 VAR_18 = &VAR_11->vsr_tmf_resp;


 VAR_15 = &VAR_13->abort_ccb->ccb_h;
 VAR_16 = VAR_15->ccbh_vtscsi_req;

 if (VAR_15->func_code != VAR_8 || VAR_16 == ((void*)0)) {
  VAR_19 = VAR_1;
  goto fail;
 }


 if (VAR_16->vsr_state != VAR_6) {
  VAR_19 = VAR_0;
  goto fail;
 }

 VAR_16->vsr_state = VAR_5;
 if (VAR_16->vsr_flags & VAR_4)
  FUNC_0(&VAR_16->vsr_callout);

 FUNC_5(VAR_14, VAR_2,
     (uintptr_t) VAR_15, VAR_17);

 FUNC_2(VAR_12);
 FUNC_1(VAR_12, VAR_17, sizeof(struct virtio_scsi_ctrl_tmf_req));
 FUNC_1(VAR_12, VAR_18, sizeof(struct virtio_scsi_ctrl_tmf_resp));

 VAR_11->vsr_complete = VAR_9;
 VAR_18->response = -1;

 VAR_19 = FUNC_4(VAR_10, VAR_11, VAR_12, 1, 1,
     VAR_3);

fail:
 FUNC_3(VAR_10, VAR_7, "error=%d req=%p abort_ccb=%p "
     "abort_req=%p\n", VAR_19, VAR_11, VAR_15, VAR_16);

 return (VAR_19);
}
