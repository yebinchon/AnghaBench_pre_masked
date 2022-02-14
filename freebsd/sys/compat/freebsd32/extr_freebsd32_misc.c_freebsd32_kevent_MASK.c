
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts32 ;
struct timespec32 {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int * td_retval; } ;
struct kevent_copyops {int k_copyin; int k_copyout; struct freebsd32_kevent_args* arg; } ;
struct kevent32 {int dummy; } ;
struct freebsd32_kevent_args {int nevents; int nchanges; int fd; struct kevent32* changelist; scalar_t__ timeout; struct kevent32* eventlist; } ;


 int FUNC_0 (struct timespec32,struct timespec,int ) ;
 scalar_t__ FUNC_1 (struct thread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,struct timespec32*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct thread*,int ,int ,int ,struct kevent_copyops*,struct timespec*) ;
 int FUNC_4 (char*,int ,struct kevent32*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_5(struct thread *VAR_6, struct freebsd32_kevent_args *VAR_7)
{
 struct timespec32 VAR_8;
 struct timespec VAR_9, *VAR_10;
 struct kevent_copyops VAR_11 = {
  .arg = VAR_7,
  .k_copyout = VAR_3,
  .k_copyin = VAR_2,
 };



 int VAR_12;

 if (VAR_7->timeout) {
  VAR_12 = FUNC_2(VAR_7->timeout, &VAR_8, sizeof(VAR_8));
  if (VAR_12)
   return (VAR_12);
  FUNC_0(VAR_8, VAR_9, VAR_5);
  FUNC_0(VAR_8, VAR_9, VAR_4);
  VAR_10 = &VAR_9;
 } else
  VAR_10 = ((void*)0);





 VAR_12 = FUNC_3(VAR_6, VAR_7->fd, VAR_7->nchanges, VAR_7->nevents,
     &VAR_11, VAR_10);





 return (VAR_12);
}
