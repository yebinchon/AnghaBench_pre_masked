
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_pemuldata {struct epoll_emuldata* epoll; } ;
struct kevent {int ident; } ;
struct epoll_event {int data; } ;
struct epoll_emuldata {int fdc; int * udata; } ;
struct epoll_copyout_args {int leventlist; int count; int error; int p; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct linux_pemuldata*) ;
 int FUNC_2 (struct linux_pemuldata*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct epoll_event*,int,int) ;
 int FUNC_4 (struct epoll_event*,int ) ;
 int FUNC_5 (struct kevent*,struct epoll_event*) ;
 struct epoll_event* FUNC_6 (int,int ,int) ;
 struct linux_pemuldata* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_3, struct kevent *VAR_4, int VAR_5)
{
 struct epoll_copyout_args *VAR_6;
 struct linux_pemuldata *VAR_7;
 struct epoll_emuldata *VAR_8;
 struct epoll_event *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_6 = (struct epoll_copyout_args*) VAR_3;
 VAR_9 = FUNC_6(sizeof(*VAR_9) * VAR_5, VAR_0, VAR_1 | VAR_2);

 VAR_7 = FUNC_7(VAR_6->p);
 FUNC_0(VAR_7 != ((void*)0), ("epoll proc emuldata not found.\n"));
 FUNC_1(VAR_7);
 VAR_8 = VAR_7->epoll;
 FUNC_0(VAR_8 != ((void*)0), ("epoll proc epolldata not found.\n"));

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  FUNC_5(&VAR_4[VAR_12], &VAR_9[VAR_12]);

  VAR_11 = VAR_4[VAR_12].ident;
  FUNC_0(VAR_11 <= VAR_8->fdc, ("epoll user data vector"
          " is too small.\n"));
  VAR_9[VAR_12].data = VAR_8->udata[VAR_11];
 }
 FUNC_2(VAR_7);

 VAR_10 = FUNC_3(VAR_9, VAR_6->leventlist, VAR_5 * sizeof(*VAR_9));
 if (VAR_10 == 0) {
  VAR_6->leventlist += VAR_5;
  VAR_6->count += VAR_5;
 } else if (VAR_6->error == 0)
  VAR_6->error = VAR_10;

 FUNC_4(VAR_9, VAR_0);
 return (VAR_10);
}
