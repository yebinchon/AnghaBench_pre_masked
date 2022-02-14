
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cam_path {int dummy; } ;
struct TYPE_8__ {int sim; scalar_t__ sim_registered; } ;
struct TYPE_9__ {TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_10__ {int lun; int target; } ;
typedef TYPE_3__ pqi_scsi_dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_5 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_6 (struct cam_path*) ;

void FUNC_7(pqisrc_softstate_t *VAR_2,
        pqi_scsi_dev_t *VAR_3) {
 struct cam_path *VAR_4;

 FUNC_1("IN\n");

 if(VAR_2->os_specific.sim_registered) {
  if (FUNC_5(&VAR_4, ((void*)0),
   FUNC_2(VAR_2->os_specific.sim),
   VAR_3->target, VAR_3->lun) != VAR_1) {
   FUNC_0("unable to create path for async event");
   return;
  }
  FUNC_4(VAR_0, VAR_4, ((void*)0));
  FUNC_6(VAR_4);
  FUNC_3(VAR_2, VAR_3);
 }

 FUNC_1("OUT\n");

}
