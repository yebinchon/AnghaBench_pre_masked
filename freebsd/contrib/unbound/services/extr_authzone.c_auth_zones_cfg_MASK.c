
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_auth {int fallback_enabled; int for_upstream; scalar_t__ for_downstream; int zonefile; scalar_t__ urls; scalar_t__ masters; int name; } ;
struct auth_zones {int have_downstream; int lock; } ;
struct auth_zone {int zone_is_slave; int lock; int fallback_enabled; int for_upstream; scalar_t__ for_downstream; scalar_t__ zone_deleted; } ;
struct auth_xfer {int lock; TYPE_2__* task_transfer; TYPE_1__* task_probe; } ;
struct TYPE_4__ {int masters; } ;
struct TYPE_3__ {int masters; } ;


 int FUNC_0 (struct auth_zone*,int ) ;
 struct auth_xfer* FUNC_1 (struct auth_zones*,struct auth_zone*) ;
 struct auth_zone* FUNC_2 (struct auth_zones*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct config_auth*,int) ;

__attribute__((used)) static int
FUNC_7(struct auth_zones* VAR_0, struct config_auth* VAR_1)
{
 struct auth_zone* VAR_2;
 struct auth_xfer* VAR_3 = ((void*)0);


 FUNC_5(&VAR_0->lock);
 if(!(VAR_2=FUNC_2(VAR_0, VAR_1->name))) {
  FUNC_4(&VAR_0->lock);
  return 0;
 }
 if(VAR_1->masters || VAR_1->urls) {
  if(!(VAR_3=FUNC_1(VAR_0, VAR_2))) {
   FUNC_4(&VAR_0->lock);
   FUNC_4(&VAR_2->lock);
   return 0;
  }
 }
 if(VAR_1->for_downstream)
  VAR_0->have_downstream = 1;
 FUNC_4(&VAR_0->lock);


 VAR_2->zone_deleted = 0;
 if(!FUNC_0(VAR_2, VAR_1->zonefile)) {
  if(VAR_3) {
   FUNC_3(&VAR_3->lock);
  }
  FUNC_4(&VAR_2->lock);
  return 0;
 }
 VAR_2->for_downstream = VAR_1->for_downstream;
 VAR_2->for_upstream = VAR_1->for_upstream;
 VAR_2->fallback_enabled = VAR_1->fallback_enabled;


 if(VAR_3) {
  VAR_2->zone_is_slave = 1;

  if(!FUNC_6(&VAR_3->task_probe->masters, VAR_1, 0)) {
   FUNC_3(&VAR_3->lock);
   FUNC_4(&VAR_2->lock);
   return 0;
  }
  if(!FUNC_6(&VAR_3->task_transfer->masters, VAR_1, 1)) {
   FUNC_3(&VAR_3->lock);
   FUNC_4(&VAR_2->lock);
   return 0;
  }
  FUNC_3(&VAR_3->lock);
 }

 FUNC_4(&VAR_2->lock);
 return 1;
}
