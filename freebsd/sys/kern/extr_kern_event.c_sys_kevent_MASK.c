
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kevent_copyops {int kevent_size; int k_copyin; int k_copyout; struct kevent_args* arg; } ;
struct kevent_args {int timeout; int nevents; int eventlist; int nchanges; int changelist; int fd; } ;
struct kevent {int dummy; } ;
struct g_kevent_args {int timeout; int nevents; int eventlist; int nchanges; int changelist; int fd; } ;


 int FUNC_0 (struct thread*,struct g_kevent_args*,struct kevent_copyops*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(struct thread *VAR_2, struct kevent_args *VAR_3)
{
 struct kevent_copyops VAR_4 = {
  .arg = VAR_3,
  .k_copyout = VAR_1,
  .k_copyin = VAR_0,
  .kevent_size = sizeof(struct kevent),
 };
 struct g_kevent_args VAR_5 = {
  .fd = VAR_3->fd,
  .changelist = VAR_3->changelist,
  .nchanges = VAR_3->nchanges,
  .eventlist = VAR_3->eventlist,
  .nevents = VAR_3->nevents,
  .timeout = VAR_3->timeout,
 };

 return (FUNC_0(VAR_2, &VAR_5, &VAR_4, "kevent"));
}
