
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct thr_param {void (* start_func ) (void*) ;char* tls_base; int tls_size; struct rtprio* rtp; int flags; void** parent_tid; void** child_tid; int stack_size; int stack_base; struct pthread* arg; } ;
struct tcb {int dummy; } ;
struct sched_param {int sched_priority; } ;
struct rtprio {int dummy; } ;
struct TYPE_5__ {int cpusetsize; scalar_t__ sched_inherit; int flags; scalar_t__ suspend; int sched_policy; int prio; int stacksize_attr; int stackaddr_attr; int * cpuset; } ;
struct pthread {void* (* start_routine ) (void*) ;int cancel_enable; int flags; int refcount; int force_exit; int cycle; void* tid; int state; int sigmask; TYPE_1__ attr; scalar_t__ tcb; int * mq; scalar_t__ cancel_async; void* arg; int magic; } ;
typedef int sigset_t ;
typedef struct pthread* pthread_t ;
typedef TYPE_1__* pthread_attr_t ;
typedef int param ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct pthread*,int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct pthread*,struct pthread*) ;
 int FUNC_5 (struct pthread*,struct pthread*) ;
 int FUNC_6 (struct pthread*) ;
 void* VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int ,int *,int *) ;
 struct pthread* FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__ VAR_21 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,struct sched_param*,struct rtprio*) ;
 struct pthread* FUNC_12 (struct pthread*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct pthread*,struct pthread*) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (struct pthread*,struct pthread*) ;
 int FUNC_17 (struct pthread*,struct pthread*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct pthread*) ;
 int FUNC_20 (struct pthread*,struct pthread*) ;
 int FUNC_21 (int *,int ,int ) ;
 int VAR_22 ;
 int FUNC_22 (int *,int) ;
 scalar_t__ FUNC_23 (int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_24 (TYPE_1__*) ;
 int VAR_23 ;
 int FUNC_25 (struct thr_param*,int ,int) ;
 int FUNC_26 (struct thr_param*,int) ;
 scalar_t__ VAR_24 ;

int
FUNC_27(pthread_t * __restrict VAR_25,
    const pthread_attr_t * __restrict VAR_26, void *(*VAR_27) (void *),
    void * __restrict VAR_28)
{
 struct pthread *VAR_29, *VAR_30;
 struct thr_param VAR_31;
 struct sched_param VAR_32;
 struct rtprio VAR_33;
 sigset_t VAR_34, VAR_35;
 cpuset_t *VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;

 VAR_36 = ((void*)0);
 VAR_42 = VAR_38 = 0;
 FUNC_13();




 if (FUNC_15() == 0) {
  FUNC_9();
  FUNC_18(1);
 }

 VAR_29 = FUNC_8();
 if ((VAR_30 = FUNC_12(VAR_29)) == ((void*)0))
  return (VAR_2);

 FUNC_25(&VAR_31, 0, sizeof(VAR_31));

 if (VAR_26 == ((void*)0) || *VAR_26 == ((void*)0))

  VAR_30->attr = VAR_21;
 else {
  VAR_30->attr = *(*VAR_26);
  VAR_36 = VAR_30->attr.cpuset;
  VAR_38 = VAR_30->attr.cpusetsize;
  VAR_30->attr.cpuset = ((void*)0);
  VAR_30->attr.cpusetsize = 0;
 }
 if (VAR_30->attr.sched_inherit == VAR_8) {

  if (VAR_29->attr.flags & VAR_9)
   VAR_30->attr.flags |= VAR_9;
  else
   VAR_30->attr.flags &= ~VAR_9;

  VAR_30->attr.prio = VAR_29->attr.prio;
  VAR_30->attr.sched_policy = VAR_29->attr.sched_policy;
 }

 VAR_30->tid = VAR_19;

 VAR_41 = FUNC_10();
 if (FUNC_24(&VAR_30->attr) != 0) {

  FUNC_14(VAR_29, VAR_30);
  return (VAR_2);
 }




 VAR_30->magic = VAR_17;
 VAR_30->start_routine = VAR_27;
 VAR_30->arg = VAR_28;
 VAR_30->cancel_enable = 1;
 VAR_30->cancel_async = 0;

 for (VAR_37 = 0; VAR_37 < VAR_20; VAR_37++)
  FUNC_3(&VAR_30->mq[VAR_37]);


 if (VAR_30->attr.suspend == VAR_14) {
  VAR_30->flags = VAR_16;
  VAR_39 = 1;
 } else {
  VAR_39 = 0;
 }

 VAR_30->state = VAR_6;

 if (VAR_30->attr.flags & VAR_7)
  VAR_30->flags |= VAR_15;


 VAR_30->refcount = 1;
 FUNC_16(VAR_29, VAR_30);





 if (VAR_41 != FUNC_10())
  FUNC_19(VAR_30);


 (*VAR_25) = VAR_30;
 if (FUNC_0(VAR_29, VAR_13) || VAR_36 != ((void*)0)) {
  FUNC_4(VAR_29, VAR_30);
  VAR_40 = 1;
 } else
  VAR_40 = 0;
 VAR_31.start_func = (void (*)(void *)) VAR_24;
 VAR_31.arg = VAR_30;
 VAR_31.stack_base = VAR_30->attr.stackaddr_attr;
 VAR_31.stack_size = VAR_30->attr.stacksize_attr;
 VAR_31.tls_base = (char *)VAR_30->tcb;
 VAR_31.tls_size = sizeof(struct tcb);
 VAR_31.child_tid = &VAR_30->tid;
 VAR_31.parent_tid = &VAR_30->tid;
 VAR_31.flags = 0;
 if (VAR_30->attr.flags & VAR_9)
  VAR_31.flags |= VAR_18;
 if (VAR_30->attr.sched_inherit == VAR_8)
  VAR_31.rtp = ((void*)0);
 else {
  VAR_32.sched_priority = VAR_30->attr.prio;
  FUNC_11(VAR_30->attr.sched_policy,
   &VAR_32, &VAR_33);
  VAR_31.rtp = &VAR_33;
 }


 if (VAR_39) {
  FUNC_2(VAR_34);
  FUNC_1(VAR_34, VAR_11);
  FUNC_7(VAR_12, &VAR_34, &VAR_35);
  VAR_30->sigmask = VAR_35;
  FUNC_1(VAR_30->sigmask, VAR_10);
 }

 VAR_42 = FUNC_26(&VAR_31, sizeof(VAR_31));

 if (VAR_42 != 0) {
  VAR_42 = VAR_23;



  if (VAR_42 == VAR_3)
   VAR_42 = VAR_2;
 }

 if (VAR_39)
  FUNC_7(VAR_12, &VAR_35, ((void*)0));

 if (VAR_42 != 0) {
  if (!VAR_40)
   FUNC_4(VAR_29, VAR_30);
  VAR_30->state = VAR_5;
  VAR_30->tid = VAR_19;
  VAR_30->flags |= VAR_15;
  VAR_30->refcount--;
  if (VAR_30->flags & VAR_16) {
   VAR_30->cycle++;
   FUNC_21(&VAR_30->cycle, VAR_4, 0);
  }
  FUNC_20(VAR_29, VAR_30);
  FUNC_22(&VAR_22, -1);
 } else if (VAR_40) {
  if (VAR_36 != ((void*)0)) {
   if (FUNC_23(VAR_0, VAR_1,
    FUNC_6(VAR_30), VAR_38, VAR_36)) {
    VAR_42 = VAR_23;

    VAR_30->force_exit = 1;
    VAR_30->flags |= VAR_15;
    FUNC_20(VAR_29, VAR_30);

    goto out;
   }
  }

  FUNC_17(VAR_29, VAR_30);
  FUNC_5(VAR_29, VAR_30);
 }
out:
 if (VAR_42)
  (*VAR_25) = 0;
 return (VAR_42);
}
