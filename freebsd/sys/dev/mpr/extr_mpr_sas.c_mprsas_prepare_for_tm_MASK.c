
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
union ccb {TYPE_2__ ccb_h; } ;
struct mprsas_target {int flags; int tid; } ;
struct mpr_softc {TYPE_1__* sassc; } ;
struct mpr_command {struct mprsas_target* cm_targ; union ccb* cm_ccb; } ;
typedef int path_id_t ;
typedef int lun_id_t ;
struct TYPE_3__ {int sim; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 union ccb* FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 int VAR_2 ;

void
FUNC_4(struct mpr_softc *VAR_3, struct mpr_command *VAR_4,
    struct mprsas_target *VAR_5, lun_id_t VAR_6)
{
 union ccb *VAR_7;
 path_id_t VAR_8;

 VAR_7 = FUNC_1();
 if (VAR_7) {
  VAR_8 = FUNC_0(VAR_3->sassc->sim);
  if (FUNC_2(&VAR_7->ccb_h.path, VAR_2, VAR_8,
      VAR_5->tid, VAR_6) != VAR_0) {
   FUNC_3(VAR_7);
  } else {
   VAR_4->cm_ccb = VAR_7;
   VAR_4->cm_targ = VAR_5;
   VAR_5->flags |= VAR_1;
  }
 }
}
