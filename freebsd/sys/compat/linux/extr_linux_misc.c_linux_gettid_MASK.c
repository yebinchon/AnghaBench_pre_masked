
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; } ;
struct linux_gettid_args {int dummy; } ;
struct linux_emuldata {int em_tid; } ;


 int FUNC_0 (int ,char*) ;
 struct linux_emuldata* FUNC_1 (struct thread*) ;

int
FUNC_2(struct thread *VAR_0, struct linux_gettid_args *VAR_1)
{
 struct linux_emuldata *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 FUNC_0(VAR_2 != ((void*)0), ("gettid: emuldata not found.\n"));

 VAR_0->td_retval[0] = VAR_2->em_tid;

 return (0);
}
