
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_env {int * now; } ;
struct auth_xfer {int lock; TYPE_2__* task_nextprobe; int name; int lease_time; scalar_t__ have_zone; TYPE_1__* task_probe; } ;
struct TYPE_4__ {int * worker; } ;
struct TYPE_3__ {scalar_t__ have_new_lease; scalar_t__ only_lookup; scalar_t__ lookup_target; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct auth_xfer*) ;
 int FUNC_3 (scalar_t__,char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct auth_xfer*) ;
 int FUNC_5 (struct auth_xfer*) ;
 scalar_t__ FUNC_6 (struct auth_xfer*,struct module_env*) ;
 int FUNC_7 (struct auth_xfer*,struct module_env*) ;
 int FUNC_8 (struct auth_xfer*) ;
 scalar_t__ FUNC_9 (struct auth_xfer*,struct module_env*,int ) ;
 int FUNC_10 (struct auth_xfer*,struct module_env*,int,int ) ;

__attribute__((used)) static void
FUNC_11(struct auth_xfer* VAR_3, struct module_env* VAR_4)
{

 while(VAR_3->task_probe->lookup_target) {
  if(FUNC_6(VAR_3, VAR_4)) {





   if(VAR_2 >= VAR_1) {
    char VAR_5[255+1];
    FUNC_0(VAR_3->name, VAR_5);
    FUNC_3(VAR_1, "auth zone %s probe next target lookup", VAR_5);
   }
   FUNC_1(&VAR_3->lock);
   return;
  }
  FUNC_7(VAR_3, VAR_4);
 }


 FUNC_2(VAR_3);
 if(VAR_2 >= VAR_1) {
  char VAR_6[255+1];
  FUNC_0(VAR_3->name, VAR_6);
  FUNC_3(VAR_1, "auth zone %s probe: notify addrs updated", VAR_6);
 }
 if(VAR_3->task_probe->only_lookup) {

  VAR_3->task_probe->only_lookup = 0;
  if(VAR_2 >= VAR_1) {
   char VAR_7[255+1];
   FUNC_0(VAR_3->name, VAR_7);
   FUNC_3(VAR_1, "auth zone %s probe: finished only_lookup", VAR_7);
  }
  FUNC_4(VAR_3);
  if(VAR_3->task_nextprobe->worker == ((void*)0))
   FUNC_10(VAR_3, VAR_4, 0, 0);
  FUNC_1(&VAR_3->lock);
  return;
 }


 while(!FUNC_5(VAR_3)) {
  if(FUNC_9(VAR_3, VAR_4, VAR_0)) {

   FUNC_1(&VAR_3->lock);
   return;
  }

  FUNC_8(VAR_3);
 }


 if(VAR_3->task_probe->have_new_lease) {

  if(VAR_2 >= VAR_1) {
   char VAR_8[255+1];
   FUNC_0(VAR_3->name, VAR_8);
   FUNC_3(VAR_1, "auth_zone %s unchanged, new lease, wait", VAR_8);
  }
  FUNC_4(VAR_3);
  if(VAR_3->have_zone)
   VAR_3->lease_time = *VAR_4->now;
  if(VAR_3->task_nextprobe->worker == ((void*)0))
   FUNC_10(VAR_3, VAR_4, 0, 0);
 } else {
  if(VAR_2 >= VAR_1) {
   char VAR_9[255+1];
   FUNC_0(VAR_3->name, VAR_9);
   FUNC_3(VAR_1, "auth zone %s soa probe failed, wait to retry", VAR_9);
  }


  FUNC_4(VAR_3);

  if(VAR_3->task_nextprobe->worker == ((void*)0))
   FUNC_10(VAR_3, VAR_4, 1, 0);
 }

 FUNC_1(&VAR_3->lock);
}
