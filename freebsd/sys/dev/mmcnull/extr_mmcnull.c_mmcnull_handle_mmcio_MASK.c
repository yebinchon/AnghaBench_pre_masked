
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct ccb_mmcio {int dummy; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_mmcio mmcio; } ;
struct mmcnull_softc {int tick; union ccb* cur_ccb; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,struct mmcnull_softc*) ;
 struct mmcnull_softc* FUNC_1 (struct cam_sim*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct cam_sim *VAR_5, union ccb *VAR_6)
{
 struct mmcnull_softc *VAR_7;
 struct ccb_mmcio *VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = &VAR_6->mmcio;
 VAR_6->ccb_h.status = VAR_0;
 VAR_7->cur_ccb = VAR_6;


 if (VAR_2)
  FUNC_0(&VAR_7->tick, VAR_1 / 10, VAR_4, VAR_7);
 else
  FUNC_0(&VAR_7->tick, VAR_1 / 10, VAR_3, VAR_7);
}
