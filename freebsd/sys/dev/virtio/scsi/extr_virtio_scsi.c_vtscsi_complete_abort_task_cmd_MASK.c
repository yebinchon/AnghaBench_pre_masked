
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_hdr {int status; } ;
union ccb {struct ccb_hdr ccb_h; } ;
struct vtscsi_softc {int dummy; } ;
struct virtio_scsi_ctrl_tmf_resp {int response; } ;
struct vtscsi_request {struct virtio_scsi_ctrl_tmf_resp vsr_tmf_resp; union ccb* vsr_ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_1 (union ccb*) ;

__attribute__((used)) static void
FUNC_2(struct vtscsi_softc *VAR_3,
    struct vtscsi_request *VAR_4)
{
 union ccb *VAR_5;
 struct ccb_hdr *VAR_6;
 struct virtio_scsi_ctrl_tmf_resp *VAR_7;

 VAR_5 = VAR_4->vsr_ccb;
 VAR_6 = &VAR_5->ccb_h;
 VAR_7 = &VAR_4->vsr_tmf_resp;

 switch (VAR_7->response) {
 case 129:
  VAR_6->status = VAR_0;
  break;
 case 128:
  VAR_6->status = VAR_2;
  break;
 default:
  VAR_6->status = VAR_1;
  break;
 }

 FUNC_1(VAR_5);
 FUNC_0(VAR_3, VAR_4);
}
