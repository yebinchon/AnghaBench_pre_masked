
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_select_args {void* timeout; void* exceptfds; void* writefds; void* readfds; int nfds; } ;
struct linux_old_select_args {int ptr; } ;
struct l_old_select_argv {int timeout; int exceptfds; int writefds; int readfds; int nfds; } ;
typedef int linux_args ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct l_old_select_argv*,int) ;
 int FUNC_2 (struct thread*,struct linux_select_args*) ;

int
FUNC_3(struct thread *VAR_0, struct linux_old_select_args *VAR_1)
{
 struct l_old_select_argv VAR_2;
 struct linux_select_args VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->ptr, &VAR_2, sizeof(VAR_2));
 if (VAR_4)
  return (VAR_4);

 VAR_3.nfds = VAR_2.nfds;
 VAR_3.readfds = FUNC_0(VAR_2.readfds);
 VAR_3.writefds = FUNC_0(VAR_2.writefds);
 VAR_3.exceptfds = FUNC_0(VAR_2.exceptfds);
 VAR_3.timeout = FUNC_0(VAR_2.timeout);
 return (FUNC_2(VAR_0, &VAR_3));
}
