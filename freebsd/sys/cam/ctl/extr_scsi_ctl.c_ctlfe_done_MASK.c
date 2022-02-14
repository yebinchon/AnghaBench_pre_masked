
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ io_type; int flags; } ;
struct TYPE_7__ {int task_status; int task_resp; } ;
union ctl_io {TYPE_3__ io_hdr; TYPE_2__ taskio; } ;
struct TYPE_10__ {int flags; int func_code; int status; int path; } ;
struct TYPE_6__ {int arg; } ;
union ccb {TYPE_5__ ccb_h; TYPE_1__ cna2; } ;
struct ctlfe_lun_softc {int work_queue; } ;
struct cam_periph {scalar_t__ softc; } ;
struct TYPE_9__ {int stqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;





 union ccb* FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int *,TYPE_5__*,int ) ;
 int VAR_11 ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*,union ccb*,int) ;
 TYPE_4__ VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union ccb*) ;
 struct cam_periph* FUNC_7 (int ) ;
 int FUNC_8 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_9(union ctl_io *VAR_13)
{
 union ccb *VAR_14;
 struct cam_periph *VAR_15;
 struct ctlfe_lun_softc *VAR_16;

 VAR_14 = FUNC_0(VAR_13);
 VAR_15 = FUNC_7(VAR_14->ccb_h.path);
 FUNC_2(VAR_15);
 VAR_16 = (struct ctlfe_lun_softc *)VAR_15->softc;

 if (VAR_13->io_hdr.io_type == VAR_10) {




  VAR_14->ccb_h.status = VAR_1;
  VAR_14->ccb_h.func_code = VAR_11;
  switch (VAR_13->taskio.task_status) {
  case 132:
   VAR_14->cna2.arg = VAR_2;
   break;
  case 129:
   VAR_14->cna2.arg = VAR_6;
   VAR_14->ccb_h.flags |= VAR_7;
   break;
  case 130:
   VAR_14->cna2.arg = VAR_5;
   VAR_14->ccb_h.flags |= VAR_7;
   break;
  case 128:
   VAR_14->cna2.arg = VAR_4;
   VAR_14->ccb_h.flags |= VAR_7;
   break;
  case 131:
   VAR_14->cna2.arg = VAR_3;
   VAR_14->ccb_h.flags |= VAR_7;
   break;
  }
  VAR_14->cna2.arg |= FUNC_5(VAR_13->taskio.task_resp) << 8;
  FUNC_6(VAR_14);
 } else if (VAR_13->io_hdr.flags & VAR_9) {
  FUNC_4(VAR_15, VAR_14, 1);
  return;
 } else {
  VAR_13->io_hdr.flags |= VAR_8;
  FUNC_1(&VAR_16->work_queue, &VAR_14->ccb_h,
      VAR_12.stqe);
  FUNC_8(VAR_15, VAR_0);
 }

 FUNC_3(VAR_15);
}
