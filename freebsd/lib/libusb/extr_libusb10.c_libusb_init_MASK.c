
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_context {int debug_fixed; int * ctrl_pipe; int ctx_poll; int ctx_cond; int hotplug_lock; int ctx_lock; void* hotplug_handler; void* ctx_handler; int hotplug_devs; int hotplug_cbh; int tr_done; int pollfds; scalar_t__ debug; } ;
typedef int pthread_condattr_t ;
typedef struct libusb_context libusb_context ;


 int VAR_0 ;
 int FUNC_0 (struct libusb_context*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct libusb_context*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct libusb_context*,int *,int *,int ,int ) ;
 int FUNC_5 (int ) ;
 struct libusb_context* FUNC_6 (int) ;
 int FUNC_7 (struct libusb_context*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (char*,char**,int) ;
 struct libusb_context* VAR_9 ;

int
FUNC_19(libusb_context **VAR_10)
{
 struct libusb_context *VAR_11;
 pthread_condattr_t VAR_12;
 char *VAR_13, *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_6(sizeof(*VAR_11));
 if (!VAR_11)
  return (VAR_2);

 FUNC_7(VAR_11, 0, sizeof(*VAR_11));

 VAR_13 = FUNC_3("LIBUSB_DEBUG");
 if (VAR_13 != ((void*)0)) {




  VAR_8 = 0;
  VAR_11->debug = FUNC_18(VAR_13, &VAR_14, 10);
  if (VAR_8 == 0 && *VAR_14 == '\0') {
   VAR_11->debug_fixed = 1;
  } else {






   VAR_11->debug = 0;
  }
 }
 FUNC_1(&VAR_11->pollfds);
 FUNC_1(&VAR_11->tr_done);
 FUNC_1(&VAR_11->hotplug_cbh);
 FUNC_1(&VAR_11->hotplug_devs);

 if (FUNC_15(&VAR_11->ctx_lock, ((void*)0)) != 0) {
  FUNC_2(VAR_11);
  return (VAR_3);
 }
 if (FUNC_15(&VAR_11->hotplug_lock, ((void*)0)) != 0) {
  FUNC_14(&VAR_11->ctx_lock);
  FUNC_2(VAR_11);
  return (VAR_3);
 }
 if (FUNC_12(&VAR_12) != 0) {
  FUNC_14(&VAR_11->ctx_lock);
  FUNC_14(&VAR_11->hotplug_lock);
  FUNC_2(VAR_11);
  return (VAR_3);
 }
 if (FUNC_13(&VAR_12, VAR_0) != 0) {
  FUNC_14(&VAR_11->ctx_lock);
  FUNC_14(&VAR_11->hotplug_lock);
  FUNC_11(&VAR_12);
  FUNC_2(VAR_11);
  return (VAR_4);
 }
 if (FUNC_10(&VAR_11->ctx_cond, &VAR_12) != 0) {
  FUNC_14(&VAR_11->ctx_lock);
  FUNC_14(&VAR_11->hotplug_lock);
  FUNC_11(&VAR_12);
  FUNC_2(VAR_11);
  return (VAR_3);
 }
 FUNC_11(&VAR_12);

 VAR_11->ctx_handler = VAR_5;
 VAR_11->hotplug_handler = VAR_5;

 VAR_15 = FUNC_8(VAR_11->ctrl_pipe);
 if (VAR_15 < 0) {
  FUNC_14(&VAR_11->ctx_lock);
  FUNC_14(&VAR_11->hotplug_lock);
  FUNC_9(&VAR_11->ctx_cond);
  FUNC_2(VAR_11);
  return (VAR_4);
 }

 FUNC_5(VAR_11->ctrl_pipe[0]);
 FUNC_5(VAR_11->ctrl_pipe[1]);

 FUNC_4(VAR_11, &VAR_11->ctx_poll, ((void*)0), VAR_11->ctrl_pipe[0], VAR_6);

 FUNC_16(&VAR_7);
 if (VAR_9 == ((void*)0)) {
  VAR_9 = VAR_11;
 }
 FUNC_17(&VAR_7);

 if (VAR_10)
  *VAR_10 = VAR_11;

 FUNC_0(VAR_11, VAR_1, "libusb_init complete");

 return (0);
}
