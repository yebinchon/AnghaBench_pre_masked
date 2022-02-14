
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; } ;
struct linux_set_tid_address_args {int tidptr; } ;
struct linux_emuldata {int em_tid; int child_clear_tid; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 struct linux_emuldata* FUNC_2 (struct thread*) ;
 int VAR_0 ;

int
FUNC_3(struct thread *VAR_1, struct linux_set_tid_address_args *VAR_2)
{
 struct linux_emuldata *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_3 != ((void*)0), ("set_tid_address: emuldata not found.\n"));

 VAR_3->child_clear_tid = VAR_2->tidptr;

 VAR_1->td_retval[0] = VAR_3->em_tid;

 FUNC_1(VAR_0, "tidptr(%d) %p, returns %d",
     VAR_3->em_tid, VAR_2->tidptr, VAR_1->td_retval[0]);

 return (0);
}
