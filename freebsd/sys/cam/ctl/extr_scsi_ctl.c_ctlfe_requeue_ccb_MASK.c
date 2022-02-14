
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func_code; int flags; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mtx {int dummy; } ;
struct ctlfe_lun_softc {int inot_list; int atio_list; } ;
struct cam_periph {int flags; int path; scalar_t__ softc; } ;
struct TYPE_5__ {int le; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 struct mtx* FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*,union ccb*) ;
 int FUNC_4 (struct mtx*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct cam_periph *VAR_4, union ccb *VAR_5, int VAR_6)
{
 struct ctlfe_lun_softc *VAR_7;
 struct mtx *VAR_8;

 if (VAR_4->flags & VAR_0) {
  VAR_8 = FUNC_1(VAR_4);
  FUNC_3(VAR_4, VAR_5);
  if (VAR_6)
   FUNC_4(VAR_8);
  return;
 }
 VAR_7 = (struct ctlfe_lun_softc *)VAR_4->softc;
 if (VAR_5->ccb_h.func_code == VAR_2)
  FUNC_0(&VAR_7->atio_list, &VAR_5->ccb_h, VAR_3.le);
 else
  FUNC_0(&VAR_7->inot_list, &VAR_5->ccb_h, VAR_3.le);
 if (VAR_6)
  FUNC_2(VAR_4);






 FUNC_6(&VAR_5->ccb_h, VAR_4->path, VAR_1,
     VAR_5->ccb_h.flags);

 FUNC_5(VAR_5);
}
