
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_8__ {int sim; scalar_t__ sim_registered; } ;
struct TYPE_9__ {TYPE_2__ os_specific; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
struct TYPE_10__ {int lun; int target; } ;
typedef TYPE_4__ pqi_scsi_dev_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 union ccb* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int ) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (union ccb*) ;

void FUNC_7(pqisrc_softstate_t *VAR_1, pqi_scsi_dev_t *VAR_2) {
 union ccb *VAR_3;

 FUNC_1("IN\n");

 if(VAR_1->os_specific.sim_registered) {
  if ((VAR_3 = FUNC_3()) == ((void*)0)) {
   FUNC_0("rescan failed (can't allocate CCB)\n");
   return;
  }

  if (FUNC_4(&VAR_3->ccb_h.path, ((void*)0),
   FUNC_2(VAR_1->os_specific.sim),
   VAR_2->target, VAR_2->lun) != VAR_0) {
   FUNC_0("rescan failed (can't create path)\n");
   FUNC_5(VAR_3);
   return;
  }
  FUNC_6(VAR_3);
 }

 FUNC_1("OUT\n");
}
