
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_pemuldata {int flags; int * epoll; } ;
struct kevent {int dummy; } ;
struct file {int dummy; } ;
struct epoll_event {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,int,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct linux_pemuldata*) ;
 int FUNC_3 (struct linux_pemuldata*) ;
 int VAR_14 ;
 int FUNC_4 (struct thread*,char*,int) ;
 struct linux_pemuldata* FUNC_5 (struct proc*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_15, struct file *VAR_16,
    int VAR_17, struct epoll_event *VAR_18, int *VAR_19,
    struct kevent *VAR_20, int *VAR_21)
{
 uint32_t VAR_22 = VAR_18->events;
 struct linux_pemuldata *VAR_23;
 struct proc *VAR_24;


 if ((VAR_22 & VAR_9) != 0)
  *VAR_19 |= VAR_6;
 if ((VAR_22 & VAR_8) != 0)
  *VAR_19 |= VAR_3;
 if ((VAR_22 & VAR_7) != 0)
  *VAR_19 |= VAR_5;
 if ((VAR_22 & VAR_10) != 0)
  *VAR_19 |= VAR_4;


 if ((VAR_22 & VAR_11) != 0) {
  FUNC_0(VAR_20++, VAR_17, VAR_1, *VAR_19, 0, 0, 0);
  ++(*VAR_21);
 }
 if ((VAR_22 & VAR_13) != 0) {
  FUNC_0(VAR_20++, VAR_17, VAR_2, *VAR_19, 0, 0, 0);
  ++(*VAR_21);
 }

 if ((VAR_22 & ~(VAR_12)) != 0) {
  VAR_24 = VAR_15->td_proc;

  VAR_23 = FUNC_5(VAR_24);
  FUNC_1(VAR_23 != ((void*)0), ("epoll proc emuldata not found.\n"));
  FUNC_1(VAR_23->epoll != ((void*)0), ("epoll proc epolldata not found.\n"));

  FUNC_2(VAR_23);
  if ((VAR_23->flags & VAR_14) == 0) {
   VAR_23->flags |= VAR_14;
   FUNC_3(VAR_23);
   FUNC_4(VAR_15, "epoll_ctl unsupported flags: 0x%x\n",
       VAR_22);
  } else
   FUNC_3(VAR_23);
  return (VAR_0);
 }

 return (0);
}
