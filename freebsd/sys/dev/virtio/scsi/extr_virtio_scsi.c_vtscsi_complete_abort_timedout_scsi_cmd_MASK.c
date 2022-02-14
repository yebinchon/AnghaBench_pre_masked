
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct vtscsi_softc {int vtscsi_flags; } ;
struct virtio_scsi_ctrl_tmf_resp {scalar_t__ response; } ;
struct vtscsi_request {scalar_t__ vsr_state; struct vtscsi_request* vsr_timedout_req; struct virtio_scsi_ctrl_tmf_resp vsr_tmf_resp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vtscsi_softc*,int ,char*,struct vtscsi_request*,struct vtscsi_request*,scalar_t__) ;
 int FUNC_1 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_2 (struct vtscsi_softc*) ;

__attribute__((used)) static void
FUNC_3(struct vtscsi_softc *VAR_5,
    struct vtscsi_request *VAR_6)
{
 struct virtio_scsi_ctrl_tmf_resp *VAR_7;
 struct vtscsi_request *VAR_8;
 uint8_t VAR_9;

 VAR_7 = &VAR_6->vsr_tmf_resp;
 VAR_9 = VAR_7->response;
 VAR_8 = VAR_6->vsr_timedout_req;

 FUNC_0(VAR_5, VAR_4, "req=%p to_req=%p response=%d\n",
     VAR_6, VAR_8, VAR_9);

 FUNC_1(VAR_5, VAR_6);





 if (VAR_8->vsr_state != VAR_3)
  return;


 if (VAR_9 == VAR_0)
  return;


 if (VAR_5->vtscsi_flags & VAR_1)
  return;


 if (VAR_5->vtscsi_flags & VAR_2)
  return;

 FUNC_2(VAR_5);
}
