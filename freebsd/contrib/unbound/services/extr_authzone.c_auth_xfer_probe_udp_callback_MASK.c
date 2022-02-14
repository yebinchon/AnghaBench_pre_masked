
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct module_env {TYPE_1__* outnet; } ;
struct comm_reply {int * c; } ;
struct comm_point {int buffer; } ;
struct auth_xfer {TYPE_4__* task_probe; int name; int lock; TYPE_3__* task_transfer; } ;
struct auth_master {int dummy; } ;
struct TYPE_8__ {int have_new_lease; int * cp; int timer; struct module_env* env; } ;
struct TYPE_7__ {TYPE_2__* masters; int * worker; } ;
struct TYPE_6__ {scalar_t__ http; } ;
struct TYPE_5__ {scalar_t__ want_to_quit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct auth_xfer*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (scalar_t__,char*,...) ;
 scalar_t__ VAR_3 ;
 struct auth_master* FUNC_8 (struct auth_xfer*) ;
 int FUNC_9 (struct auth_xfer*) ;
 int FUNC_10 (struct auth_xfer*) ;
 int FUNC_11 (struct auth_xfer*,struct module_env*) ;
 scalar_t__ FUNC_12 (struct auth_xfer*,scalar_t__) ;
 int FUNC_13 (struct auth_xfer*,struct module_env*,struct auth_master*) ;

int
FUNC_14(struct comm_point* VAR_4, void* VAR_5, int VAR_6,
 struct comm_reply* VAR_7)
{
 struct auth_xfer* VAR_8 = (struct auth_xfer*)VAR_5;
 struct module_env* VAR_9;
 FUNC_6(VAR_8->task_probe);
 FUNC_4(&VAR_8->lock);
 VAR_9 = VAR_8->task_probe->env;
 if(VAR_9->outnet->want_to_quit) {
  FUNC_5(&VAR_8->lock);
  return 0;
 }



 VAR_7->c = ((void*)0);

 FUNC_2(VAR_8->task_probe->timer);


 if(VAR_6 == VAR_1) {
  uint32_t VAR_10 = 0;
  if(FUNC_0(VAR_4->buffer, VAR_0, VAR_8,
   &VAR_10)) {

   if(VAR_3 >= VAR_2) {
    char VAR_11[256];
    FUNC_3(VAR_8->name, VAR_11);
    FUNC_7(VAR_2, "auth zone %s: soa probe "
     "serial is %u", VAR_11, (unsigned)VAR_10);
   }


   if(FUNC_12(VAR_8, VAR_10)) {

    FUNC_7(VAR_2, "auth_zone updated, start transfer");
    if(VAR_8->task_transfer->worker == ((void*)0)) {
     struct auth_master* VAR_12 =
      FUNC_8(VAR_8);



     if(VAR_8->task_transfer->masters &&
      VAR_8->task_transfer->masters->http)
      VAR_12 = ((void*)0);
     FUNC_9(VAR_8);
     FUNC_13(VAR_8, VAR_9, VAR_12);
     return 0;

    }

    FUNC_9(VAR_8);
    FUNC_5(&VAR_8->lock);


    return 0;
   } else {
    FUNC_7(VAR_2, "auth_zone master reports unchanged soa serial");



    VAR_8->task_probe->have_new_lease = 1;
   }
  } else {
   if(VAR_3 >= VAR_2) {
    char VAR_13[256];
    FUNC_3(VAR_8->name, VAR_13);
    FUNC_7(VAR_2, "auth zone %s: bad reply to soa probe", VAR_13);
   }
  }
 } else {
  if(VAR_3 >= VAR_2) {
   char VAR_14[256];
   FUNC_3(VAR_8->name, VAR_14);
   FUNC_7(VAR_2, "auth zone %s: soa probe failed", VAR_14);
  }
 }



 FUNC_1(VAR_8->task_probe->cp);
 VAR_8->task_probe->cp = ((void*)0);



 FUNC_10(VAR_8);
 FUNC_11(VAR_8, VAR_9);
 return 0;
}
