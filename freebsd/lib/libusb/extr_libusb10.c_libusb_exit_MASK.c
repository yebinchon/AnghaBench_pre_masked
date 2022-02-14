
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_10__ {scalar_t__ hotplug_handler; int ctx_cond; int hotplug_lock; int ctx_lock; int * ctrl_pipe; int ctx_poll; } ;
typedef TYPE_1__ libusb_context ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* VAR_2 ;

void
FUNC_11(libusb_context *VAR_3)
{
 VAR_3 = FUNC_0(VAR_3);

 if (VAR_3 == ((void*)0))
  return;



 if (VAR_3->hotplug_handler != VAR_0) {
  pthread_t VAR_4;
  void *VAR_5;

  FUNC_1(VAR_3);
  VAR_4 = VAR_3->hotplug_handler;
  VAR_3->hotplug_handler = VAR_0;
  FUNC_2(VAR_3);

  FUNC_7(VAR_4, &VAR_5);
 }



 FUNC_5(VAR_3, &VAR_3->ctx_poll);
 FUNC_3(VAR_3->ctrl_pipe[0]);
 FUNC_3(VAR_3->ctrl_pipe[1]);
 FUNC_8(&VAR_3->ctx_lock);
 FUNC_8(&VAR_3->hotplug_lock);
 FUNC_6(&VAR_3->ctx_cond);

 FUNC_9(&VAR_1);
 if (VAR_3 == VAR_2) {
  VAR_2 = ((void*)0);
 }
 FUNC_10(&VAR_1);

 FUNC_4(VAR_3);
}
