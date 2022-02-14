
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int pid; scalar_t__ comm; int mg; } ;
typedef int pid_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int,char*,int) ;
 struct thread* FUNC_3 (int) ;

struct thread *FUNC_4(pid_t VAR_0)
{
 struct thread *VAR_1 = FUNC_3(sizeof(*VAR_1));

 if (VAR_1 != ((void*)0)) {
  FUNC_1(&VAR_1->mg);
  VAR_1->pid = VAR_0;
  VAR_1->comm = FUNC_0(32);
  if (VAR_1->comm)
   FUNC_2(VAR_1->comm, 32, ":%d", VAR_1->pid);
 }

 return VAR_1;
}
