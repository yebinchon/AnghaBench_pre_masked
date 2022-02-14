
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtscsi_softc {struct sglist* vtscsi_sglist; } ;
struct virtio_scsi_ctrl_tmf_resp {int response; } ;
struct vtscsi_request {int vsr_complete; struct vtscsi_request* vsr_timedout_req; struct virtio_scsi_ctrl_tmf_resp vsr_tmf_resp; struct virtio_scsi_ctrl_tmf_resp vsr_tmf_req; TYPE_1__* vsr_ccb; } ;
struct virtio_scsi_ctrl_tmf_req {int response; } ;
struct sglist {int dummy; } ;
struct ccb_hdr {int dummy; } ;
struct TYPE_2__ {struct ccb_hdr ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sglist*,struct virtio_scsi_ctrl_tmf_resp*,int) ;
 int FUNC_1 (struct sglist*) ;
 int VAR_4 ;
 struct vtscsi_request* FUNC_2 (struct vtscsi_softc*) ;
 int FUNC_3 (struct vtscsi_softc*,int ,char*,int,struct vtscsi_request*,struct vtscsi_request*,struct ccb_hdr*) ;
 int FUNC_4 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_5 (struct vtscsi_softc*,struct vtscsi_request*,struct sglist*,int,int,int ) ;
 int FUNC_6 (struct ccb_hdr*,int ,uintptr_t,struct virtio_scsi_ctrl_tmf_resp*) ;

__attribute__((used)) static int
FUNC_7(struct vtscsi_softc *VAR_5,
    struct vtscsi_request *VAR_6)
{
 struct sglist *VAR_7;
 struct ccb_hdr *VAR_8;
 struct vtscsi_request *VAR_9;
 struct virtio_scsi_ctrl_tmf_req *VAR_10;
 struct virtio_scsi_ctrl_tmf_resp *VAR_11;
 int VAR_12;

 VAR_7 = VAR_5->vtscsi_sglist;
 VAR_8 = &VAR_6->vsr_ccb->ccb_h;

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9 == ((void*)0)) {
  VAR_12 = VAR_0;
  goto fail;
 }

 VAR_10 = &VAR_9->vsr_tmf_req;
 VAR_11 = &VAR_9->vsr_tmf_resp;

 FUNC_6(VAR_8, VAR_1,
     (uintptr_t) VAR_8, VAR_10);

 FUNC_1(VAR_7);
 FUNC_0(VAR_7, VAR_10, sizeof(struct virtio_scsi_ctrl_tmf_req));
 FUNC_0(VAR_7, VAR_11, sizeof(struct virtio_scsi_ctrl_tmf_resp));

 VAR_9->vsr_timedout_req = VAR_6;
 VAR_9->vsr_complete = VAR_4;
 VAR_11->response = -1;

 VAR_12 = FUNC_5(VAR_5, VAR_9, VAR_7, 1, 1,
     VAR_3);
 if (VAR_12 == 0)
  return (0);

 FUNC_4(VAR_5, VAR_9);

fail:
 FUNC_3(VAR_5, VAR_2, "error=%d req=%p "
     "timedout req=%p ccb=%p\n", VAR_12, VAR_9, VAR_6, VAR_8);

 return (VAR_12);
}
