
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int target_id_t ;
struct vtscsi_softc {int vtscsi_sim; } ;
typedef int lun_id_t ;
typedef scalar_t__ cam_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vtscsi_softc*,int ,char*) ;
 union ccb* FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ,int ) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void
FUNC_6(struct vtscsi_softc *VAR_2, target_id_t VAR_3,
    lun_id_t VAR_4)
{
 union ccb *VAR_5;
 cam_status VAR_6;

 VAR_5 = FUNC_2();
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_2, VAR_1, "cannot allocate CCB\n");
  return;
 }

 VAR_6 = FUNC_3(&VAR_5->ccb_h.path, ((void*)0),
     FUNC_0(VAR_2->vtscsi_sim), VAR_3, VAR_4);
 if (VAR_6 != VAR_0) {
  FUNC_4(VAR_5);
  return;
 }

 FUNC_5(VAR_5);
}
