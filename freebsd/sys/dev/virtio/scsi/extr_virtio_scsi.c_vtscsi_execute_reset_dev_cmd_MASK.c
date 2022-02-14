
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vtscsi_softc {struct sglist* vtscsi_sglist; } ;
struct virtio_scsi_ctrl_tmf_resp {int response; } ;
struct vtscsi_request {int vsr_complete; struct virtio_scsi_ctrl_tmf_resp vsr_tmf_resp; struct virtio_scsi_ctrl_tmf_resp vsr_tmf_req; TYPE_1__* vsr_ccb; } ;
struct virtio_scsi_ctrl_tmf_req {int response; } ;
struct sglist {int dummy; } ;
struct ccb_hdr {scalar_t__ target_lun; } ;
struct ccb_resetdev {struct ccb_hdr ccb_h; } ;
struct TYPE_2__ {struct ccb_resetdev crd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sglist*,struct virtio_scsi_ctrl_tmf_resp*,int) ;
 int FUNC_1 (struct sglist*) ;
 int VAR_5 ;
 int FUNC_2 (struct vtscsi_softc*,int ,char*,int,struct vtscsi_request*,struct ccb_hdr*) ;
 int FUNC_3 (struct vtscsi_softc*,struct vtscsi_request*,struct sglist*,int,int,int ) ;
 int FUNC_4 (struct ccb_hdr*,int ,int ,struct virtio_scsi_ctrl_tmf_resp*) ;

__attribute__((used)) static int
FUNC_5(struct vtscsi_softc *VAR_6,
    struct vtscsi_request *VAR_7)
{
 struct sglist *VAR_8;
 struct ccb_resetdev *VAR_9;
 struct ccb_hdr *VAR_10;
 struct virtio_scsi_ctrl_tmf_req *VAR_11;
 struct virtio_scsi_ctrl_tmf_resp *VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 VAR_8 = VAR_6->vtscsi_sglist;
 VAR_9 = &VAR_7->vsr_ccb->crd;
 VAR_10 = &VAR_9->ccb_h;
 VAR_11 = &VAR_7->vsr_tmf_req;
 VAR_12 = &VAR_7->vsr_tmf_resp;

 if (VAR_10->target_lun == VAR_0)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_2;

 FUNC_4(VAR_10, VAR_13, 0, VAR_11);

 FUNC_1(VAR_8);
 FUNC_0(VAR_8, VAR_11, sizeof(struct virtio_scsi_ctrl_tmf_req));
 FUNC_0(VAR_8, VAR_12, sizeof(struct virtio_scsi_ctrl_tmf_resp));

 VAR_7->vsr_complete = VAR_5;
 VAR_12->response = -1;

 VAR_14 = FUNC_3(VAR_6, VAR_7, VAR_8, 1, 1,
     VAR_3);

 FUNC_2(VAR_6, VAR_4, "error=%d req=%p ccb=%p\n",
     VAR_14, VAR_7, VAR_10);

 return (VAR_14);
}
