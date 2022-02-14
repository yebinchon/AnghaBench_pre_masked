
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module_env {TYPE_1__* outnet; } ;
struct comm_reply {int * c; } ;
struct comm_point {int tcp_is_reading; int buffer; } ;
struct auth_xfer {int lock; TYPE_3__* task_transfer; } ;
struct TYPE_7__ {int * cp; TYPE_2__* master; int timer; struct module_env* env; } ;
struct TYPE_6__ {int host; } ;
struct TYPE_5__ {scalar_t__ want_to_quit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comm_point*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct auth_xfer*,struct module_env*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,struct auth_xfer*) ;
 int FUNC_12 (struct auth_xfer*) ;
 int FUNC_13 (struct auth_xfer*,struct module_env*) ;

int
FUNC_14(struct comm_point* VAR_4, void* VAR_5, int VAR_6,
 struct comm_reply* VAR_7)
{
 struct auth_xfer* VAR_8 = (struct auth_xfer*)VAR_5;
 struct module_env* VAR_9;
 FUNC_6(VAR_8->task_transfer);
 FUNC_4(&VAR_8->lock);
 VAR_9 = VAR_8->task_transfer->env;
 if(VAR_9->outnet->want_to_quit) {
  FUNC_5(&VAR_8->lock);
  return 0;
 }
 FUNC_10(VAR_3, "auth zone transfer http callback");

 FUNC_3(VAR_8->task_transfer->timer);

 if(VAR_6 != VAR_2 && VAR_6 != VAR_1) {



  FUNC_10(VAR_3, "http stopped, connection lost to %s",
   VAR_8->task_transfer->master->host);
 failed:

  FUNC_0(VAR_8->task_transfer);
  if(VAR_7) VAR_7->c = ((void*)0);

  FUNC_1(VAR_8->task_transfer->cp);
  VAR_8->task_transfer->cp = ((void*)0);
  FUNC_12(VAR_8);
  FUNC_13(VAR_8, VAR_9);
  return 0;
 }



 if(FUNC_9(VAR_4->buffer) > 0) {
  FUNC_10(VAR_3, "auth zone http queued up %d bytes",
   (int)FUNC_9(VAR_4->buffer));
  if(!FUNC_11(VAR_4->buffer, VAR_8)) {
   FUNC_10(VAR_3, "http stopped to %s, malloc failed",
    VAR_8->task_transfer->master->host);
   goto failed;
  }
 }

 if(VAR_6 == VAR_1) {
  if(VAR_7) VAR_7->c = ((void*)0);

  FUNC_1(VAR_8->task_transfer->cp);
  VAR_8->task_transfer->cp = ((void*)0);
  FUNC_7(VAR_8, VAR_9);
  return 0;
 }



 FUNC_5(&VAR_8->lock);
 VAR_4->tcp_is_reading = 1;
 FUNC_8(VAR_4->buffer);
 FUNC_2(VAR_4, -1, VAR_0);
 return 0;
}
