
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; struct cam_path* path; } ;
struct ccb_nvmeio {int dummy; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_nvmeio nvmeio; } ;
typedef int uint8_t ;
struct cam_periph {int path; scalar_t__ softc; } ;
struct cam_path {int dummy; } ;
struct TYPE_5__ {int action; int ns; int cd; scalar_t__ restart; } ;
typedef TYPE_2__ nvme_probe_softc ;
typedef int lun_id_t ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct ccb_nvmeio*,int ,int ,int ,int *,int,int) ;
 int FUNC_3 (struct ccb_nvmeio*,int ,int ,int,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct cam_periph *VAR_5, union ccb *VAR_6)
{
 struct ccb_nvmeio *VAR_7;
 nvme_probe_softc *VAR_8;
 struct cam_path *VAR_9;
 lun_id_t VAR_10;

 FUNC_0(VAR_6->ccb_h.path, VAR_0, ("nvme_probe_start\n"));

 VAR_8 = (nvme_probe_softc *)VAR_5->softc;
 VAR_9 = VAR_6->ccb_h.path;
 VAR_7 = &VAR_6->nvmeio;
 VAR_10 = FUNC_6(VAR_5->path);

 if (VAR_8->restart) {
  VAR_8->restart = 0;
  FUNC_1(VAR_8, 129);
 }

 switch (VAR_8->action) {
 case 129:
  FUNC_2(VAR_7,
      0,
      VAR_4,
      VAR_2,
      (uint8_t *)&VAR_8->cd,
      sizeof(VAR_8->cd),
      30 * 1000);
  FUNC_3(VAR_7, VAR_3, 0,
      1, 0, 0, 0, 0, 0);
  break;
 case 128:
  FUNC_2(VAR_7,
      0,
      VAR_4,
      VAR_2,
      (uint8_t *)&VAR_8->ns,
      sizeof(VAR_8->ns),
      30 * 1000);
  FUNC_3(VAR_7, VAR_3, VAR_10,
      0, 0, 0, 0, 0, 0);
  break;
 default:
  FUNC_4("nvme_probe_start: invalid action state 0x%x\n", VAR_8->action);
 }
 VAR_6->ccb_h.flags |= VAR_1;
 FUNC_5(VAR_6);
}
