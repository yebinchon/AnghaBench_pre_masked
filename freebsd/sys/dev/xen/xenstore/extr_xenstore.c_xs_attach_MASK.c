
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct proc {int p_pid; } ;
struct evtchn_alloc_unbound {scalar_t__ port; void* remote_dom; void* dom; } ;
typedef int device_t ;
struct TYPE_5__ {int * ich_arg; int ich_func; } ;
struct TYPE_4__ {int initialized; scalar_t__ evtchn; int xs_late_init; TYPE_3__ xs_attachcb; int xenwatch_pid; int watch_events_lock; int registered_watches_lock; int request_mutex; int xenwatch_mutex; int reply_lock; int ring_lock; int watch_events; int reply_list; int gpfn; int xs_dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct evtchn_alloc_unbound*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int *,struct proc**,int ,int ,char*) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 () ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_17(device_t VAR_15)
{
 int VAR_16;


 VAR_11.xs_dev = VAR_15;
 FUNC_5(VAR_15, &VAR_11);


 struct proc *VAR_17;

 VAR_11.initialized = 0;
 VAR_11.evtchn = FUNC_14();
 if (VAR_11.evtchn == 0) {
  struct evtchn_alloc_unbound VAR_18;


  VAR_18.dom = VAR_0;
  VAR_18.remote_dom = VAR_0;
  VAR_16 = FUNC_0(
      VAR_1, &VAR_18);
  if (VAR_16 != 0)
   FUNC_9(
      "unable to alloc event channel for Dom0: %d",
       VAR_16);

  VAR_11.evtchn = VAR_18.port;


  VAR_9 = FUNC_7(VAR_6, VAR_4, VAR_3 | VAR_5);
  VAR_11.gpfn = FUNC_3(FUNC_10((vm_offset_t)VAR_9));
 } else {
  VAR_11.gpfn = FUNC_15();
  VAR_9 = FUNC_11(FUNC_12(VAR_11.gpfn), VAR_6,
      VAR_7);
  VAR_11.initialized = 1;
 }

 FUNC_1(&VAR_11.reply_list);
 FUNC_1(&VAR_11.watch_events);

 FUNC_8(&VAR_11.ring_lock, "ring lock", ((void*)0), VAR_2);
 FUNC_8(&VAR_11.reply_lock, "reply lock", ((void*)0), VAR_2);
 FUNC_13(&VAR_11.xenwatch_mutex, "xenwatch");
 FUNC_13(&VAR_11.request_mutex, "xenstore request");
 FUNC_8(&VAR_11.registered_watches_lock, "watches", ((void*)0), VAR_2);
 FUNC_8(&VAR_11.watch_events_lock, "watch events", ((void*)0), VAR_2);


 VAR_16 = FUNC_16();
 if (VAR_16)
  return (VAR_16);

 VAR_16 = FUNC_6(VAR_10, ((void*)0), &VAR_17, VAR_8,
     0, "xenwatch");
 if (VAR_16)
  return (VAR_16);
 VAR_11.xenwatch_pid = VAR_17->p_pid;

 VAR_16 = FUNC_6(VAR_14, ((void*)0), ((void*)0),
     VAR_8, 0, "xenstore_rcv");

 VAR_11.xs_attachcb.ich_func = VAR_12;
 VAR_11.xs_attachcb.ich_arg = ((void*)0);
 if (VAR_11.initialized) {
  FUNC_4(&VAR_11.xs_attachcb);
 } else {
  FUNC_2(&VAR_11.xs_late_init, 0, VAR_13, ((void*)0));
 }

 return (VAR_16);
}
