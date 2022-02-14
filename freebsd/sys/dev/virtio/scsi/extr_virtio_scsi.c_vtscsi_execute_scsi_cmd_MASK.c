
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtscsi_softc {struct virtqueue* vtscsi_request_vq; struct sglist* vtscsi_sglist; } ;
struct virtio_scsi_cmd_resp {int response; } ;
struct virtio_scsi_cmd_req {int dummy; } ;
struct vtscsi_request {int vsr_callout; int vsr_flags; int vsr_complete; struct virtio_scsi_cmd_resp vsr_cmd_resp; struct virtio_scsi_cmd_req vsr_cmd_req; TYPE_1__* vsr_ccb; } ;
struct virtqueue {int dummy; } ;
struct sglist {int dummy; } ;
struct ccb_hdr {int timeout; struct vtscsi_request* ccbh_vtscsi_req; int status; } ;
struct ccb_scsiio {struct ccb_hdr ccb_h; } ;
struct TYPE_2__ {struct ccb_scsiio csio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int ,int ,struct vtscsi_request*,int ) ;
 int FUNC_1 (struct virtqueue*,struct vtscsi_request*,struct sglist*,int,int) ;
 int FUNC_2 (struct virtqueue*) ;
 int VAR_8 ;
 int FUNC_3 (struct vtscsi_softc*,int ,char*,int,struct vtscsi_request*,struct ccb_hdr*) ;
 int FUNC_4 (struct vtscsi_request*,int ,char*,struct vtscsi_request*,struct ccb_hdr*) ;
 int FUNC_5 (struct vtscsi_softc*,struct vtscsi_request*,int*,int*) ;
 int FUNC_6 (struct vtscsi_softc*,int ) ;
 int FUNC_7 (struct ccb_scsiio*,struct virtio_scsi_cmd_req*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_8(struct vtscsi_softc *VAR_10, struct vtscsi_request *VAR_11)
{
 struct sglist *VAR_12;
 struct virtqueue *VAR_13;
 struct ccb_scsiio *VAR_14;
 struct ccb_hdr *VAR_15;
 struct virtio_scsi_cmd_req *VAR_16;
 struct virtio_scsi_cmd_resp *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_12 = VAR_10->vtscsi_sglist;
 VAR_13 = VAR_10->vtscsi_request_vq;
 VAR_14 = &VAR_11->vsr_ccb->csio;
 VAR_15 = &VAR_14->ccb_h;
 VAR_16 = &VAR_11->vsr_cmd_req;
 VAR_17 = &VAR_11->vsr_cmd_resp;

 FUNC_7(VAR_14, VAR_16);

 VAR_20 = FUNC_5(VAR_10, VAR_11, &VAR_18, &VAR_19);
 if (VAR_20)
  return (VAR_20);

 VAR_11->vsr_complete = VAR_8;
 VAR_17->response = -1;

 VAR_20 = FUNC_1(VAR_13, VAR_11, VAR_12, VAR_18, VAR_19);
 if (VAR_20) {
  FUNC_3(VAR_10, VAR_4,
      "enqueue error=%d req=%p ccb=%p\n", VAR_20, VAR_11, VAR_15);

  VAR_15->status = VAR_0;
  FUNC_6(VAR_10, VAR_5);
  return (VAR_20);
 }

 VAR_15->status |= VAR_1;
 VAR_15->ccbh_vtscsi_req = VAR_11;

 FUNC_2(VAR_13);

 if (VAR_15->timeout != VAR_2) {
  VAR_11->vsr_flags |= VAR_6;
  FUNC_0(&VAR_11->vsr_callout, VAR_3 * VAR_15->timeout,
      0, VAR_9, VAR_11, 0);
 }

 FUNC_4(VAR_11, VAR_7, "enqueued req=%p ccb=%p\n",
     VAR_11, VAR_15);

 return (0);
}
