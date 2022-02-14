
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func_code; int status; } ;
struct TYPE_3__ {int flags; int status; } ;
struct ccb_nvmeio {int cmd; TYPE_1__ ccb_h; int dxfer_len; void* data_ptr; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_nvmeio nvmeio; } ;
typedef int uint32_t ;
struct nvme_request {int cmd; } ;
struct nvme_controller {int dummy; } ;
struct cam_sim {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int *,int) ;
 struct nvme_request* FUNC_1 (struct bio*,int ,union ccb*) ;
 struct nvme_request* FUNC_2 (union ccb*,int ,union ccb*) ;
 struct nvme_request* FUNC_3 (int ,union ccb*) ;
 struct nvme_request* FUNC_4 (void*,int ,int ,union ccb*) ;
 int FUNC_5 (struct nvme_controller*,struct nvme_request*) ;
 int FUNC_6 (struct nvme_controller*,struct nvme_request*) ;
 int VAR_6 ;
 struct nvme_controller* FUNC_7 (struct cam_sim*) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(struct cam_sim *VAR_7, union ccb *VAR_8)
{
 struct ccb_nvmeio *VAR_9 = &VAR_8->nvmeio;
 struct nvme_request *VAR_10;
 void *VAR_11;
 uint32_t VAR_12;
 struct nvme_controller *VAR_13;

 VAR_13 = FUNC_7(VAR_7);
 VAR_11 = VAR_9->data_ptr;
 VAR_12 = VAR_9->dxfer_len;

 if ((VAR_9->ccb_h.flags & VAR_1) == VAR_0)
  VAR_10 = FUNC_1((struct bio *)VAR_11,
      VAR_6, VAR_8);
 else if ((VAR_9->ccb_h.flags & VAR_2) == VAR_2)
  VAR_10 = FUNC_2(VAR_8, VAR_6, VAR_8);
 else if (VAR_11 == ((void*)0))
  VAR_10 = FUNC_3(VAR_6, VAR_8);
 else
  VAR_10 = FUNC_4(VAR_11, VAR_12,
      VAR_6, VAR_8);

 if (VAR_10 == ((void*)0)) {
  VAR_9->ccb_h.status = VAR_3;
  FUNC_8(VAR_8);
  return;
 }
 VAR_8->ccb_h.status |= VAR_4;

 FUNC_0(&VAR_10->cmd, &VAR_8->nvmeio.cmd, sizeof(VAR_8->nvmeio.cmd));

 if (VAR_8->ccb_h.func_code == VAR_5)
  FUNC_6(VAR_13, VAR_10);
 else
  FUNC_5(VAR_13, VAR_10);
}
