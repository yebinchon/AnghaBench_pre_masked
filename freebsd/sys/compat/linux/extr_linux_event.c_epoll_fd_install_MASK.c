
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_pemuldata {struct epoll_emuldata* epoll; } ;
struct epoll_emuldata {int fdc; int * udata; } ;
typedef int epoll_udata_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct linux_pemuldata*) ;
 int FUNC_3 (struct linux_pemuldata*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct epoll_emuldata* FUNC_4 (int ,int ,int ) ;
 struct linux_pemuldata* FUNC_5 (struct proc*) ;
 struct epoll_emuldata* FUNC_6 (struct epoll_emuldata*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct thread *VAR_2, int VAR_3, epoll_udata_t VAR_4)
{
 struct linux_pemuldata *VAR_5;
 struct epoll_emuldata *VAR_6;
 struct proc *VAR_7;

 VAR_7 = VAR_2->td_proc;

 VAR_5 = FUNC_5(VAR_7);
 FUNC_1(VAR_5 != ((void*)0), ("epoll proc emuldata not found.\n"));

 FUNC_2(VAR_5);
 if (VAR_5->epoll == ((void*)0)) {
  VAR_6 = FUNC_4(FUNC_0(VAR_3), VAR_0, VAR_1);
  VAR_6->fdc = VAR_3;
  VAR_5->epoll = VAR_6;
 } else {
  VAR_6 = VAR_5->epoll;
  if (VAR_3 > VAR_6->fdc) {
   VAR_6 = FUNC_6(VAR_6, FUNC_0(VAR_3), VAR_0, VAR_1);
   VAR_6->fdc = VAR_3;
   VAR_5->epoll = VAR_6;
  }
 }
 VAR_6->udata[VAR_3] = VAR_4;
 FUNC_3(VAR_5);
}
