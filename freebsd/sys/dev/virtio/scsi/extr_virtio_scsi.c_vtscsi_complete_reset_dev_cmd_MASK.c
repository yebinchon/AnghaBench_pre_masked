
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_hdr {int status; int target_lun; int target_id; } ;
union ccb {struct ccb_hdr ccb_h; } ;
struct vtscsi_softc {int dummy; } ;
struct virtio_scsi_ctrl_tmf_resp {scalar_t__ response; } ;
struct vtscsi_request {struct virtio_scsi_ctrl_tmf_resp vsr_tmf_resp; union ccb* vsr_ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vtscsi_softc*,int ,int ,int ) ;
 int FUNC_1 (struct vtscsi_softc*,int ,char*,struct vtscsi_request*,union ccb*,scalar_t__) ;
 int FUNC_2 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static void
FUNC_4(struct vtscsi_softc *VAR_5,
    struct vtscsi_request *VAR_6)
{
 union ccb *VAR_7;
 struct ccb_hdr *VAR_8;
 struct virtio_scsi_ctrl_tmf_resp *VAR_9;

 VAR_7 = VAR_6->vsr_ccb;
 VAR_8 = &VAR_7->ccb_h;
 VAR_9 = &VAR_6->vsr_tmf_resp;

 FUNC_1(VAR_5, VAR_4, "req=%p ccb=%p response=%d\n",
     VAR_6, VAR_7, VAR_9->response);

 if (VAR_9->response == VAR_3) {
  VAR_8->status = VAR_1;
  FUNC_0(VAR_5, VAR_0, VAR_8->target_id,
      VAR_8->target_lun);
 } else
  VAR_8->status = VAR_2;

 FUNC_3(VAR_7);
 FUNC_2(VAR_5, VAR_6);
}
