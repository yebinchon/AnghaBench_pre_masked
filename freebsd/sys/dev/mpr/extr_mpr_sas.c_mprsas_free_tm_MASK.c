
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpr_softc {int dummy; } ;
struct mpr_command {TYPE_3__* cm_ccb; TYPE_2__* cm_targ; } ;
struct TYPE_4__ {int path; } ;
struct TYPE_6__ {TYPE_1__ ccb_h; } ;
struct TYPE_5__ {int tid; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpr_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mpr_softc*,int ,char*,int) ;
 int FUNC_2 (struct mpr_softc*,struct mpr_command*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;

void
FUNC_6(struct mpr_softc *VAR_3, struct mpr_command *VAR_4)
{
 int VAR_5 = 0xFFFFFFFF;

 FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0))
  return;






 if (VAR_4->cm_targ != ((void*)0)) {
  VAR_4->cm_targ->flags &= ~VAR_0;
  VAR_5 = VAR_4->cm_targ->tid;
 }
 if (VAR_4->cm_ccb) {
  FUNC_1(VAR_3, VAR_1, "Unfreezing devq for target ID %d\n",
      VAR_5);
  FUNC_5(VAR_4->cm_ccb->ccb_h.path, 1, VAR_2);
  FUNC_4(VAR_4->cm_ccb->ccb_h.path);
  FUNC_3(VAR_4->cm_ccb);
 }

 FUNC_2(VAR_3, VAR_4);
}
