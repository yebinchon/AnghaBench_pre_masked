
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_3__ {int map_lock; void* mtx_init; int cam_lock; int * devq; int * sim; void* sim_registered; int path; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;
struct TYPE_4__ {int func_code; } ;
struct ccb_setasync {struct pqisrc_softstate* callback_arg; int callback; scalar_t__ event_enable; TYPE_2__ ccb_h; } ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;

void FUNC_12(struct pqisrc_softstate *VAR_3)
{
 struct ccb_setasync VAR_4;

 FUNC_0("IN\n");

 if (VAR_3->os_specific.mtx_init) {
  FUNC_5(&VAR_3->os_specific.cam_lock);
 }


 FUNC_11(&VAR_4.ccb_h, VAR_3->os_specific.path, 5);
 VAR_4.ccb_h.func_code = VAR_1;
 VAR_4.event_enable = 0;
 VAR_4.callback = VAR_2;
 VAR_4.callback_arg = VAR_3;
 FUNC_7((union ccb *)&VAR_4);
 FUNC_9(VAR_3->os_specific.path);

 FUNC_10(VAR_3->os_specific.sim, 0);

 FUNC_8(FUNC_2(VAR_3->os_specific.sim));
 VAR_3->os_specific.sim_registered = VAR_0;

 if (VAR_3->os_specific.sim) {
  FUNC_1(VAR_3->os_specific.sim, VAR_0);
  VAR_3->os_specific.sim = ((void*)0);
 }
 if (VAR_3->os_specific.mtx_init) {
  FUNC_6(&VAR_3->os_specific.cam_lock);
 }
 if (VAR_3->os_specific.devq != ((void*)0)) {
  FUNC_3(VAR_3->os_specific.devq);
 }
 if (VAR_3->os_specific.mtx_init) {
  FUNC_4(&VAR_3->os_specific.cam_lock);
  VAR_3->os_specific.mtx_init = VAR_0;
 }

 FUNC_4(&VAR_3->os_specific.map_lock);

 FUNC_0("OUT\n");
}
