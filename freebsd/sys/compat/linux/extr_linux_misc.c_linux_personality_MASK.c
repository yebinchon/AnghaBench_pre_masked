
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct thread {int* td_retval; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_personality_args {int per; } ;
struct linux_pemuldata {int persona; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 struct linux_pemuldata* FUNC_2 (struct proc*) ;

int
FUNC_3(struct thread *VAR_0, struct linux_personality_args *VAR_1)
{
 struct linux_pemuldata *VAR_2;
 struct proc *VAR_3 = VAR_0->td_proc;
 uint32_t VAR_4;

 FUNC_0(VAR_3);
 VAR_2 = FUNC_2(VAR_3);
 VAR_4 = VAR_2->persona;
 if (VAR_1->per != 0xffffffff)
  VAR_2->persona = VAR_1->per;
 FUNC_1(VAR_3);

 VAR_0->td_retval[0] = VAR_4;
 return (0);
}
